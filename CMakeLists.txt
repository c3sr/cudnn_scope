option(ENABLE_CUDNN "Enable CUDNN|Scope (github.com/c3sr/cudnn_scope)" OFF)
if(NOT ENABLE_CUDNN)
  return()
endif()

option(ENABLE_CUDNN_DLPERF "Enable CUDNN|Scope Generated benchmarks" OFF)
option(ENABLE_CUDNN_CUPTI "Enable CUDNN|Scope with CUPTI support" OFF)
option(CUDNN_CUPTI_NUM_ITERS "Number of iterations to use for CUPTI evaluation" 4)
option(CUDNN_BATCH_SIZE "Batch size to use for generated DLPerf data" OFF)

cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(cudnn|Scope LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules ${CMAKE_MODULE_PATH})

include(ScopeStatus)


hunter_add_package(spdlog)

find_package(CUPTI REQUIRED)
find_package(CuDNN REQUIRED)
find_package(spdlog CONFIG REQUIRED)
find_package(CUDA REQUIRED)

# Look for sugar.cmake files in the plugin src directory
sugar_include("src")

# The plugin is a static library that Scope will be linked with
scope_add_library(cudnn_scope OBJECT ${cudnn_BENCHMARK_SOURCES})
target_include_scope_directories(cudnn_scope)
target_include_directories(cudnn_scope
                           PRIVATE ${SCOPE_SRC_DIR}
                                   ${SCOPE_SRC_DIR}/scope
                                   ${SCOPE_THIRDPARTY_DIR}
                                   ${CUDA_INCLUDE_DIRS}
                                   ${PROJECT_BINARY_DIR}/src
                                   ${PROJECT_SOURCE_DIR}/src
                                   ${CUDNN_INCLUDE_DIR}
                                   ${CUPTI_INCLUDE_DIR}
                                   )

# Get the git version
git_get_head_revision(GIT_REFSPEC GIT_HASH)
git_local_changes(GIT_LOCAL_CHANGES)
scope_status(GIT_REFSPEC=${GIT_REFSPEC})
scope_status(GIT_HASH=${GIT_HASH})
scope_status(GIT_LOCAL_CHANGES=${GIT_LOCAL_CHANGES})

set_property(TARGET cudnn_scope PROPERTY CUDA_STANDARD 11)
target_compile_features(cudnn_scope PUBLIC cxx_std_11)
target_compile_options(cudnn_scope
                       PRIVATE -Wno-narrowing
                               -Wno-unused-variable
                               -Wno-unused-function
                               -Wno-vla)

if (ENABLE_CUDNN_CUPTI) 
  target_compile_options(cudnn_scope PRIVATE -DENABLE_CUDNN_CUPTI=1 -DCUDNN_CUPTI_NUM_ITERS=${CUDNN_CUPTI_NUM_ITERS})
endif (ENABLE_CUDNN_CUPTI)
if(ENABLE_CUDNN_DLPERF)
  target_compile_options(cudnn_scope PRIVATE -DGENERATED_BENCHMARK_LAYER=1)
endif(ENABLE_CUDNN_DLPERF)
if(CUDNN_BATCH_SIZE)
  target_compile_options(cudnn_scope PRIVATE -DCUDNN_BATCH_SIZE=${CUDNN_BATCH_SIZE})
endif(CUDNN_BATCH_SIZE)
target_link_libraries(cudnn_scope PRIVATE benchmark::benchmark)
target_link_libraries(cudnn_scope
                      PUBLIC 
                             cuda
                             ${CUDNN_LIBRARY} 
                             ${CUDA_LIBRARIES}
                             ${CUPTI_LIBRARY}
                             ${CUDA_CUBLAS_LIBRARIES}
                             spdlog::spdlog)
scope_status(
  "${PROJECT_SOURCE_DIR}/src/config.hpp.in -> ${PROJECT_BINARY_DIR}/src/config.hpp"
  )
configure_file("${PROJECT_SOURCE_DIR}/src/config.hpp.in"
               "${PROJECT_BINARY_DIR}/src/config.hpp")

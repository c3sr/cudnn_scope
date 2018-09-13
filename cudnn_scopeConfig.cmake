sugar_include("./src")

set(PREFIX ${CMAKE_CURRENT_LIST_DIR})

sugar_include("${PREFIX}/src")

set(cudnn_scope_BENCHMARK_SOURCES ${BENCHMARK_SOURCES})
set(cudnn_scope_BENCHMARK_HEADERS ${BENCHMARK_HEADERS})
set(cudnn_scope_INCLUDE_DIRS "${PREFIX}/src")
set(cudnn_scope_REQUIRED_PACKAGES "")

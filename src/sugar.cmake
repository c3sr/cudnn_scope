# This file generated automatically by: generate_sugar_files.py see wiki for
# more info: https://github.com/ruslo/sugar/wiki/Collecting-sources

if(DEFINED SCOPES_CUDNN_SCOPE_SRC_SUGAR_CMAKE_)
  return()
else()
  set(SCOPES_CUDNN_SCOPE_SRC_SUGAR_CMAKE_ 1)
endif()

include(sugar_files)

sugar_files(cudnn_BENCHMARK_HEADERS
            args.hpp
            c_api.h
            error.hpp
            generated_benchmarks.hpp
            generated_benchmarks_8.hpp
            generated_benchmarks_16.hpp
            helper.hpp
            init.hpp
            utils.hpp)

sugar_files(cudnn_BENCHMARK_SOURCES
            ctc_loss.cpp
            cudnn_activation_bwd.cpp
            cudnn_activation_fwd.cpp
            cudnn_batchnorm_bwd.cpp
            cudnn_batchnorm_fwd.cpp
            cudnn_conv_bias_activation_fwd.cpp
            cudnn_conv_bwd_bias.cpp
            cudnn_conv_bwd_data.cpp
            cudnn_conv_bwd_filter.cpp
            cudnn_conv_fwd.cpp
            cudnn_dropout_bwd.cpp
            cudnn_dropout_fwd.cpp
            cudnn_pooling_bwd.cpp
            cudnn_pooling_fwd.cpp
            cudnn_softmax_bwd.cpp
            cudnn_softmax_fwd.cpp
            cublas_gemm_fwd.cpp
            element_wise.cpp
            init.cpp)

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
            helper.hpp
            init.hpp
            cupti_profiler.hpp
            utils.hpp)

sugar_files(cudnn_BENCHMARK_SOURCES
            # ctc_loss.cpp
            # cublas_gemm_bwd.cpp
            # cublas_gemm_fwd.cpp
            # cublas_gemv_bwd.cpp
            # cublas_gemv_fwd.cpp
            # cudnn_activation_bwd.cpp
            # cudnn_activation_fwd.cpp
            # cudnn_add_tensor.cpp
            # cudnn_batchnorm_bwd.cpp
            # cudnn_batchnorm_fwd.cpp
            # cudnn_conv_bias_activation_fwd.cpp
            # cudnn_conv_bwd_bias.cpp
            # cudnn_conv_bwd_data.cpp
            # cudnn_conv_bwd_filter.cpp
            cudnn_conv_fwd.cpp
            # cudnn_dropout_bwd.cpp
            # cudnn_dropout_fwd.cpp
            # cudnn_op_tensor.cpp
            # cudnn_pooling_bwd.cpp
            # cudnn_pooling_fwd.cpp
            cudnn_softmax_bwd.cpp
            cudnn_softmax_fwd.cpp
            init.cpp)

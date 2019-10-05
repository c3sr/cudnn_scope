#define BENCHMARK_NAME "CUDNN/CONV_FWD"

#include <benchmark/benchmark.h>

#include <cmath>
#include <iostream>
#include <mutex>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#include <cudnn.h>

#include "args.hpp"
#include "error.hpp"
#include "helper.hpp"
#include "init.hpp"
#include "utils.hpp"

// http://www.goldsborough.me/cuda/ml/cudnn/c++/2017/10/01/14-37-23-convolutions_with_cudnn/
// http://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnConvolutionFwdAlgo_t
// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnConvolutionForward
// https://github.com/apache/incubator-mxnet/blob/master/src/operator/nn/cudnn/cudnn_convolution-inl.h
template <typename T, cudnnConvolutionFwdAlgo_t convolution_algorithm
#ifdef CUDNN_SUPPORTS_TENSOR_OPS
          ,
          cudnnMathType_t math_type0 = CUDNN_DEFAULT_MATH
#endif // CUDNN_SUPPORTS_TENSOR_OPS
          >
void iLAYER_CUDNN_CONV_FWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }
#ifdef CUDNN_SUPPORTS_TENSOR_OPS
  int math_type = math_type0;
  if ((is_half_v<T> || math_type == CUDNN_TENSOR_OP_MATH) && !detail::SupportsTensorCore(cuda_device_id)) {
    state.SkipWithError(BENCHMARK_NAME "no Tensorcore support on current device");
    return;
  }
  if (is_half_v<T>) {
    math_type = CUDNN_TENSOR_OP_MATH;
  }
#else
  int math_type = 0;
#endif // CUDNN_SUPPORTS_TENSOR_OPS

  MEM_ALIGNED_128 const T alpha                          = detail::one<T>();
  MEM_ALIGNED_128 const T beta                           = detail::zero<T>();
  MEM_ALIGNED_128 const cudnnConvolutionMode_t conv_mode = CUDNN_CROSS_CORRELATION; // CUDNN_CONVOLUTION;

  //  w, h, c, n, k, filter_w(s), filter_h(r), pad_w, pad_h, wstride, hstride
  const auto batch_size      = state.range(0);
  const auto channels        = state.range(1);
  const auto height          = state.range(2);
  const auto width           = state.range(3);
  const auto num_filters     = state.range(4);
  const auto filter_height   = state.range(5);
  const auto filter_width    = state.range(6);
  const auto pad_height      = state.range(7);
  const auto pad_width       = state.range(8);
  const auto stride_height   = state.range(9);
  const auto stride_width    = state.range(10);
  const auto dilation_height = state.range(11);
  const auto dilation_width  = state.range(12);
  const auto group           = state.range(13) == 0 ? 1 : state.range(13);

  MEM_ALIGNED_128 cudnnConvolutionDescriptor_t convolution_descriptor;
  if (PRINT_IF_ERROR(cudnnCreateConvolutionDescriptor(&convolution_descriptor))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnCreateConvolutionDescriptor");
    return;
  }
  if (PRINT_IF_ERROR(cudnnSetConvolution2dDescriptor(convolution_descriptor,
                                                     /*pad_height=*/pad_height,
                                                     /*pad_width=*/pad_width,
                                                     /*vertical_stride=*/stride_height,
                                                     /*horizontal_stride=*/stride_width,
                                                     /*dilation_height=*/dilation_height,
                                                     /*dilation_width=*/dilation_width,
                                                     /*mode=*/conv_mode,
                                                     /*computeType=*/accumDataType<T>::type))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnSetConvolution2dDescriptor");
    return;
  }
  defer(cudnnDestroyConvolutionDescriptor(convolution_descriptor));

  if (group > 0 && PRINT_IF_ERROR(cudnnSetConvolutionGroupCount(convolution_descriptor, group))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnSetConvolutionGroupCount");
    return;
  }

#ifdef CUDNN_SUPPORTS_TENSOR_OPS
  if (PRINT_IF_ERROR(cudnnSetConvolutionMathType(convolution_descriptor, (cudnnMathType_t) math_type))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnSetConvolutionMathType");
    return;
  }
#endif // CUDNN_SUPPORTS_TENSOR_OPS

  MEM_ALIGNED_128 auto x_tensor = Tensor<T>(state,
                                            {/*batch_size=*/batch_size,
                                             /*channels=*/channels,
                                             /*image_height=*/height,
                                             /*image_width=*/width});
  if (!x_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t x_descriptor = x_tensor.get();

  const auto w_filter = Filter<T>(state,
                                  {/*out_channels=*/num_filters,
                                   /*in_channels=*/channels / group,
                                   /*kernel_height=*/filter_height,
                                   /*kernel_width=*/filter_width});
  if (!w_filter.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnFilterDescriptor_t w_descriptor = w_filter.get();

  int out_n, out_c, out_h, out_w;
  const auto cudnn_get_conv_output_err = cudnnGetConvolution2dForwardOutputDim(
      convolution_descriptor, x_descriptor, w_descriptor, &out_n, &out_c, &out_h, &out_w);
  if (PRINT_IF_ERROR(cudnn_get_conv_output_err)) {
    state.SkipWithError(fmt::format(BENCHMARK_NAME " failed to cudnnGetConvolution2dForwardOutputDim because of {}. "
                                                   "x_shape = [{}x{}x{}x{}], w_shape=[{}x{}x{}x{}], group={}",
                                    utils::detail::error_string(cudnn_get_conv_output_err), batch_size, channels,
                                    height, width, num_filters, channels, filter_width, filter_height, group)
                            .c_str());
    return;
  }

  MEM_ALIGNED_128 auto y_tensor = Tensor<T>(state,
                                            {/*batch_size=*/out_n,
                                             /*channels=*/out_c,
                                             /*image_height=*/out_h,
                                             /*image_width=*/out_w});
  if (!y_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t y_descriptor = y_tensor.get();

  cudnnConvolutionFwdAlgo_t advised_convolution_algorithm = (cudnnConvolutionFwdAlgo_t) -1;
  if (cudnnGetConvolutionForwardAlgorithm(cudnn_handle, x_descriptor, w_descriptor, convolution_descriptor,
                                          y_descriptor, CUDNN_CONVOLUTION_FWD_PREFER_FASTEST, 0,
                                          &advised_convolution_algorithm) != CUDNN_STATUS_SUCCESS) {
    advised_convolution_algorithm = (cudnnConvolutionFwdAlgo_t) -1;
  }

  MEM_ALIGNED_128 size_t workspace_bytes = 0;
  if (std::is_same<T, int8_t>::value) {

    // Note: cudnn workspace size function doesn't work for INT8_CONFIG
    workspace_bytes = 1073741824;
  } else {
    if (PRINT_IF_ERROR(cudnnGetConvolutionForwardWorkspaceSize(cudnn_handle,
                                                               x_descriptor,
                                                               w_descriptor,
                                                               convolution_descriptor,
                                                               y_descriptor,
                                                               convolution_algorithm,
                                                               &workspace_bytes))) {
      workspace_bytes = 1073741824;
      // state.SkipWithError(BENCHMARK_NAME " failed to cudnnGetConvolutionForwardWorkspaceSize");
      // return;
    }
  }
  // std::cerr << "Workspace size: " << (workspace_bytes / 1048576.0) << "MB" << std::endl;

  const int input_bytes  = batch_size * channels * height * width * sizeof(T);
  const int kernel_bytes = num_filters * channels * filter_height * filter_width * sizeof(T);
  auto input             = std::vector<T>(input_bytes / sizeof(T));
  auto kernel            = std::vector<T>(kernel_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());
  std::fill(kernel.begin(), kernel.end(), detail::one<T>());

  const auto output_bytes = sizeof(T) * out_n * out_c * out_h * out_w;

  MEM_ALIGNED_128 DeviceMemory<T> workspace_memory(state, workspace_bytes);
  if (!workspace_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_workspace = workspace_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> x_memory(state, input.data(), input_bytes);
  if (!x_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_x = x_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> w_memory(state, kernel.data(), kernel_bytes);
  if (!w_memory.is_valid) {
    return;
  }
  const auto d_w = w_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> y_memory(state, output_bytes);
  if (!y_memory.is_valid) {
    return;
  }
  const auto d_y = y_memory.get();

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnConvolutionForward(cudnn_handle,
                                        &alpha,
                                        x_descriptor,
                                        d_x,
                                        w_descriptor,
                                        d_w,
                                        convolution_descriptor,
                                        convolution_algorithm,
                                        d_workspace,
                                        workspace_bytes,
                                        &beta,
                                        y_descriptor,
                                        d_y);
  });

  state.counters.insert({{"input_size", batch_size * channels * height * width},
                         {"input_batch_size", batch_size},
                         {"input_channels", channels},
                         {"input_height", height},
                         {"input_width", width},
                         {"num_filters", num_filters},
                         {"filter_height", filter_height},
                         {"filter_width", filter_width},
                         {"pad_height", pad_height},
                         {"pad_width", pad_width},
                         {"stride_height", stride_height},
                         {"stride_width", stride_width},
                         {"dilation_height", dilation_height},
                         {"dilation_width", dilation_width},
                         {"output_size", out_n * out_c * out_h * out_w},
                         {"output_batch_size", out_n},
                         {"output_channels", out_c},
                         {"output_height", out_h},
                         {"output_width", out_w},
                         {"conv_mode", (int) conv_mode},
                         {"workspace_bytes", workspace_bytes},
                         {"workspace_megabytes", workspace_bytes / 1048576.0},
                         {"convolution_algorithm", (int) convolution_algorithm},
                         {"advised_convolution_algorithm", (int) advised_convolution_algorithm},
                         {"x_tensor_layout", (int) x_tensor.layout},
                         {"y_tensor_layout", (int) y_tensor.layout},
                         {"w_filter_layout", (int) w_filter.layout},
                         {"math_type", (int) math_type}});

  const auto N = batch_size, K = num_filters, C = channels, H = height, W = width, R = filter_height, S = filter_width;
  const auto P = out_h, Q = out_w;

  const auto compute_flops = [&](cudnnConvolutionFwdAlgo_t alg) {
    switch (alg) {
      case CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM:
      case CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM:
      case CUDNN_CONVOLUTION_FWD_ALGO_GEMM:
        // flops = filter_width * filter_height * out_w * out_h * channels * out_c * batch_size;
        return static_cast<double>(K) * static_cast<double>(C) * static_cast<double>(R) * static_cast<double>(S) *
               static_cast<double>(N) * static_cast<double>(P) * static_cast<double>(Q);
      case CUDNN_CONVOLUTION_FWD_ALGO_FFT:
      case CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING:
        //(NCKHW + (NC +CK +NK)HW log(HW))
        return (static_cast<double>(N) * static_cast<double>(C) * static_cast<double>(K) * static_cast<double>(H) *
                static_cast<double>(W)) +
               (static_cast<double>(N) * static_cast<double>(C) + static_cast<double>(C) * static_cast<double>(K) +
                static_cast<double>(N) * static_cast<double>(K)) *
                   (static_cast<double>(H) * static_cast<double>(W)) *
                   std::log2(static_cast<double>(H) * static_cast<double>(W));
      case CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED:
      case CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD:
      case CUDNN_CONVOLUTION_FWD_ALGO_DIRECT:
      case CUDNN_CONVOLUTION_FWD_ALGO_COUNT:
        return static_cast<double>(-1); // todo ... implement
      default:
        return static_cast<double>(-1);
    }
  };

  const double predicted_flops = compute_flops(convolution_algorithm) / group;
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

  if (advised_convolution_algorithm != -1) {
    const double predicted_advised_flops = compute_flops(advised_convolution_algorithm);
    state.counters.insert({{"predicted_advised_flops_count", predicted_advised_flops},
                           {"predicted_advised_flops",
                            {predicted_advised_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});
  }

  static const int max_count = 10;
  /* cudnn_err = cudnnGetConvolutionForwardAlgorithmMaxCount(cudnn_handle, &max_count); */
  /* if (PRINT_IF_ERROR(cudnn_err)) { */
  /*   state.SkipWithError(BENCHMARK_NAME " failed to perform cudnnGetConvolutionForwardAlgorithmMaxCount"); */
  /* } */

  MEM_ALIGNED_128 cudnnConvolutionFwdAlgoPerf_t perfResults[max_count];
  int returned_count;
  cudnn_err = cudnnFindConvolutionForwardAlgorithm(cudnn_handle, x_descriptor, w_descriptor, convolution_descriptor,
                                                   y_descriptor, max_count, &returned_count, perfResults);
  if (PRINT_IF_ERROR(cudnn_err)) {
    state.SkipWithError(BENCHMARK_NAME " failed to perform cudnnFindConvolutionForwardAlgorithm");
  }

  for (auto ii = 0; ii < returned_count; ii++) {
    cudnnConvolutionFwdAlgoPerf_t perfResult = perfResults[ii];
    if (perfResult.algo == convolution_algorithm) {
      state.counters.insert({{"advised_time", perfResult.time},
                             {"advised_memory", perfResult.memory},
                             {"advised_determinism", (int) perfResult.determinism}});
    }
  }

  state.SetItemsProcessed(int64_t(state.iterations()) * N * K * C * W * H);
}

template <typename T, cudnnConvolutionFwdAlgo_t convolution_algorithm
#ifdef CUDNN_SUPPORTS_TENSOR_OPS
          ,
          cudnnMathType_t math_type = CUDNN_DEFAULT_MATH
#endif // CUDNN_SUPPORTS_TENSOR_OPS
          >
void LAYER_CUDNN_CONV_FWD_Impl(benchmark::State& state) {

  try {
    iLAYER_CUDNN_CONV_FWD_Impl<T, convolution_algorithm
#ifdef CUDNN_SUPPORTS_TENSOR_OPS
                               ,
                               math_type
#endif // CUDNN_SUPPORTS_TENSOR_OPS
                               >(state);
  } catch (const std::exception& e) {
    const auto err = std::string("Exception in " BENCHMARK_NAME) + e.what();
    state.SkipWithError(err.c_str());
  } catch (const std::string& e) {
    const auto err = std::string("Exception in " BENCHMARK_NAME) + e;
    state.SkipWithError(err.c_str());
  } catch (...) {
    state.SkipWithError("unknown exception in " BENCHMARK_NAME);
  }
}
#define LAYER_CUDNN_CONV_FWD_0_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_1_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_2_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_3_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_4_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_5_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_6_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_7_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_8_Impl LAYER_CUDNN_CONV_FWD_Impl
#define LAYER_CUDNN_CONV_FWD_9_Impl LAYER_CUDNN_CONV_FWD_Impl

#ifdef GENERATED_BENCHMARK_LAYER

/* #define ENABLE_LAYER_CUDNN_CONV_FWD 1 */

#include "generated_benchmarks.hpp"

/* #undef ENABLE_LAYER_CUDNN_CONV_FWD */

#else // GENERATED_BENCHMARK_LAYER

template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_INT8(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<int8_t, convolution_algorithm>(state);
}

template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_INT32(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<int32_t, convolution_algorithm>(state);
}

template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_HALF(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<__half, convolution_algorithm>(state);
}

#ifdef CUDNN_SUPPORTS_TENSOR_OPS
template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_HALF_TENSOROP(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
}
#endif

template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
}

template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
static void LAYER_CUDNN_CONV_FWD_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_CONV_FWD_Impl<double, convolution_algorithm>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

#define BENCHMARK_LAYER(b)                                                                                             \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->CONV_PROBLEMS()->UseManualTime();             \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->CONV_PROBLEMS()->UseManualTime();     \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->CONV_PROBLEMS()->UseManualTime();                      \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_COUNT)->CONV_PROBLEMS()->UseManualTime();                     \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->CONV_PROBLEMS()->UseManualTime();                    \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->CONV_PROBLEMS()->UseManualTime();                       \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->CONV_PROBLEMS()->UseManualTime();                \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->CONV_PROBLEMS()->UseManualTime();                  \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->CONV_PROBLEMS()->UseManualTime()

/* BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_INT8); */
/* BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_INT32); */
BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_HALF);
#ifdef CUDNN_SUPPORTS_TENSOR_OPS
BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_HALF_TENSOROP);
#endif // CUDNN_SUPPORTS_TENSOR_OPS
BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_FLOAT);
// BENCHMARK_LAYER(LAYER_CUDNN_CONV_FWD_DOUBLE);

#endif // GENERATED_BENCHMARK_LAYER

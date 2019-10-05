#define BENCHMARK_NAME "CUDNN/ACTIVATION_FWD"

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

// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnActivationMode_t
// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnActivationForward
template <typename T, cudnnActivationMode_t activation_mode>
static void iLAYER_CUDNN_ACTIVATION_FWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  // n, c, h, w
  const auto in_n = state.range(0);
  const auto in_c = state.range(1);
  const auto in_h = state.range(2) == -1 ? 1 : state.range(2);
  const auto in_w = state.range(3) == -1 ? 1 : state.range(3);

  MEM_ALIGNED_128 const T alpha = detail::one<T>();
  MEM_ALIGNED_128 const T beta  = detail::zero<T>();
  const double coef             = 1;

  const auto out_n = in_n, out_c = in_c, out_h = in_h, out_w = in_w;

  MEM_ALIGNED_128 auto x_tensor = Tensor<T>(state,
                                            {/*batch_size=*/in_n,
                                             /*channels=*/in_c,
                                             /*image_height=*/in_h,
                                             /*image_width=*/in_w});
  if (!x_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t x_descriptor = x_tensor.get();

  const auto input_bytes = in_n * in_c * in_w * in_h * sizeof(T);
  auto input             = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  MEM_ALIGNED_128 DeviceMemory<T> x_memory(state, input.data(), input_bytes);
  if (!x_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_x = x_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> y_memory(state, input_bytes);
  if (!y_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_y = y_memory.get();

  MEM_ALIGNED_128 cudnnActivationDescriptor_t activation_descriptor;
  if (PRINT_IF_ERROR(cudnnCreateActivationDescriptor(&activation_descriptor))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnCreateActivationDescriptor");
    return;
  }

  if (PRINT_IF_ERROR(
          cudnnSetActivationDescriptor(activation_descriptor, activation_mode, CUDNN_NOT_PROPAGATE_NAN, coef))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnSetActivationDescriptor");
    return;
  }
  defer(cudnnDestroyActivationDescriptor(activation_descriptor));

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnActivationForward(
        cudnn_handle, activation_descriptor, &alpha, x_descriptor, d_x, &beta, x_descriptor, d_y);
  });

  state.counters.insert({{"input_size", in_n * in_c * in_h * in_w},
                         {"input_batch_size", in_n},
                         {"input_channels", in_c},
                         {"input_height", in_h},
                         {"input_width", in_w},
                         {"output_size", out_n * out_c * out_h * out_w},
                         {"output_batch_size", out_n},
                         {"output_channels", out_c},
                         {"output_height", out_h},
                         {"output_width", out_w},
                         {"x_tensor_layout", (int) x_tensor.layout},
                         {"activation_mode", (int) activation_mode}});

  const auto compute_flops = [&](cudnnActivationMode_t mode) {
    switch (mode) {
      case CUDNN_ACTIVATION_IDENTITY:
        return static_cast<double>(0);
      case CUDNN_ACTIVATION_SIGMOID:
      case CUDNN_ACTIVATION_RELU:
      case CUDNN_ACTIVATION_TANH:
      case CUDNN_ACTIVATION_CLIPPED_RELU:
      case CUDNN_ACTIVATION_ELU:
        return static_cast<double>(in_n * in_c * in_h * in_w);
      default:
        return static_cast<double>(-1);
    }
  };

  const double predicted_flops = compute_flops(activation_mode);
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

  state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
}

template <typename T, cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_Impl(benchmark::State& state) {

  try {
    iLAYER_CUDNN_ACTIVATION_FWD_Impl<T, activation_mode>(state);
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

template <typename T, cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_IDENTITY_FWD_Impl(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<T, activation_mode>(state);
}

#ifdef GENERATED_BENCHMARK_LAYER

#define ENABLE_LAYER_CUDNN_ACTIVATION_FWD 1
#define ENABLE_LAYER_CUDNN_IDENTITY_FWD 1

#include "generated_benchmarks.hpp"

#undef ENABLE_LAYER_CUDNN_IDENTITY_FWD
#undef ENABLE_LAYER_CUDNN_ACTIVATION_FWD

#else // GENERATED_BENCHMARK_LAYER

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_INT8(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<int8_t, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_INT32(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<int32_t, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_HALF(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<double, activation_mode>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

#define BENCHMARK_LAYER(b)                                                                                             \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_IDENTITY)->CONV_PROBLEMS()->UseManualTime();                            \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_SIGMOID)->CONV_PROBLEMS()->UseManualTime();                             \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->CONV_PROBLEMS()->UseManualTime();                                \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_TANH)->CONV_PROBLEMS()->UseManualTime();                                \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->CONV_PROBLEMS()->UseManualTime();                        \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_ELU)->CONV_PROBLEMS()->UseManualTime()

/* BENCHMARK_LAYER(LAYER_CUDNN_ACTIVATION_FWD_INT8); */
/* BENCHMARK_LAYER(LAYER_CUDNN_ACTIVATION_FWD_INT32); */
BENCHMARK_LAYER(LAYER_CUDNN_ACTIVATION_FWD_HALF);
BENCHMARK_LAYER(LAYER_CUDNN_ACTIVATION_FWD_FLOAT);
// BENCHMARK_LAYER(LAYER_CUDNN_ACTIVATION_FWD_DOUBLE);

#endif // GENERATED_BENCHMARK_LAYER

#define BENCHMARK_NAME "CUDNN/BATCHNORM_BWD"

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

// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnBatchNormMode_t
// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnBatchNormalizationBackward
template <typename T, cudnnBatchNormMode_t batchnorm_mode>
static void iLAYER_CUDNN_BATCHNORM_BWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  // n, c, h, w
  const auto in_n = state.range(0);
  const auto in_c = state.range(1);
  const auto in_h = state.range(2);
  const auto in_w = state.range(3);

  MEM_ALIGNED_128 const T alpha = detail::one<T>();
  MEM_ALIGNED_128 const T beta  = detail::zero<T>();
  const double epsilon          = 1e-5; // CUDNN_BN_MIN_EPSILON

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

  MEM_ALIGNED_128 cudnnTensorDescriptor_t scale_bias_descriptor{nullptr};
  if (PRINT_IF_ERROR(cudnnCreateTensorDescriptor(&scale_bias_descriptor))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnCreateTensorDescriptor");
    return;
  }

  if (PRINT_IF_ERROR(cudnnDeriveBNTensorDescriptor(scale_bias_descriptor, x_descriptor, batchnorm_mode))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnDeriveBNTensorDescriptor");
    return;
  }

  size_t scale_bias_bytes;
  if (PRINT_IF_ERROR(cudnnGetTensorSizeInBytes(scale_bias_descriptor, &scale_bias_bytes))) {
    state.SkipWithError(BENCHMARK_NAME " failed to cudnnGetTensorSizeInBytes");
    return;
  }

  auto scale_bias = std::vector<T>(scale_bias_bytes / sizeof(T));
  std::fill(scale_bias.begin(), scale_bias.end(), detail::one<T>());

  const auto input_bytes = in_n * in_c * in_w * in_h * sizeof(T);
  auto input             = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  MEM_ALIGNED_128 DeviceMemory<T> x_memory(state, input.data(), input_bytes);
  if (!x_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_x = x_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> dy_memory(state, input.data(), input_bytes);
  if (!dy_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dy = dy_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> dx_memory(state, input_bytes);
  if (!dx_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dx = dx_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> scale_memory(state, scale_bias.data(), scale_bias_bytes);
  if (!scale_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_scale = scale_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> dscale_memory(state, scale_bias_bytes);
  if (!dscale_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dscale = dscale_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> dbias_memory(state, scale_bias_bytes);
  if (!dbias_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dbias = dbias_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> saved_mean_memory(state, scale_bias.data(), scale_bias_bytes);
  if (!saved_mean_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_saved_mean = saved_mean_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> saved_in_var_memory(state, scale_bias.data(), scale_bias_bytes);
  if (!saved_in_var_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_saved_in_var = saved_in_var_memory.get();

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnBatchNormalizationBackward(
        cudnn_handle, batchnorm_mode, &alpha, &beta, &alpha, &beta, x_descriptor, d_x, x_descriptor, d_dy, x_descriptor,
        d_dx, scale_bias_descriptor, d_scale, d_dscale, d_dbias, epsilon, d_saved_mean, d_saved_in_var);
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
                         {"batchnorm_mode", (int) batchnorm_mode}});

  const auto compute_flops = [&](cudnnBatchNormMode_t mode) {
    switch (mode) {
      case CUDNN_BATCHNORM_PER_ACTIVATION:
      case CUDNN_BATCHNORM_SPATIAL:
      case CUDNN_BATCHNORM_SPATIAL_PERSISTENT:
        /* case CUDNN_BATCHNORM_SPATIAL_PERSISTENT: */
        return static_cast<double>(in_n * in_c * in_h * in_w);
      default:
        return static_cast<double>(-1);
    }
  };

  const double predicted_flops = compute_flops(batchnorm_mode);
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

  state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
}

template <typename T, cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_Impl(benchmark::State& state) {
  try {
    iLAYER_CUDNN_BATCHNORM_BWD_Impl<T, batchnorm_mode>(state);
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

#ifdef GENERATED_BENCHMARK_LAYER

#define ENABLE_LAYER_CUDNN_BATCHNORM_BWD 1

#include "generated_benchmarks.hpp"

#undef ENABLE_LAYER_CUDNN_BATCHNORM_BWD

#else // GENERATED_BENCHMARK_LAYER

template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_INT8(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<int8_t, batchnorm_mode>(state);
}

template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_INT32(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<int32_t, batchnorm_mode>(state);
}

template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_HALF(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<__half, batchnorm_mode>(state);
}

template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
}

template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<double, batchnorm_mode>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

#define BENCHMARK_LAYER(b)                                                                                             \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_SPATIAL)->CONV_PROBLEMS()->UseManualTime();                              \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_SPATIAL_PERSISTENT)->CONV_PROBLEMS()->UseManualTime();                   \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->CONV_PROBLEMS()->UseManualTime();

/* BENCHMARK_LAYER(LAYER_CUDNN_BATCHNORM_BWD_INT8); */
/* BENCHMARK_LAYER(LAYER_CUDNN_BATCHNORM_BWD_INT32); */
BENCHMARK_LAYER(LAYER_CUDNN_BATCHNORM_BWD_HALF);
BENCHMARK_LAYER(LAYER_CUDNN_BATCHNORM_BWD_FLOAT);
// BENCHMARK_LAYER(LAYER_CUDNN_BATCHNORM_BWD_DOUBLE);

#endif // GENERATED_BENCHMARK_LAYER

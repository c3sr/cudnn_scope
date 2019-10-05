#define BENCHMARK_NAME "CUDNN/SOFTMAX_FWD"

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

// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnSoftmaxMode_t
// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnSoftmaxBackward
template <typename T, cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void iLAYER_CUDNN_SOFTMAX_BWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  const auto in_n = state.range(0);
  const auto in_c = state.range(1);
  const auto in_h = state.range(2) == -1 ? 1 : state.range(2);
  const auto in_w = state.range(3) == -1 ? 1 : state.range(3);

  MEM_ALIGNED_128 const T alpha  = detail::one<T>();
   MEM_ALIGNED_128 const T beta = detail::zero<T>();

  const auto out_n = in_n, out_c = in_c, out_h = in_h, out_w = in_w;

  MEM_ALIGNED_128 auto dx_tensor = Tensor<T>(state,
                             {/*batch_size=*/in_n,
                              /*channels=*/in_c,
                              /*image_height=*/in_h,
                              /*image_width=*/in_w});
  if (!dx_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t dx_descriptor = dx_tensor.get();

  const auto input_bytes = in_n * in_c * in_w * in_h * sizeof(T);
  auto input             = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  MEM_ALIGNED_128 DeviceMemory<T> dx_memory(state, input_bytes);
  if (!dx_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dx = dx_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> y_memory(state, input.data(), input_bytes);
  if (!y_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_y = y_memory.get();

  MEM_ALIGNED_128 DeviceMemory<T> dy_memory(state, input.data(), input_bytes);
  if (!dy_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_dy = dy_memory.get();

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnSoftmaxBackward(cudnn_handle,
                                     softmax_algorithm,
                                     softmax_mode,
                                     &alpha,
                                     dx_descriptor,
                                     d_y,
                                     dx_descriptor,
                                     d_dy,
                                     &beta,
                                     dx_descriptor,
                                     d_dx);
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
                         {"softmax_algorithm", (int) softmax_algorithm},
                         {"softmax_mode", (int) softmax_mode}});

  const auto compute_flops = [&](cudnnSoftmaxMode_t mode) {
    switch (mode) {
      case CUDNN_SOFTMAX_MODE_INSTANCE:
      case CUDNN_SOFTMAX_MODE_CHANNEL:
        return static_cast<double>(in_n * in_c * in_h * in_w);
      default:
        return static_cast<double>(-1);
    }
  };

  const double predicted_flops = compute_flops(softmax_mode);
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

  state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
}

template <typename T, cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_Impl(benchmark::State& state) {
  try {
    iLAYER_CUDNN_SOFTMAX_BWD_Impl<T, softmax_algorithm, softmax_mode>(state);
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

#define ENABLE_LAYER_CUDNN_SOFTMAX_BWD 1

#include "generated_benchmarks.hpp"

#undef ENABLE_LAYER_CUDNN_SOFTMAX_BWD

#else // GENERATED_BENCHMARK_LAYER

template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_INT8(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<int8_t, softmax_algorithm, softmax_mode>(state);
}

template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_INT32(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<int32_t, softmax_algorithm, softmax_mode>(state);
}

template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_HALF(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<__half, softmax_algorithm, softmax_mode>(state);
}

template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<float, softmax_algorithm, softmax_mode>(state);
}

template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<double, softmax_algorithm, softmax_mode>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

#define BENCHMARK_CUDNN0(b, SOFTMAX_MODE)                                                                              \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_SOFTMAX_FAST, SOFTMAX_MODE)->CONV_PROBLEMS()->UseManualTime();                     \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_SOFTMAX_ACCURATE, SOFTMAX_MODE)->CONV_PROBLEMS()->UseManualTime();                 \
  BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_SOFTMAX_LOG, SOFTMAX_MODE)->CONV_PROBLEMS()->UseManualTime()

#define BENCHMARK_LAYER(b)                                                                                             \
  BENCHMARK_CUDNN0(b, CUDNN_SOFTMAX_MODE_INSTANCE);                                                                    \
  BENCHMARK_CUDNN0(b, CUDNN_SOFTMAX_MODE_CHANNEL)

/* BENCHMARK_LAYER(LAYER_CUDNN_SOFTMAX_BWD_INT8); */
/* BENCHMARK_LAYER(LAYER_CUDNN_SOFTMAX_BWD_INT32); */
BENCHMARK_LAYER(LAYER_CUDNN_SOFTMAX_BWD_HALF);
BENCHMARK_LAYER(LAYER_CUDNN_SOFTMAX_BWD_FLOAT);
// BENCHMARK_LAYER(LAYER_CUDNN_SOFTMAX_BWD_DOUBLE);

#endif // GENERATED_BENCHMARK_LAYER

#define BENCHMARK_NAME "CUDNN/ADD_TENSOR"

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

// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnAddTensor
template <typename T>
static void iLAYER_CUDNN_ADD_TENSOR_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  const auto in_n = state.range(0);
  const auto in_c = state.range(1);
  const auto in_h = state.range(2);
  const auto in_w = state.range(3);
#ifdef GENERATED_BENCHMARK_LAYER
  const auto bias_dim = state.range(16);
  const auto alpha    = state.range(17);
  const auto beta     = state.range(18);
#else  // GENERATED_BENCHMARK_LAYER
  const auto bias_dim = state.range(4);
  const auto alpha    = state.range(5);
  const auto beta     = state.range(6);
#endif // GENERATED_BENCHMARK_LAYER

  auto y_tensor = Tensor<T>(state,
                            {/*batch_size=*/in_n,
                             /*channels=*/in_c,
                             /*image_height=*/in_h,
                             /*image_width=*/in_w});
  if (!y_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t y_descriptor = y_tensor.get();

  auto bias_tensor = Tensor<T>(state, {bias_dim});
  if (!bias_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t a_descriptor = a_tensor.get();

  const auto input_bytes = in_n * in_w * in_h * in_c * sizeof(T);
  auto input             = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  DeviceMemory<T> y_memory(state, input.data(), input_bytes);
  if (!y_memory.is_valid) {
    return;
  }
  const auto d_y = y_memory.get();

  const auto bias_bytes = bias_dim * sizeof(T);
  auto bias             = std::vector<T>(bias_bytes / sizeof(T));
  std::fill(bias.begin(), bias.end(), detail::one<T>());

  DeviceMemory<T> bias_memory(state, bias.data(), bias_bytes;
  if (!bias_memory.is_valid) {
    return;
  }
  const auto d_bias = bias_memory.get();

  cudaEvent_t start, stop;
  PRINT_IF_ERROR(cudaEventCreate(&start));
  PRINT_IF_ERROR(cudaEventCreate(&stop));

  for (auto _ : state) {
    cudaEventRecord(start, NULL);

    const cudnnStatus_t cudnn_err = cudnnAddTensor(cudnn_handle,
                                                   reinterpret_cast<T*>(&alpha),
                                                   bias_descriptor,
                                                   d_bias,
                                                   reinterpret_cast<T*>(&beta),
                                                   y_descriptor,
                                                   d_y);

    cudaEventRecord(stop, NULL);
    const auto cuda_err = cudaEventSynchronize(stop);

    state.PauseTiming();
    if (PRINT_IF_ERROR(cudnn_err)) {
      state.SkipWithError(BENCHMARK_NAME " failed to perform cudnnAddTensor");
      break;
    }
    if (PRINT_IF_ERROR(cuda_err)) {
      state.SkipWithError(BENCHMARK_NAME " failed to launch kernel");
      break;
    }

    float msecTotal = 0.0f;
    if (PRINT_IF_ERROR(cudaEventElapsedTime(&msecTotal, start, stop))) {
      state.SkipWithError(BENCHMARK_NAME " failed to launch kernel");
      break;
    }
    state.SetIterationTime(msecTotal / 1000);
    state.ResumeTiming();
  }

  state.counters.insert({
    {"input_size", in_n * in_c * in_h * in_w}, {"input_batch_size", in_n}, {"input_channels", in_c},
        {"input_height", in_h}, {"input_width", in_w}, {"bias_dim", bias_dim},

        const double predicted_flops = in_n * in_c * in_h * in_w;
    state.counters.insert(
        {{"predicted_flops_count", predicted_flops},
         {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

    state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
}

template <typename T>
static void LAYER_CUDNN_ADD_TENSOR_Impl(benchmark::State& state) {
    try {
      iLAYER_CUDNN_ADD_TENSOR_Impl<T>(state);
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

#define ENABLE_LAYER_CUDNN_ADD_TENSOR 1

#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_benchmarks_1.hpp"
#include "dlperf/generated_benchmarks_16.hpp"
#include "dlperf/generated_benchmarks_2.hpp"
#include "dlperf/generated_benchmarks_4.hpp"
#include "dlperf/generated_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_benchmarks_16.hpp"
#endif // CUDNN_BATCH_SIZE

#undef ENABLE_LAYER_CUDNN_ADD_TENSOR

#else // GENERATED_BENCHMARK_LAYER

static void LAYER_CUDNN_ADD_TENSOR_INT8(benchmark::State& state) {
    LAYER_CUDNN_ADD_TENSOR_Impl<int8_t>(state);
}

static void LAYER_CUDNN_ADD_TENSOR_INT32(benchmark::State& state) {
    LAYER_CUDNN_ADD_TENSOR_Impl<int32_t>(state);
}

static void LAYER_CUDNN_ADD_TENSOR_HALF(benchmark::State& state) {
    LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
}

static void LAYER_CUDNN_ADD_TENSOR_FLOAT(benchmark::State& state) {
    LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
}

static void LAYER_CUDNN_ADD_TENSOR_DOUBLE(benchmark::State& state) {
    LAYER_CUDNN_ADD_TENSOR_Impl<double>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

/* BENCHMARK(LAYER_CUDNN_ADD_TENSOR_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK(LAYER_CUDNN_ADD_TENSOR_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
BENCHMARK(LAYER_CUDNN_ADD_TENSOR_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK(LAYER_CUDNN_ADD_TENSOR_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
  // BENCHMARK(LAYER_CUDNN_ADD_TENSOR_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

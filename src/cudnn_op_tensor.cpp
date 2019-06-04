#define BENCHMARK_NAME "CUDNN/OP_TENSOR"

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
template <typename T, cudnnOpTensorOp_t op_type>
static void iLAYER_CUDNN_OP_TENSOR_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  // C = OP(alpha * A, alpha * B) + beta * C
  const auto in_n = state.range(0);
  const auto in_c = state.range(1);
  const auto in_h = state.range(2);
  const auto in_w = state.range(3);

  const T alpha = 1.0;
  const T beta  = 0.0;

  const auto out_n = in_n, out_c = in_c, out_h = in_h, out_w = in_w;

  cudnnOpTensorDescriptor_t op_descriptor;
  PRINT_IF_ERROR(cudnnCreateOpTensorDescriptor(&op_descriptor));
  PRINT_IF_ERROR(cudnnSetOpTensorDescriptor(op_descriptor, op_type, CUDNN_DATA_FLOAT, CUDNN_NOT_PROPAGATE_NAN));

  auto input_a_tensor = Tensor<T>(state,
                                  {
                                      in_n,
                                      in_c,
                                      in_h,
                                      in_w,
                                  });
  if (!input_a_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t input_a_descriptor = input_a_tensor.get();

  auto input_b_tensor = Tensor<T>(state,
                                  {
                                      in_n,
                                      in_c,
                                      in_h,
                                      in_w,
                                  });
  if (!input_b_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t input_b_descriptor = input_b_tensor.get();

  auto output_tensor = Tensor<T>(state, {out_n, out_c, out_h, out_w});
  if (!output_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t output_descriptor = output_tensor.get();

  const auto input_bytes  = sizeof(T) * in_n * in_w * in_h * in_c;
  const auto output_bytes = sizeof(T) * out_n * out_c * out_h * out_w;

  auto input = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  DeviceMemory<T> input_a_memory(state, input.data(), input_bytes);
  if (!input_a_memory.is_valid) {
    return;
  }
  DeviceMemory<T> input_b_memory(state, input.data(), input_bytes);
  if (!input_b_memory.is_valid) {
    return;
  }
  const auto d_a_input = input_a_memory.get();
  const auto d_b_input = input_b_memory.get();

  auto output = std::vector<T>(output_bytes / sizeof(T));
  std::fill(output.begin(), output.end(), detail::one<T>());
  DeviceMemory<T> output_memory(state, output.data(), output_bytes);
  if (!output_memory.is_valid) {
    return;
  }
  const auto d_output = output_memory.get();

  cudaEvent_t start, stop;
  PRINT_IF_ERROR(cudaEventCreate(&start));
  PRINT_IF_ERROR(cudaEventCreate(&stop));

  for (auto _ : state) {
    cudaEventRecord(start, NULL);

    const cudnnStatus_t cudnn_err =
        cudnnOpTensor(cudnn_handle, op_descriptor, &alpha, input_a_descriptor, d_a_input, &alpha, input_b_descriptor,
                      d_b_input, &beta, output_descriptor, d_output);

    cudaEventRecord(stop, NULL);
    const auto cuda_err = cudaEventSynchronize(stop);

    state.PauseTiming();
    if (PRINT_IF_ERROR(cudnn_err)) {
      state.SkipWithError(fmt::format(BENCHMARK_NAME " failed to perform cudnnAddTensor because of {}",
                                      utils::detail::error_string(cudnn_err))
                              .c_str());
      break;
    }
    if (PRINT_IF_ERROR(cuda_err)) {
      state.SkipWithError(fmt::format(BENCHMARK_NAME " failed to perform cudnnAddTensor because of {}",
                                      utils::detail::error_string(cuda_err))
                              .c_str());
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

  state.counters.insert({{"input_size", in_n * in_c * in_h * in_w},
                         {"input_n", in_n},
                         {"input_c", in_c},
                         {"input_h", in_h},
                         {"input_w", in_w},
                         {"alpha", alpha},
                         {"alpha", alpha},
                         {"beta", beta},
                         {"op_type", (int) op_type}});

  state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
}

template <typename T, cudnnOpTensorOp_t op_type>
static void LAYER_CUDNN_OP_TENSOR_FWD_Impl(benchmark::State& state) {
  try {
    iLAYER_CUDNN_OP_TENSOR_Impl<T, op_type>(state);
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

template <typename T, cudnnOpTensorOp_t op_type>
static void LAYER_CUDNN_OP_TENSOR_BWD_Impl(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_FWD_Impl<T, op_type>(state);
}

#ifdef GENERATED_BENCHMARK_LAYER

#define ENABLE_LAYER_CUDNN_OP_TENSOR 1

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

#undef ENABLE_LAYER_CUDNN_OP_TENSOR

#else // GENERATED_BENCHMARK_LAYER

static void LAYER_CUDNN_OP_TENSOR_INT8(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_Impl<int8_t>(state);
}

static void LAYER_CUDNN_OP_TENSOR_INT32(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_Impl<int32_t>(state);
}

static void LAYER_CUDNN_OP_TENSOR_HALF(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_Impl<__half>(state);
}

static void LAYER_CUDNN_OP_TENSOR_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_Impl<float>(state);
}

static void LAYER_CUDNN_OP_TENSOR_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_Impl<double>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

/* BENCHMARK(LAYER_CUDNN_OP_TENSOR_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK(LAYER_CUDNN_OP_TENSOR_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
BENCHMARK(LAYER_CUDNN_OP_TENSOR_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK(LAYER_CUDNN_OP_TENSOR_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
// BENCHMARK(LAYER_CUDNN_OP_TENSOR_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

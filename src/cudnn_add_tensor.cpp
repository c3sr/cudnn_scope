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

  const auto out_0      = state.range(0);
  const auto out_1      = state.range(1);
  const auto out_2      = state.range(2);
  const auto out_3      = state.range(3);
  const auto bias_0     = state.range(4);
  const auto bias_1     = state.range(5);
  const auto bias_2     = state.range(6);
  const auto bias_3     = state.range(7);
  const auto batch_size = state.range(8);

  const auto out_n = out_0;
  const auto out_c = out_1;
  const auto out_h = out_2;
  const auto out_w = out_3;

  MEM_ALIGNED_128 const T alpha  = detail::one<T>();
   MEM_ALIGNED_128 const T beta = detail::zero<T>();

  const auto bias_dim = out_c;
  MEM_ALIGNED_128 auto input_tensor   = Tensor<T>(state, {bias_0, bias_1, bias_2, bias_3});
  if (!input_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t input_descriptor = input_tensor.get();

  MEM_ALIGNED_128 auto output_tensor = Tensor<T>(state, {out_n, out_c, out_h, out_w});
  if (!output_tensor.is_valid) {
    return;
  }
  MEM_ALIGNED_128 cudnnTensorDescriptor_t output_descriptor = output_tensor.get();

  const auto input_bytes  = sizeof(T) * bias_0 * bias_1 * bias_2 * bias_3;
  const auto output_bytes = sizeof(T) * out_n * out_c * out_h * out_w;

  auto input = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  MEM_ALIGNED_128 DeviceMemory<T> input_memory(state, input.data(), input_bytes);
  if (!input_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_input = input_memory.get();

  auto output = std::vector<T>(output_bytes / sizeof(T));
  std::fill(output.begin(), output.end(), detail::one<T>());

  MEM_ALIGNED_128 DeviceMemory<T> output_memory(state, output.data(), output_bytes);
  if (!output_memory.is_valid) {
    return;
  }
  MEM_ALIGNED_128 const auto d_output = output_memory.get();

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnAddTensor(cudnn_handle, &alpha, input_descriptor, d_input, &beta, output_descriptor, d_output);
  });

  state.counters.insert({{"a_desc_0", bias_0},
                         {"a_desc_1", bias_1},
                         {"a_desc_2", bias_2},
                         {"a_desc_3", bias_3},
                         {"c_desc_0", out_0},
                         {"c_desc_1", out_1},
                         {"c_desc_2", out_2},
                         {"c_desc_3", out_3},
                         {"alpha", (int) alpha},
                         {"beta", (int) beta}});

  const double predicted_flops = out_0 * out_1 * out_2 * out_3;
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

  state.SetItemsProcessed(int64_t(state.iterations()) * predicted_flops);
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

#include "generated_benchmarks.hpp"

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

/* BENCHMARK_CUDNN(LAYER_CUDNN_ADD_TENSOR_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK_CUDNN(LAYER_CUDNN_ADD_TENSOR_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
BENCHMARK_CUDNN(LAYER_CUDNN_ADD_TENSOR_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK_CUDNN(LAYER_CUDNN_ADD_TENSOR_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
// BENCHMARK_CUDNN(LAYER_CUDNN_ADD_TENSOR_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

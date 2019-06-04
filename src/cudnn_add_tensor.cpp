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

  const auto batch_size      = state.range(0);
  const auto channels        = state.range(1);
  const auto height          = state.range(2);
  const auto width           = state.range(3);
  const auto num_filters     = state.range(4);
  const auto filter_width    = state.range(5);
  const auto filter_height   = state.range(6);
  const auto pad_width       = state.range(7);
  const auto pad_height      = state.range(8);
  const auto stride_width    = state.range(9);
  const auto stride_height   = state.range(10);
  const auto dilation_height = state.range(11);
  const auto dilation_width  = state.range(12);
#ifdef GENERATED_BENCHMARK_LAYER
  const auto bias_dim = state.range(16);
  const T alpha       = state.range(17);
  const T beta        = state.range(18);
#else // GENERATED_BENCHMARK_LAYER
#error "pass the right thing"
#endif // GENERATED_BENCHMARK_LAYER

  const auto in_n  = batch_size;
  const auto in_w  = channels;
  const auto in_h  = height;
  const auto in_c  = width;
  const auto out_n = batch_size;
  const auto out_w = detail::calc_conv_out_dim(width, filter_width, pad_width, stride_width, dilation_width);
  const auto out_h = detail::calc_conv_out_dim(height, filter_height, pad_height, stride_height, dilation_height);
  const auto out_c = num_filters;

  auto input_tensor = Tensor<T>(state,
                                {/*batch_size=*/1,
                                 /*channels=*/bias_dim,
                                 /*image_height=*/1,
                                 /*image_width=*/1});
  if (!input_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t input_descriptor = input_tensor.get();

  auto output_tensor = Tensor<T>(state, {out_n, out_c, out_h, out_w});
  if (!output_tensor.is_valid) {
    return;
  }
  cudnnTensorDescriptor_t output_descriptor = output_tensor.get();

  const auto input_bytes  = sizeof(T) * bias_dim;
  const auto output_bytes = sizeof(T) * out_n * out_c * out_h * out_w;

  auto input = std::vector<T>(input_bytes / sizeof(T));
  std::fill(input.begin(), input.end(), detail::one<T>());

  DeviceMemory<T> input_memory(state, input.data(), input_bytes);
  if (!input_memory.is_valid) {
    return;
  }
  const auto d_input = input_memory.get();

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
        cudnnAddTensor(cudnn_handle, &alpha, input_descriptor, d_input, &beta, output_descriptor, d_output);

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
                         {"output_size", out_n * out_c * out_h * out_w},
                         {"output_batch_size", out_n},
                         {"output_channels", out_c},
                         {"output_height", out_h},
                         {"output_width", out_w},
                         {"bias_dim", bias_dim}});
#if 0
  std::cout << ""
            << "input_bias_dim " << bias_dim <<
"\n";
  std::cout << ""
            << "output_batch_size " << out_n <<
      " output_channels " << out_c << " output_height " << out_h << " output_width " << out_w << "\n";

  const double predicted_flops = in_n * in_c * in_h * in_w;
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

#endif
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

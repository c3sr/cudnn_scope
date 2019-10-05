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

  MEM_ALIGNED_128 const T alpha  = detail::one<T>();
   MEM_ALIGNED_128 const T beta = detail::zero<T>();

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

  cudnnStatus_t cudnn_err;
  BENCHMARK_BLOCK(cudnn_err, {
    cudnn_err = cudnnOpTensor(cudnn_handle, op_descriptor, &alpha, input_a_descriptor, d_a_input, &alpha,
                              input_b_descriptor, d_b_input, &beta, output_descriptor, d_output);
  });

  state.counters.insert({{"input_size", in_n * in_c * in_h * in_w},
                         {"input_n", in_n},
                         {"input_c", in_c},
                         {"input_h", in_h},
                         {"input_w", in_w},
                         {"alpha", (double) alpha},
                         {"beta", (double) beta},
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

#define _DECLARE_OP(DIRECTION, OP_NAME, OP_TYPE)                                                                       \
  template <typename T>                                                                                                \
  static void LAYER_CUDNN_OP_TENSOR_##OP_NAME##_##DIRECTION##_Impl(benchmark::State& state) {                          \
    LAYER_CUDNN_OP_TENSOR_BWD_Impl<T, OP_TYPE>(state);                                                                 \
  }

#define DECLARE_OP(OP_NAME, OP_TYPE)                                                                                   \
  _DECLARE_OP(FWD, OP_NAME, OP_TYPE)                                                                                   \
  _DECLARE_OP(BWD, OP_NAME, OP_TYPE)

DECLARE_OP(ADD, CUDNN_OP_TENSOR_ADD)
DECLARE_OP(MUL, CUDNN_OP_TENSOR_MUL)
DECLARE_OP(MIN, CUDNN_OP_TENSOR_MIN)
DECLARE_OP(MAX, CUDNN_OP_TENSOR_MAX)
DECLARE_OP(SQRT, CUDNN_OP_TENSOR_SQRT)
DECLARE_OP(NOT, CUDNN_OP_TENSOR_NOT)

#ifdef GENERATED_BENCHMARK_LAYER

#define ENABLE_LAYER_CUDNN_OP_TENSOR 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MUL_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MIN_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MAX_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_SQRT_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_NOT_FWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_BWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MUL_BWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MIN_BWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_MAX_BWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_SQRT_BWD 1
#define ENABLE_LAYER_CUDNN_OP_TENSOR_NOT_BWD 1

#include "generated_benchmarks.hpp"

#undef ENABLE_LAYER_CUDNN_OP_TENSOR
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MUL_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MIN_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MAX_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_SQRT_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_NOT_FWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_BWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MUL_BWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MIN_BWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_MAX_BWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_SQRT_BWD
#undef ENABLE_LAYER_CUDNN_OP_TENSOR_NOT_BWD

#else // GENERATED_BENCHMARK_LAYER

static void LAYER_CUDNN_OP_TENSOR_INT8(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_FWD_Impl<int8_t, CUDNN_OP_TENSOR_ADD>(state);
}

static void LAYER_CUDNN_OP_TENSOR_INT32(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_FWD_Impl<int32_t, CUDNN_OP_TENSOR_ADD>(state);
}

// static void LAYER_CUDNN_OP_TENSOR_HALF(benchmark::State& state) {
//   LAYER_CUDNN_OP_TENSOR_FWD_Impl<__half, CUDNN_OP_TENSOR_ADD>(state);
// }

static void LAYER_CUDNN_OP_TENSOR_FLOAT(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_FWD_Impl<float, CUDNN_OP_TENSOR_ADD>(state);
}

static void LAYER_CUDNN_OP_TENSOR_DOUBLE(benchmark::State& state) {
  LAYER_CUDNN_OP_TENSOR_FWD_Impl<double, CUDNN_OP_TENSOR_ADD>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

/* BENCHMARK_CUDNN(LAYER_CUDNN_OP_TENSOR_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK_CUDNN(LAYER_CUDNN_OP_TENSOR_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
// BENCHMARK_CUDNN(LAYER_CUDNN_OP_TENSOR_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK_CUDNN(LAYER_CUDNN_OP_TENSOR_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
// BENCHMARK_CUDNN(LAYER_CUDNN_OP_TENSOR_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

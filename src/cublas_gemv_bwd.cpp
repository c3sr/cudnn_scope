#define BENCHMARK_NAME "CUBLAS/GEMV_BWD"
#define IMPLEMENTATION_NAME BENCHMARK_NAME

#include <benchmark/benchmark.h>

#include <cmath>
#include <iostream>
#include <mutex>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#include <cublas_v2.h>
#include <cuda_runtime.h>

#include "args.hpp"
#include "error.hpp"
#include "helper.hpp"
#include "init.hpp"
#include "utils.hpp"

// ONLY SUPPORT SGEMM FOR NOW

static void constantInit(float* data, int size, float val) {
  for (int i = 0; i < size; ++i) {
    data[i] = val;
  }
}

namespace gemm {
namespace detail {
  template <typename T>
  static T one() {
    return T{1};
  };

  template <typename T>
  static T zero() {
    return T{0};
  };
} // namespace detail
} // namespace gemm

// https://docs.nvidia.com/cuda/cublas/index.html#cublas-lt-t-gt-gemv
template <typename T>
static void iLAYER_CUBLAS_GEMV_BWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  // n, c, h, w
  const auto M                   = state.range(0);
  const auto K                  = state.range(1);
  const cublasOperation_t transA = state.range(2) == 0 ? CUBLAS_OP_N : CUBLAS_OP_T;
  auto alpha                     = state.range(3);
  auto beta                      = state.range(4);

  const int lda = (transA == CUBLAS_OP_N) ? M : K;

  state.counters.insert({
      {"M", M},
      {"N", N},
      {"alpha", alpha},
      {"beta", beta},
      {"lda", lda},
      {"transA", transA == CUBLAS_OP_N ? 0 : 1},
  });

  const T one  = gemm::detail::one<T>();
  const T zero = gemm::detail::zero<T>();

  /* c = alpha * ab + beta * c */
  auto a = std::vector<T>(M * N);
  auto b = std::vector<T>(N);
  auto c = std::vector<T>(M);

  std::fill(a.begin(), a.end(), one);
  std::fill(b.begin(), b.end(), one);
  std::fill(c.begin(), c.end(), zero);

  T *d_a{nullptr}, *d_b{nullptr}, *d_c{nullptr};

  if (PRINT_IF_ERROR(cudaMalloc((void**) &d_a, a.size() * sizeof(*a.data())))) {
    LOG(critical, "CUBLAS/{} device memory allocation failed for matrix A", IMPLEMENTATION_NAME);
    state.SkipWithError(
        fmt::format("CUBLAS/{} device memory allocation failed for matrix A", IMPLEMENTATION_NAME).c_str());
    return;
  }
  defer(cudaFree(d_a));

  if (PRINT_IF_ERROR(cudaMalloc((void**) &d_b, b.size() * sizeof(*b.data())))) {
    LOG(critical, "CUBLAS/{} device memory allocation failed for matrix B", IMPLEMENTATION_NAME);
    state.SkipWithError(
        fmt::format("CUBLAS/{} device memory allocation failed for matrix B", IMPLEMENTATION_NAME).c_str());
    return;
  }
  defer(cudaFree(d_b));

  if (PRINT_IF_ERROR(cudaMalloc((void**) &d_c, c.size() * sizeof(*c.data())))) {
    LOG(critical, "CUBLAS/{} device memory allocation failed for matrix C", IMPLEMENTATION_NAME);
    state.SkipWithError(
        fmt::format("CUBLAS/{} device memory allocation failed for matrix C", IMPLEMENTATION_NAME).c_str());
    return;
  }
  defer(cudaFree(d_c));

  if (PRINT_IF_ERROR(cublasSetMatrix(M, N, sizeof(*a.data()), a.data(), M, d_a, M))) {
    LOG(critical, "CUBLAS/{} setting of A matrix failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of A matrix failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  if (PRINT_IF_ERROR(cublasSetVector(N, sizeof(*b.data()), b.data(), 1, d_b, 1))) {
    LOG(critical, "CUBLAS/{} setting of B vector failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of B vector failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  if (PRINT_IF_ERROR(cublasSetVector(N, sizeof(*c.data()), c.data(), 1, d_c, 1))) {
    LOG(critical, "CUBLAS/{} setting of C vector failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of C vector failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  cudaEvent_t start, stop;
  PRINT_IF_ERROR(cudaEventCreate(&start));
  PRINT_IF_ERROR(cudaEventCreate(&stop));

  const int incx = 1;
  const int incy = 1;

  for (auto _ : state) {
    cudaEventRecord(start, NULL);

    const cublasStatus_t cublas_err = cublasSgemv(cublas_handle, transA, M, N, reinterpret_cast<T*>(&alpha),
                                                  d_a, lda, d_b, incx, reinterpret_cast<T*>(&beta), d_c, incy);

    cudaEventRecord(stop, NULL);
    const auto cuda_err = cudaEventSynchronize(stop);

    state.PauseTiming();
    if (PRINT_IF_ERROR(cublas_err)) {
      state.SkipWithError(fmt::format("CUBLAS/{} failed to launch kernel because of {}", IMPLEMENTATION_NAME,
                                      utils::detail::error_string(cublas_err))
                              .c_str());
      break;
    }
    if (PRINT_IF_ERROR(cuda_err)) {
      state.SkipWithError(fmt::format("CUBLAS/{} failed to synchronize kernel because of {}", IMPLEMENTATION_NAME,
                                      utils::detail::error_string(cuda_err))
                              .c_str());
      break;
    }

    float msecTotal = 0.0f;
    if (PRINT_IF_ERROR(cudaEventElapsedTime(&msecTotal, start, stop))) {
      state.SkipWithError(fmt::format("CUBLAS/{} failed to get elapsed time", IMPLEMENTATION_NAME).c_str());
      break;
    }
    state.SetIterationTime(msecTotal / 1000);
    state.ResumeTiming();
  }

  const double predicted_flops = M * K;
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});
  state.SetItemsProcessed(int64_t(state.iterations()) * M * K);
}

template <typename T>
static void LAYER_CUBLAS_GEMV_BWD_Impl(benchmark::State& state) {
  try {
    iLAYER_CUBLAS_GEMV_BWD_Impl<T>(state);
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

#define ENABLE_LAYER_CUBLAS_GEMV_BWD 1

#if !defined(CUDNN_BATCH_SIZE) 
#include "dlperf/generated_benchmarks_1.hpp"
#include "dlperf/generated_benchmarks_2.hpp"
#include "dlperf/generated_benchmarks_4.hpp"
#include "dlperf/generated_benchmarks_8.hpp"
#include "dlperf/generated_benchmarks_16.hpp"
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

#undef ENABLE_LAYER_CUBLAS_GEMV_BWD

#else // GENERATED_BENCHMARK_LAYER

// static void LAYER_CUBLAS_GEMV_BWD_INT8(benchmark::State& state) {
//   LAYER_CUBLAS_GEMV_BWD_Impl<int8_t>(state);
// }

// static void LAYER_CUBLAS_GEMV_BWD_INT32(benchmark::State& state) {
//   LAYER_CUBLAS_GEMV_BWD_Impl<int32_t>(state);
// }

// static void LAYER_CUBLAS_GEMV_BWD_HALF(benchmark::State& state) {
//   LAYER_CUBLAS_GEMV_BWD_Impl<__half>(state);
// }

static void LAYER_CUBLAS_GEMV_BWD_FLOAT(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
}

// static void LAYER_CUBLAS_GEMV_BWD_DOUBLE(benchmark::State& state) {
//   LAYER_CUBLAS_GEMV_BWD_Impl<double>(state);
// }

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

/* BENCHMARK(LAYER_CUBLAS_GEMV_BWD_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK(LAYER_CUBLAS_GEMV_BWD_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
// BENCHMARK(LAYER_CUBLAS_GEMV_BWD_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
// BENCHMARK(LAYER_CUBLAS_GEMV_BWD_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

#define BENCHMARK_NAME "CUDNN/DROPOUT_FWD"

#include <benchmark/benchmark.h>

#include <cmath>
#include <iostream>
#include <mutex>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

#include <cblas.h>
#include <cublas_v2.h>
#include <cuda_runtime.h>

#include "args.hpp"
#include "error.hpp"
#include "helper.hpp"
#include "init.hpp"
#include "utils.hpp"

// ONLY SUPPORT SGEMM FOR NOW

void constantInit(float *data, int size, float val){
    for (int i = 0; i < size; ++i){
        data[i] = val;
    }
}

template <typename T>
static T one() {
  return T{1};
};

template <>
__half one<__half>() {
  unsigned short x{1};
  __half res;
  memcpy(&res, &x, sizeof(res));
  return res;
};

template <typename T>
static T zero() {
  return T{0};
};

// https://docs.nvidia.com/cuda/cublas/index.html#cublas-lt-t-gt-gemm
template <typename T>
static void LAYER_CUBLAS_GEMM_FWD_Impl(benchmark::State& state) {
  if (!has_cuda) {
    state.SkipWithError(BENCHMARK_NAME " no CUDA device found");
    return;
  }

  cublasHandle_t cublas_handle;
  if (PRINT_IF_ERROR(cublasCreate(&cublas_handle))) {
    LOG(error, "failed to create CUBLAS handle");
    return -1;
  }

  // n, c, h, w
  const auto m = state.range(0);
  const auto n = state.range(1);
  const auto k = state.range(2)

  const T one  = one<T>();
  const T zero = zero<T>();
  T alpha{one};
  T beta{zero};
  cublasOperation_t tranA = CUBLAS_OP_N;
  cublasOperation_t tranB = CUBLAS_OP_N;

  auto a = std::vector<T>(M * K);
  auto b = std::vector<T>(K * N);
  auto c = std::vector<T>(M * N);

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

  if (PRINT_IF_ERROR(cublasSetMatrix(M, K, sizeof(*a.data()), a.data(), M, d_a, M))) {
    LOG(critical, "CUBLAS/{} setting of A matrix failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of A matrix failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  if (PRINT_IF_ERROR(cublasSetMatrix(K, N, sizeof(*b.data()), b.data(), K, d_b, K))) {
    LOG(critical, "CUBLAS/{} setting of B matrix failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of B matrix failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  if (PRINT_IF_ERROR(cublasSetMatrix(M, N, sizeof(*c.data()), c.data(), M, d_c, M))) {
    LOG(critical, "CUBLAS/{} setting of C matrix failed", IMPLEMENTATION_NAME);
    state.SkipWithError(fmt::format("CUBLAS/{} setting of C matrix failed", IMPLEMENTATION_NAME).c_str());
    return;
  }

  cudaEvent_t start, stop;
  PRINT_IF_ERROR(cudaEventCreate(&start));
  PRINT_IF_ERROR(cudaEventCreate(&stop));
  
  for (auto _ : state) {
    cudaEventRecord(start, NULL);
    
    const cublasStatus_t cublas_err = cublasSgemm(cublas_handle, transa, transb, M, N, K, alpha, d_a, d_b, beta, d_c);

    cudaEventRecord(stop, NULL);
    const auto cuda_err = cudaEventSynchronize(stop);

    state.PauseTiming();
    if (PRINT_IF_ERROR(cublas_err)) {
      state.SkipWithError(fmt::format("CUBLAS/{} failed to launch kernel", IMPLEMENTATION_NAME).c_str());
      break;
    }
    if (PRINT_IF_ERROR(cuda_err)) {
      state.SkipWithError(fmt::format("CUBLAS/{} failed to synchronize kernel", IMPLEMENTATION_NAME).c_str());
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

  state.counters.insert(
      {{"M", M}, {"N", N}, {"K", K}, {"Flops", {2.0 * M * N * K, benchmark::Counter::kAvgThreadsRate}}});

  const double predicted_flops = in_n * in_c * in_h * in_w;
  state.counters.insert(
      {{"predicted_flops_count", predicted_flops},
       {"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});
  state.SetItemsProcessed(int64_t(state.iterations()) * M * N * K);
}



#ifdef GENERATED_BENCHMARK_LAYER

#define ENABLE_LAYER_CUBLAS_GEMM_FWD 1
#include "generated_benchmarks.hpp"
#undef ENABLE_LAYER_CUBLAS_GEMM_FWD

#else // GENERATED_BENCHMARK_LAYER

// static void LAYER_CUBLAS_GEMM_FWD_INT8(benchmark::State& state) {
//   LAYER_CUBLAS_GEMM_FWD_Impl<int8_t>(state);
// }

// static void LAYER_CUBLAS_GEMM_FWD_INT32(benchmark::State& state) {
//   LAYER_CUBLAS_GEMM_FWD_Impl<int32_t>(state);
// }

// static void LAYER_CUBLAS_GEMM_FWD_HALF(benchmark::State& state) {
//   LAYER_CUBLAS_GEMM_FWD_Impl<__half>(state);
// }

static void LAYER_CUBLAS_GEMM_FWD_FLOAT(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_FWD_Impl<float>(state);
}

// static void LAYER_CUBLAS_GEMM_FWD_DOUBLE(benchmark::State& state) {
//   LAYER_CUBLAS_GEMM_FWD_Impl<double>(state);
// }

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

/* BENCHMARK(LAYER_CUBLAS_GEMM_FWD_INT8)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
/* BENCHMARK(LAYER_CUBLAS_GEMM_FWD_INT32)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime(); */
// BENCHMARK(LAYER_CUBLAS_GEMM_FWD_HALF)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
BENCHMARK(LAYER_CUBLAS_GEMM_FWD_FLOAT)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();
// BENCHMARK(LAYER_CUBLAS_GEMM_FWD_DOUBLE)->INFERENCE_SERVER_CONV_PROBLEMS()->UseManualTime();

#endif // GENERATED_BENCHMARK_LAYER

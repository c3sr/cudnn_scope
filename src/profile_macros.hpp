#pragma once

#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>

#include "cupti_profiler.hpp"

#ifndef IMPLEMENTATION_NAME
#define IMPLEMENTATION_NAME BENCHMARK_NAME
#endif // IMPLEMENTATION_NAME

static auto StatisticsSum = [](const std::vector<double>& v) { return std::accumulate(v.begin(), v.end(), 0.0); };

static double StatisticsMean(const std::vector<double>& v) {
  if (v.empty())
    return 0.0;
  return StatisticsSum(v) * (1.0 / v.size());
}

static double StatisticsMedian(const std::vector<double>& v) {
  if (v.size() < 3)
    return StatisticsMean(v);
  std::vector<double> copy(v);

  auto center = copy.begin() + v.size() / 2;
  std::nth_element(copy.begin(), center, copy.end());

  // did we have an odd number of samples?
  // if yes, then center is the median
  // it no, then we are looking for the average between center and the value
  // before
  if (v.size() % 2 == 1)
    return *center;
  auto center2 = copy.begin() + v.size() / 2 - 1;
  std::nth_element(copy.begin(), center2, copy.end());
  return (*center + *center2) / 2.0;
}

// Return the sum of the squares of this sample set
static auto SumSquares = [](const std::vector<double>& v) {
  return std::inner_product(v.begin(), v.end(), v.begin(), 0.0);
};

static auto Sqr  = [](const double dat) { return dat * dat; };
static auto Sqrt = [](const double dat) {
  // Avoid NaN due to imprecision in the calculations
  if (dat < 0.0)
    return 0.0;
  return std::sqrt(dat);
};

static double StatisticsStdDev(const std::vector<double>& v) {
  const auto mean = StatisticsMean(v);
  if (v.empty())
    return mean;

  // Sample standard deviation is undefined for n = 1
  if (v.size() == 1)
    return 0.0;

  const double avg_squares = SumSquares(v) * (1.0 / v.size());
  return Sqrt(v.size() / (v.size() - 1.0) * (avg_squares - Sqr(mean)));
}

#define CUSTOM_STATS()                                                                                                 \
  ComputeStatistics(                                                                                                   \
      "max_t", [](const std::vector<double>& v) -> double { return *(std::max_element(std::begin(v), std::end(v))); }) \
      ->ComputeStatistics(                                                                                             \
          "min_t",                                                                                                     \
          [](const std::vector<double>& v) -> double { return *(std::min_element(std::begin(v), std::end(v))); })      \
      ->ComputeStatistics(                                                                                             \
          "total_t", [](const std::vector<double>& v) -> double { return std::accumulate(v.begin(), v.end(), 0.0); })  \
      ->ComputeStatistics("mean_t", StatisticsMean)                                                                    \
      ->ComputeStatistics("median_t", StatisticsMedian)                                                                \
      ->ComputeStatistics("stddev_t", StatisticsStdDev)

#ifndef CUDNN_CUPTI_NUM_ITERS
#define CUDNN_CUPTI_NUM_ITERS 4
#endif // CUDNN_CUPTI_NUM_ITERS

#ifdef ENABLE_CUDNN_CUPTI
#define BENCHMARK_CUDNN(...) BENCHMARK(__VA_ARGS__)->CUSTOM_STATS()->Iterations(CUDNN_CUPTI_NUM_ITERS)
#define BENCHMARK_CUDNN_TEMPLATE(...) BENCHMARK_TEMPLATE(__VA_ARGS__)->CUSTOM_STATS()->Iterations(CUDNN_CUPTI_NUM_ITERS)
#define CUPTI_STATE_COUNTER_INFO                                                                                       \
  {"cupti_enabled", ENABLE_CUDNN_CUPTI}, {"cupti_num_iters", CUDNN_CUPTI_NUM_ITERS},                                   \
      {std::string("cupti_version:") + cupti_version, fnv1a_64(cupti_version)},
#define CUPTI_PROFILE_START cupti_profiler::profiler profiler(events, metrics)
#define CUPTI_PROFILE_STOP(current_iter)                                                                               \
  do {                                                                                                                 \
    profiler.stop();                                                                                                   \
    const auto current_iter_s = std::string("/current_iter:") + std::to_string(current_iter);                          \
    for (const auto kernel_name : profiler.get_kernel_names()) {                                                       \
      const auto demangled_name = demangle(kernel_name);                                                               \
      state.counters.insert({std::string("kernel:") + kernel_name, fnv1a_64(kernel_name)});                            \
      state.counters.insert({std::string("demangled_kernel:") + demangled_name, fnv1a_64(kernel_name)});               \
      for (const auto metric_value : profiler.get_metric_values(kernel_name)) {                                        \
        state.counters.insert(                                                                                         \
            {std::string("kernel_metric:") + demangled_name + current_iter_s + "/metric:" + metric_value.first,        \
             metric_value.second});                                                                                    \
      }                                                                                                                \
      for (const auto event_value : profiler.get_event_values(kernel_name)) {                                          \
        state.counters.insert(                                                                                         \
            {std::string("kernel_event:") + demangled_name + current_iter_s + "/event:" + event_value.first,           \
             event_value.second});                                                                                     \
      }                                                                                                                \
    }                                                                                                                  \
  } while (0)
#else // ENABLE_CUDNN_CUPTI
#define BENCHMARK_CUDNN(...) BENCHMARK(__VA_ARGS__)->CUSTOM_STATS()
#define BENCHMARK_CUDNN_TEMPLATE(...) BENCHMARK_TEMPLATE(__VA_ARGS__)->CUSTOM_STATS()
#define CUPTI_STATE_COUNTER_INFO {"cupti_enabled", 0},
#define CUPTI_PROFILE_START
#define CUPTI_PROFILE_STOP(current_iter)
#endif // ENABLE_CUDNN_CUPTI

#define BENCHMARK_BLOCK_1(x) x

#define BENCHMARK_BLOCK(block_err, ...)                                                                                \
  do {                                                                                                                 \
    const auto BENCHMARK_BLOCK_1(benchmark_block) = [&]() { __VA_ARGS__ };                                             \
    for (int ii = 0; ii < num_warmup; ii++) {                                                                          \
      BENCHMARK_BLOCK_1(benchmark_block)();                                                                            \
    }                                                                                                                  \
    cudaEvent_t start, stop;                                                                                           \
    PRINT_IF_ERROR(cudaEventCreate(&start));                                                                           \
    PRINT_IF_ERROR(cudaEventCreate(&stop));                                                                            \
    int num_iterations = 0;                                                                                            \
    for (auto _ : state) {                                                                                             \
      CUPTI_PROFILE_START;                                                                                             \
      cudaEventRecord(start, NULL);                                                                                    \
      BENCHMARK_BLOCK_1(benchmark_block)();                                                                            \
      cudaEventRecord(stop, NULL);                                                                                     \
      const auto cuda_err = cudaEventSynchronize(stop);                                                                \
      CUPTI_PROFILE_STOP(num_iterations);                                                                              \
      state.PauseTiming();                                                                                             \
      if (PRINT_IF_ERROR(block_err)) {                                                                                 \
        state.SkipWithError(fmt::format("{} failed to launch kernel because of {}", IMPLEMENTATION_NAME,               \
                                        utils::detail::error_string(block_err))                                        \
                                .c_str());                                                                             \
        break;                                                                                                         \
      }                                                                                                                \
      if (PRINT_IF_ERROR(cuda_err)) {                                                                                  \
        state.SkipWithError(fmt::format("{} failed to synchronize kernel because of {}", IMPLEMENTATION_NAME,          \
                                        utils::detail::error_string(cuda_err))                                         \
                                .c_str());                                                                             \
        break;                                                                                                         \
      }                                                                                                                \
      float msecTotal = 0.0f;                                                                                          \
      if (PRINT_IF_ERROR(cudaEventElapsedTime(&msecTotal, start, stop))) {                                             \
        state.SkipWithError(fmt::format("{} failed to get elapsed time", IMPLEMENTATION_NAME).c_str());                \
        break;                                                                                                         \
      }                                                                                                                \
      state.SetIterationTime(msecTotal / 1000);                                                                        \
      num_iterations++;                                                                                                \
      state.ResumeTiming();                                                                                            \
    }                                                                                                                  \
    state.counters.insert(                                                                                             \
        {{std::string("benchmark_func:") + std::string(__PRETTY_FUNCTION__), fnv1a_64(__PRETTY_FUNCTION__)},           \
         {std::string("benchmark_file:") + std::string(__FILE__), fnv1a_64(__FILE__)},                                 \
         {std::string("demangled_benchmark_func:") + demangle(__FUNCTION__), fnv1a_64(__FUNCTION__)},                  \
         {std::string("cuda_driver_version:") + cuda_driver_version, fnv1a_64(cuda_driver_version)},                   \
         {std::string("cuda_runtime_version:") + cuda_runtime_version, fnv1a_64(cuda_runtime_version)},                \
         {std::string("cublas_version:") + cublas_version, fnv1a_64(cublas_version)},                                  \
         {std::string("cudnn_version:") + cudnn_version, fnv1a_64(cudnn_version)},                                     \
         {std::string("compute_capability:") + compute_capability, fnv1a_64(compute_capability)},                      \
         {std::string("gpu_name:") + gpu_name, fnv1a_64(gpu_name)},                                                    \
         {std::string("host_name:") + host_name, fnv1a_64(host_name)},                                                 \
         {"num_iterations", state.iterations()},                                                                       \
         CUPTI_STATE_COUNTER_INFO});                                                                                   \
  } while (0)

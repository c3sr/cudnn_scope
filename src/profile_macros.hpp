#pragma once

#include "cupti_profiler.hpp"

#ifndef IMPLEMENTATION_NAME
#define IMPLEMENTATION_NAME BENCHMARK_NAME
#endif // IMPLEMENTATION_NAME

#ifndef CUDNN_CUPTI_NUM_ITERS
#define CUDNN_CUPTI_NUM_ITERS 4
#endif // CUDNN_CUPTI_NUM_ITERS

#ifdef ENABLE_CUDNN_CUPTI
#define BENCHMARK_CUDNN(...) BENCHMARK(__VA_ARGS__)->Iterations(CUDNN_CUPTI_NUM_ITERS)
#define BENCHMARK_CUDNN_TEMPLATE(...) BENCHMARK_TEMPLATE(__VA_ARGS__)->Iterations(CUDNN_CUPTI_NUM_ITERS)
#else // ENABLE_CUDNN_CUPTI
#define BENCHMARK_CUDNN(...) BENCHMARK(__VA_ARGS__)
#define BENCHMARK_CUDNN_TEMPLATE(...) BENCHMARK_TEMPLATE(__VA_ARGS__)
#endif // ENABLE_CUDNN_CUPTI

#ifdef ENABLE_CUDNN_CUPTI
#define CUPTI_PROFILE_START cupti_profiler::profiler profiler(events, metrics)
#define CUPTI_PROFILE_STOP(current_iter)                                                                               \
  do {                                                                                                                 \
    profiler.stop();                                                                                                   \
    const auto current_iter_s = std::string("/current_iter:") + std::to_string(current_iter);                          \
    for (const auto kernel_name : profiler.get_kernel_names()) {                                                       \
      const auto demangled_name = demangle(kernel_name);                                                               \
      state.counters.insert({kernel_name, fnv1a_64(kernel_name)});                                                     \
      state.counters.insert({demangled_name, fnv1a_64(kernel_name)});                                                  \
      for (const auto metric_value : profiler.get_metric_values(kernel_name)) {                                        \
        state.counters.insert(                                                                                         \
            {demangled_name + current_iter_s + "/metric:" + metric_value.first, metric_value.second});                 \
      }                                                                                                                \
      for (const auto event_value : profiler.get_event_values(kernel_name)) {                                          \
        state.counters.insert({demangled_name + current_iter_s + "/event:" + event_value.first, event_value.second});  \
      }                                                                                                                \
    }                                                                                                                  \
  } while (0)
#else // ENABLE_CUDNN_CUPTI
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
    state.counters.insert({                                                                                            \
        {"num_iterations", state.iterations()},                                                                        \
        {"cupti_enabled", ENABLE_CUDNN_CUPTI ? 0 : 1},                                                                 \
        {"cupti_num_iters", CUDNN_CUPTI_NUM_ITERS},                                                                    \
    });                                                                                                                \
  } while (0)

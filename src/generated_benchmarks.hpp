#ifndef CUDNN_GENERATED_BENCHMARKS_HPP_
#define CUDNN_GENERATED_BENCHMARKS_HPP_


#ifdef GENERATED_BENCHMARK_LAYER

#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_benchmarks_1.hpp"
#include "dlperf/generated_benchmarks_2.hpp"
#include "dlperf/generated_benchmarks_4.hpp"
#include "dlperf/generated_benchmarks_8.hpp"
#include "dlperf/generated_benchmarks_16.hpp"
#include "dlperf/generated_benchmarks_32.hpp"
#include "dlperf/generated_benchmarks_64.hpp"
#include "dlperf/generated_benchmarks_128.hpp"
#include "dlperf/generated_benchmarks_256.hpp"
#include "dlperf/generated_benchmarks_512.hpp"
#include "dlperf/generated_benchmarks_1024.hpp"
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
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE

#endif // GENERATED_BENCHMARK_LAYER

#endif //CUDNN_GENERATED_BENCHMARKS_HPP_

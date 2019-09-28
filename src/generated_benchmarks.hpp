#ifndef CUDNN_GENERATED_BENCHMARKS_HPP_
#define CUDNN_GENERATED_BENCHMARKS_HPP_

#ifdef GENERATED_BENCHMARK_LAYER

#ifdef ADD_TENSOR_ONLY

#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_add_benchmarks_1.hpp"
#include "dlperf/generated_add_benchmarks_1024.hpp"
#include "dlperf/generated_add_benchmarks_128.hpp"
#include "dlperf/generated_add_benchmarks_16.hpp"
#include "dlperf/generated_add_benchmarks_2.hpp"
#include "dlperf/generated_add_benchmarks_256.hpp"
#include "dlperf/generated_add_benchmarks_32.hpp"
#include "dlperf/generated_add_benchmarks_4.hpp"
#include "dlperf/generated_add_benchmarks_512.hpp"
#include "dlperf/generated_add_benchmarks_64.hpp"
#include "dlperf/generated_add_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_add_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_add_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_add_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_add_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_add_benchmarks_16.hpp"
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_add_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_add_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_add_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_add_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_add_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_add_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE

#elif defined(MOBILENETV2_ONLY)
#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_mobilenetv2_benchmarks_1.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_1024.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_128.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_16.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_2.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_256.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_32.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_4.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_512.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_64.hpp"
#include "dlperf/generated_mobilenetv2_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_mobilenetv2_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_mobilenetv2_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_mobilenetv2_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_mobilenetv2_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_mobilenetv2_benchmarks_16.hpp"
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_mobilenetv2_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_mobilenetv2_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_mobilenetv2_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_mobilenetv2_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_mobilenetv2_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_mobilenetv2_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE

#elif defined(RESNET50_ONLY)

#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_resnet50_benchmarks_1.hpp"
#include "dlperf/generated_resnet50_benchmarks_1024.hpp"
#include "dlperf/generated_resnet50_benchmarks_128.hpp"
#include "dlperf/generated_resnet50_benchmarks_16.hpp"
#include "dlperf/generated_resnet50_benchmarks_2.hpp"
#include "dlperf/generated_resnet50_benchmarks_256.hpp"
#include "dlperf/generated_resnet50_benchmarks_32.hpp"
#include "dlperf/generated_resnet50_benchmarks_4.hpp"
#include "dlperf/generated_resnet50_benchmarks_512.hpp"
#include "dlperf/generated_resnet50_benchmarks_64.hpp"
#include "dlperf/generated_resnet50_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_resnet50_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_resnet50_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_resnet50_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_resnet50_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_resnet50_benchmarks_16.hpp"
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_resnet50_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_resnet50_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_resnet50_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_resnet50_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_resnet50_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_resnet50_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE

#elif defined(ENABLE_CUDNN_CUPTI)

#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_profile_benchmarks_1.hpp"
#include "dlperf/generated_profile_benchmarks_1024.hpp"
#include "dlperf/generated_profile_benchmarks_128.hpp"
#include "dlperf/generated_profile_benchmarks_16.hpp"
#include "dlperf/generated_profile_benchmarks_2.hpp"
#include "dlperf/generated_profile_benchmarks_256.hpp"
#include "dlperf/generated_profile_benchmarks_32.hpp"
#include "dlperf/generated_profile_benchmarks_4.hpp"
#include "dlperf/generated_profile_benchmarks_512.hpp"
#include "dlperf/generated_profile_benchmarks_64.hpp"
#include "dlperf/generated_profile_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_profile_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_profile_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_profile_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_profile_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_profile_benchmarks_16.hpp"
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_profile_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_profile_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_profile_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_profile_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_profile_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_profile_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE
#elif defined(FUSED_ONLY_BENCHMARKS)
#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_only_fused_benchmarks_1.hpp"
#include "dlperf/generated_only_fused_benchmarks_1024.hpp"
#include "dlperf/generated_only_fused_benchmarks_128.hpp"
#include "dlperf/generated_only_fused_benchmarks_16.hpp"
#include "dlperf/generated_only_fused_benchmarks_2.hpp"
#include "dlperf/generated_only_fused_benchmarks_256.hpp"
#include "dlperf/generated_only_fused_benchmarks_32.hpp"
#include "dlperf/generated_only_fused_benchmarks_4.hpp"
#include "dlperf/generated_only_fused_benchmarks_512.hpp"
#include "dlperf/generated_only_fused_benchmarks_64.hpp"
#include "dlperf/generated_only_fused_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 1
#include "dlperf/generated_only_fused_benchmarks_1.hpp"
#elif CUDNN_BATCH_SIZE == 2
#include "dlperf/generated_only_fused_benchmarks_2.hpp"
#elif CUDNN_BATCH_SIZE == 4
#include "dlperf/generated_only_fused_benchmarks_4.hpp"
#elif CUDNN_BATCH_SIZE == 8
#include "dlperf/generated_only_fused_benchmarks_8.hpp"
#elif CUDNN_BATCH_SIZE == 16
#include "dlperf/generated_only_fused_benchmarks_16.hpp"
#elif CUDNN_BATCH_SIZE == 32
#include "dlperf/generated_only_fused_benchmarks_32.hpp"
#elif CUDNN_BATCH_SIZE == 64
#include "dlperf/generated_only_fused_benchmarks_64.hpp"
#elif CUDNN_BATCH_SIZE == 128
#include "dlperf/generated_only_fused_benchmarks_128.hpp"
#elif CUDNN_BATCH_SIZE == 256
#include "dlperf/generated_only_fused_benchmarks_256.hpp"
#elif CUDNN_BATCH_SIZE == 512
#include "dlperf/generated_only_fused_benchmarks_512.hpp"
#elif CUDNN_BATCH_SIZE == 1024
#include "dlperf/generated_only_fused_benchmarks_1024.hpp"
#endif // CUDNN_BATCH_SIZE
#else  // ENABLE_CUDNN_CUPTI
#if !defined(CUDNN_BATCH_SIZE)
#include "dlperf/generated_benchmarks_1.hpp"
#include "dlperf/generated_benchmarks_1024.hpp"
#include "dlperf/generated_benchmarks_128.hpp"
#include "dlperf/generated_benchmarks_16.hpp"
#include "dlperf/generated_benchmarks_2.hpp"
#include "dlperf/generated_benchmarks_256.hpp"
#include "dlperf/generated_benchmarks_32.hpp"
#include "dlperf/generated_benchmarks_4.hpp"
#include "dlperf/generated_benchmarks_512.hpp"
#include "dlperf/generated_benchmarks_64.hpp"
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
#endif // ENABLE_CUDNN_CUPTI

#endif // GENERATED_BENCHMARK_LAYER

#endif // CUDNN_GENERATED_BENCHMARKS_HPP_

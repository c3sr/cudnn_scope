#define BENCHMARK_NAME "CUDNN/ACTIVATION_BWD"

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

// calculates convolution output dimension
static inline int calc_conv_out_dim(int input_dim, int filter_dim, int padd, int stride) {
  return (input_dim - filter_dim + 2 * padd) / stride + 1;
}

template <typename T>
struct ActivationBWD : public benchmark::Fixture {
  int64_t w;
  int64_t h;
  int64_t c;
  int64_t n;
  int64_t k;
  int64_t filter_width;
  int64_t filter_height;
  int64_t pad_w;
  int64_t pad_h;
  int64_t wstride;
  int64_t hstride;
  cudnnActivationMode_t activation_mode;

  void ActivationBWD(int64_t w, int64_t h, int64_t c, int64_t n, int64_t k, int64_t filter_width, int64_t filter_height,
                     int64_t pad_w, int64_t pad_h, int64_t wstride, int64_t hstride,
                     cudnnActivationMode_t activation_mode)
      : w(w), h(h), c(c), n(n), k(k), filter_width(filter_width), filter_height(filter_height), pad_w(pad_w),
        pad_h(pad_h), wstride(wstride), hstride(hstride), activation_mode(activation_mode) {
    if (!has_cuda) {
      THROW_IF_ERROR(BENCHMARK_NAME " no CUDA device found");
    }
  }

  void ActivationBWD(const ::benchmark::State& state, cudnnActivationMode_t iactivation_mode) {

    if (!has_cuda) {
      THROW_IF_ERROR(BENCHMARK_NAME " no CUDA device found");
    }

    //  w, h, c, n, k, filter_w(s), filter_h(r), pad_w, pad_h, wstride, hstride
    width           = state.range(0);
    height          = state.range(1);
    channels        = state.range(2);
    batch_size      = state.range(3);
    num_filters     = state.range(4);
    filter_width    = state.range(5);
    filter_height   = state.range(6);
    pad_width       = state.range(7);
    pad_height      = state.range(8);
    stride_width    = state.range(9);
    stride_height   = state.range(10);
    activation_mode = iactivation_mode;
  }

  void SetUp(const ::benchmark::State& state) {

    in_n = batch_size;
    in_c = num_filters;
    in_h = calc_conv_out_dim(height, filter_height, pad_height, stride_height);
    in_w = calc_conv_out_dim(width, filter_width, pad_width, stride_width);

    out_n = in_n;
    out_c = in_c;
    out_h = in_h;
    out_w = in_w;

    x_tensor = Tensor<T>(state,
                         {/*batch_size=*/in_n,
                          /*channels=*/in_c,
                          /*image_height=*/in_h,
                          /*image_width=*/in_w});
    if (!x_tensor.is_valid) {
      THROW_IF_ERROR("invalid x tensor memory");
    }

    const auto input_bytes = in_n * in_c * in_w * in_h * sizeof(T);
    auto input             = std::vector<T>(input_bytes / sizeof(T));
    std::fill(input.begin(), input.end(), detail::one<T>());

    x_memory = DeviceMemory<T>(state, input.data(), input_bytes);
    if (!x_memory.is_valid) {
      THROW_IF_ERROR("invalid x memory");
    }

    dx_memory = DeviceMemory<T>(state, input_bytes);
    if (!dx_memory.is_valid) {
      THROW_IF_ERROR("invalid dx memory");
    }

    y_memory = DeviceMemory<T>(state, input.data(), input_bytes);
    if (!y_memory.is_valid) {
      THROW_IF_ERROR("invalid y memory");
    }

    dy_memory = DeviceMemory<T>(state, input.data(), input_bytes);
    if (!dy_memory.is_valid) {
      THROW_IF_ERROR("invalid dy memory");
    }

    THROW_IF_ERROR_WITH_MSG(cudnnCreateActivationDescriptor(&activation_descriptor),
                            BENCHMARK_NAME " failed to create activation descriptor");

    THROW_IF_ERROR_WITH_MSG(
        cudnnSetActivationDescriptor(activation_descriptor, activation_mode, CUDNN_NOT_PROPAGATE_NAN, coef),
        BENCHMARK_NAME " failed to set activation descriptor");

    THROW_IF_ERROR_WITH_MSG(cudaEventCreate(&start), BENCHMARK_NAME " failed to create start event");
    THROW_IF_ERROR_WITH_MSG(cudaEventCreate(&stop), BENCHMARK_NAME " failed to create end event");
  }

  // result is reported in nanoseconds
  int64_t Run() {
    cudnnTensorDescriptor_t x_descriptor = x_tensor.get();
    const auto d_x                       = x_memory.get();
    const auto d_y                       = y_memory.get();
    const auto d_dx                      = dx_memory.get();
    const auto d_dy                      = dy_memory.get();
    cudaEventRecord(start, NULL);

    const cudnnStatus_t cudnn_err = cudnnActivationBackward(cudnn_handle,
                                                            activation_descriptor,
                                                            &alpha,
                                                            x_descriptor,
                                                            d_y,
                                                            x_descriptor,
                                                            d_dy,
                                                            x_descriptor,
                                                            d_x,
                                                            &beta,
                                                            x_descriptor,
                                                            d_dx);

    cudaEventRecord(stop, NULL);
    const auto cuda_err = cudaEventSynchronize(stop);

    THROW_IF_ERROR_WITH_MSG(cudnn_err, BENCHMARK_NAME " failed to perform cudnnActivationBackward");
    THROW_IF_ERROR_WITH_MSG(cuda_err, BENCHMARK_NAME " failed to launch kernel");

    float msecTotal = 0.0f;
    THROW_IF_ERROR_WITH_MSG(cudaEventElapsedTime(&msecTotal, start, stop), BENCHMARK_NAME " failed to launch kernel");

    return ms_to_ns(msecTotal);
  }

  double ComputeFlops(cudnnActivationMode_t mode) {
    switch (mode) {
      case CUDNN_ACTIVATION_SIGMOID:
      case CUDNN_ACTIVATION_RELU:
      case CUDNN_ACTIVATION_TANH:
      case CUDNN_ACTIVATION_CLIPPED_RELU:
      case CUDNN_ACTIVATION_ELU:
        /* case CUDNN_ACTIVATION_IDENTITY: */
        return static_cast<double>(in_n * in_c * in_h * in_w);
      default:
        return static_cast<double>(-1);
    }
  };

  std::map<std::string, int64_t> Info() {
    const double predicted_flops = ComputeFlops();

    return {
        {"input_size", in_n * in_c * in_h * in_w},
        {"input_batch_size", in_n},
        {"input_channels", in_c},
        {"input_height", in_h},
        {"input_width", in_w},
        {"output_size", out_n * out_c * out_h * out_w},
        {"output_batch_size", out_n},
        {"output_channels", out_c},
        {"output_height", out_h},
        {"output_width", out_w},
        {"activation_mode", (int) activation_mode},
        {"predicted_flops_count", predicted_flops},
    };
  }

  std::string JSONAttributes() {
    json j = this->Info();
    return j.dump();
  }

  void TearDown(const ::benchmark::State& state) {

    THROW_IF_ERROR(cudaEventDestroy(start));
    THROW_IF_ERROR(cudaEventDestroy(stop));

    state.counters.insert(this->Info());

    const double predicted_flops = ComputeFlops();
    state.counters.insert(
        {{"predicted_flops", {predicted_flops * state.iterations(), benchmark::Counter::kAvgThreadsRate}}});

    state.SetItemsProcessed(int64_t(state.iterations()) * in_n * in_c * in_h * in_w);
  }

private:
  cudaEvent_t start;
  cudaEvent_t stop;
  int64_t in_n;
  int64_t in_c;
  int64_t in_h;
  int64_t in_w;

  int64_t out_n;
  int64_t out_c;
  int64_t out_h;
  int64_t out_w;

  cudnnActivationDescriptor_t activation_descriptor;
  float alpha = 1, beta = 0;
  double coef = 1;

  Tensor<T> x_tensor;
  DeviceMemory<T> x_memory;
  DeviceMemory<T> dx_memory;
  DeviceMemory<T> y_memory;
  DeviceMemory<T> dy_memory;
};

// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnActivationMode_t
// https://docs.nvidia.com/deeplearning/sdk/cudnn-developer-guide/index.html#cudnnActivationBackward
template <typename T, cudnnActivationMode_t activation_mode>
static void CUDNN_Impl(benchmark::State& state) {
  const ActivationBWD bench<T>(state, activation_mode);
  bench.SetUp(state);
  for (auto _ : state) {
    BEGIN_TRY;
    const auto nanoseconds = bench.Run(state);
    SKIP_ON_THROW;
    state.SetIterationTime(ns_to_s(nanoseconds));
    state.ResumeTiming();
  }
  bench.TearDown(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_INT8(benchmark::State& state) {
  CUDNN_Impl<int8_t, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_INT32(benchmark::State& state) {
  CUDNN_Impl<int32_t, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_HALF(benchmark::State& state) {
  CUDNN_Impl<__half, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT(benchmark::State& state) {
  CUDNN_Impl<float, activation_mode>(state);
}

template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_DOUBLE(benchmark::State& state) {
  CUDNN_Impl<double, activation_mode>(state);
}

#define CONV_PROBLEMS INFERENCE_SERVER_CONV_PROBLEMS

#define BENCHMARK_CUDNN(b)                                                                                             \
  BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_SIGMOID)->CONV_PROBLEMS()->UseManualTime();                                   \
  BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->CONV_PROBLEMS()->UseManualTime();                                      \
  BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_TANH)->CONV_PROBLEMS()->UseManualTime();                                      \
  BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->CONV_PROBLEMS()->UseManualTime();                              \
  BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_ELU)->CONV_PROBLEMS()->UseManualTime()

/* BENCHMARK_CUDNN(LAYER_CUDNN_ACTIVATION_BWD_INT8); */
/* BENCHMARK_CUDNN(LAYER_CUDNN_ACTIVATION_BWD_INT32); */
BENCHMARK_CUDNN(LAYER_CUDNN_ACTIVATION_BWD_HALF);
BENCHMARK_CUDNN(LAYER_CUDNN_ACTIVATION_BWD_FLOAT);
BENCHMARK_CUDNN(LAYER_CUDNN_ACTIVATION_BWD_DOUBLE);

#pragma once

#include <benchmark/benchmark.h>

#include <initializer_list>
#include <iostream>
#include <mutex>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

#include <cudnn.h>

#include "init.hpp"
#include "utils.hpp"

#ifndef BENCHMARK_NAME
#define BENCHMARK_NAME "CUDNN"
#endif // BENCHMARK_NAME

template <typename T>
struct alignas(128) DeviceMemory {
  using type = T;
  MEM_ALIGNED_128 T *ptr{nullptr};
  bool is_valid{false};
  size_t size;
  DeviceMemory(benchmark::State &state, const size_t &size0) : size(size0) {
    if (PRINT_IF_ERROR(cudaMalloc(&ptr, size))) {
      state.SkipWithError(BENCHMARK_NAME " device memory allocation failed");
      return;
    }
    if (PRINT_IF_ERROR(cudaMemset(ptr, 0, size))) {
      state.SkipWithError(BENCHMARK_NAME " device memory set failed");
      return;
    }
    is_valid = true;
  }
  DeviceMemory(benchmark::State &state, const T *data, const size_t &size0) : size(size0) {
    if (PRINT_IF_ERROR(cudaMalloc(&ptr, size))) {
      state.SkipWithError(BENCHMARK_NAME " device memory allocation failed");
      return;
    }
    if (PRINT_IF_ERROR(cudaMemcpy(ptr, data, size, cudaMemcpyHostToDevice))) {
      state.SkipWithError(BENCHMARK_NAME " device memory copy failed");
      return;
    }
    is_valid = true;
  }
  ~DeviceMemory() {
    if (ptr == nullptr) {
      return;
    }
    cudaFree(ptr);
  }
  T *get() {
    return ptr;
  }
};

template <typename T>
struct alignas(128) Filter {
  using type                   = T;
  static const auto value_type = valueDataType<T>::type;

  static const auto layout =
#ifdef LOW_PRECISION_NHWC_MODE
      std::is_integral<T>::value || is_half_v<T> ? CUDNN_TENSOR_NHWC : CUDNN_TENSOR_NCHW;
#else  // LOW_PRECISION_NHWC_MODE
      std::is_integral<T>::value ? CUDNN_TENSOR_NHWC : CUDNN_TENSOR_NCHW;
#endif // LOW_PRECISION_NHWC_MODE
  std::vector<int> shape{};
  int group{};

  bool is_valid{false};
  MEM_ALIGNED_128 cudnnFilterDescriptor_t descriptor{nullptr};

  Filter(benchmark::State &state, const std::initializer_list<int> &shape0, int group0 = 1)
      : shape(shape0), group(group0) {

    assert(shape.size() <= 4);
    alignas(128) int dims[4] = {1, 1, 1, 1};
    for (size_t ii = 0; ii < shape.size(); ++ii) {
      dims[ii] = shape[ii];
    }
    if (PRINT_IF_ERROR(cudnnCreateFilterDescriptor(&descriptor))) {
      state.SkipWithError(BENCHMARK_NAME " failed to cudnnCreateFilterDescriptor");
      return;
    }

    if (PRINT_IF_ERROR(
            cudnnSetFilter4dDescriptor(descriptor, value_type, layout, dims[0], dims[1] / group, dims[2], dims[3]))) {
      state.SkipWithError(BENCHMARK_NAME " failed to cudnnSetFilter4dDescriptor");
      return;
    }
    is_valid = true;
  }

  ~Filter() {
    if (!is_valid) {
      return;
    }
    PRINT_IF_ERROR(cudnnDestroyFilterDescriptor(descriptor));
  }

  cudnnFilterDescriptor_t get() const {
    if (!is_valid) {
      return nullptr;
    }
    return descriptor;
  }
};

template <typename T>
struct alignas(128) Tensor {
  using type                   = T;
  static const auto value_type = valueDataType<T>::type;
  static const auto layout =
#ifdef LOW_PRECISION_NHWC_MODE
      std::is_integral<T>::value || is_half_v<T> ? CUDNN_TENSOR_NHWC : CUDNN_TENSOR_NCHW;
#else  // LOW_PRECISION_NHWC_MODE
      std::is_integral<T>::value ? CUDNN_TENSOR_NHWC : CUDNN_TENSOR_NCHW;
#endif // LOW_PRECISION_NHWC_MODE
  std::vector<int> shape{};
  int group{1};

  bool is_valid{false};
  MEM_ALIGNED_128 cudnnTensorDescriptor_t descriptor{nullptr};

  Tensor(benchmark::State &state, const std::initializer_list<int> &shape0, int group0 = 1)
      : shape(shape0), group(group0) {

    assert(shape.size() <= 4);
    alignas(128) int dims[4] = {1, 1, 1, 1};
    for (size_t ii = 0; ii < shape.size(); ++ii) {
      dims[ii] = shape[ii];
    }
    if (PRINT_IF_ERROR(cudnnCreateTensorDescriptor(&descriptor))) {
      state.SkipWithError(BENCHMARK_NAME " failed to cudnnCreateTensorDescriptor");
      return;
    }

    const int N  = dims[0];
    const int C  = dims[1];
    const int H  = dims[2];
    const int W  = dims[3];
    const int CC = C / group;

    if (layout == CUDNN_TENSOR_NHWC) {
      if (PRINT_IF_ERROR(
              cudnnSetTensor4dDescriptorEx(descriptor, value_type, N, CC, H, W, H * W * C, 1, W * C, C))) {
        const auto err = fmt::format(
            BENCHMARK_NAME " failed to cudnnSetTensor4dDescriptor using dims {}x{}x{}x{} and stride {}x{}x{}x{}",
            N,
            CC,
            H,
            W,
            H * W * C,
            1,
            W * C,
            C);
        state.SkipWithError(err.c_str());
        return;
      }
    } else {
      if (PRINT_IF_ERROR(
              cudnnSetTensor4dDescriptorEx(descriptor, value_type, N, CC, H, W, C * H * W, H * W, W, 1))) {
        const auto err = fmt::format(
            BENCHMARK_NAME " failed to cudnnSetTensor4dDescriptor using dims {}x{}x{}x{} and stride {}x{}x{}x{}",
            N,
            CC,
            H,
            W,
            H * W * C,
            1,
            W * C,
            C);
        state.SkipWithError(err.c_str());
        return;
      }
    }
    is_valid = true;
  }

  ~Tensor() {
    if (!is_valid) {
      return;
    }
    PRINT_IF_ERROR(cudnnDestroyTensorDescriptor(descriptor));
  }

  cudnnTensorDescriptor_t get() const {
    if (!is_valid) {
      return nullptr;
    }
    return descriptor;
  }
};

template <typename T>
struct alignas(128) Layer {
  using type                   = T;
  static const auto value_type = valueDataType<T>::type;

  std::vector<int> input_shape{}, output_shape{};

  virtual std::vector<int> configure(const std::vector<int> &shape) = 0;

  virtual std::string to_string() const = 0;

  virtual Tensor<float> forward(const Tensor<float> &x) const = 0;

  virtual Tensor<float> backward(const Tensor<T> &dy, const Tensor<T> &y, const Tensor<T> &x,
                                 bool lastLayer = false) = 0;

  virtual size_t predicted_flops() const         = 0;
  virtual size_t predicted_advised_flops() const = 0;
};

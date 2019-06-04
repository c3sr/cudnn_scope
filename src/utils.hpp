#pragma once

#include <complex>
#include <type_traits>

#include <cuda_runtime.h>

#include <cudnn.h>

#include <cuda_fp16.h>

#include "prettyprint.hpp"
#include "utils/utils.hpp"

#if CUDNN_VERSION >= 7000
#define CUDNN_SUPPORTS_TENSOR_OPS 1
#endif // CUDNN_VERSION >= 7000

static const int ConvBwdTypeUndefined = 0;
static const int ConvBwdTypeData      = 1;
static const int ConvBwdTypeFilter    = 2;
static const int ConvBwdTypeBias      = 3;

static const int ConvFwdTypeUndefined           = 0;
static const int ConvFwdTypeConv                = 1;
static const int ConvFwdTypeBias                = 2;
static const int ConvFwdTypeConvFusedActivation = 2;


template <typename T>
struct valueDataType {};

template <>
struct valueDataType<int8_t> {
  static const cudnnDataType_t type = CUDNN_DATA_INT8;
};

template <>
struct valueDataType<int32_t> {
  static const cudnnDataType_t type = CUDNN_DATA_INT32;
};

template <>
struct valueDataType<__half> {
  static const cudnnDataType_t type = CUDNN_DATA_HALF;
};

template <>
struct valueDataType<float> {
  static const cudnnDataType_t type = CUDNN_DATA_FLOAT;
};

template <>
struct valueDataType<double> {
  static const cudnnDataType_t type = CUDNN_DATA_DOUBLE;
};

template <typename T>
struct accumDataType {};

template <>
struct accumDataType<int8_t> {
  static const cudnnDataType_t type = CUDNN_DATA_INT32;
};

template <>
struct accumDataType<int32_t> {
  static const cudnnDataType_t type = CUDNN_DATA_INT32;
};

template <>
struct accumDataType<__half> {
  static const cudnnDataType_t type = CUDNN_DATA_HALF;
};

template <>
struct accumDataType<float> {
  static const cudnnDataType_t type = CUDNN_DATA_FLOAT;
};

template <>
struct accumDataType<double> {
  static const cudnnDataType_t type = CUDNN_DATA_DOUBLE;
};

namespace detail {

/*!
 *  * \brief Determine minor version number of the gpu's cuda compute architecture.
 *   * \param device_id The device index of the cuda-capable gpu of interest.
 *    * \return the minor version number of the gpu's cuda compute architecture.
 *     */
static inline int ComputeCapabilityMinor(int device_id) {
  int minor = 0;
  PRINT_IF_ERROR(cudaDeviceGetAttribute(&minor, cudaDevAttrComputeCapabilityMinor, device_id));
  return minor;
}

/*!
 * \brief Determine major version number of the gpu's cuda compute architecture.
 * \param device_id The device index of the cuda-capable gpu of interest.
 * \return the major version number of the gpu's cuda compute architecture.
 */
static inline int ComputeCapabilityMajor(int device_id) {
  int major = 0;
  PRINT_IF_ERROR(cudaDeviceGetAttribute(&major, cudaDevAttrComputeCapabilityMajor, device_id));
  return major;
}

/*!
 * \brief Determine whether a cuda-capable gpu's architecture supports float16
 * math. Assume not if device_id is negative. \param device_id The device index
 * of the cuda-capable gpu of interest. \return whether the gpu's architecture
 * supports float16 math.
 */
static inline bool SupportsFloat16Compute(int device_id) {
  if (device_id < 0) {
    return false;
  } else {
    // Kepler and most Maxwell GPUs do not support fp16 compute
    int computeCapabilityMajor = ComputeCapabilityMajor(device_id);
    return (computeCapabilityMajor > 5) || (computeCapabilityMajor == 5 && ComputeCapabilityMinor(device_id) >= 3);
  }
}

/*!
 * \brief Determine whether a cuda-capable gpu's architecture supports Tensor
 * Core math. Assume not if device_id is negative. \param device_id The device
 * index of the cuda-capable gpu of interest. \return whether the gpu's
 * architecture supports Tensor Core math.
 */
static inline bool SupportsTensorCore(int device_id) {
  // Volta (sm_70) supports TensorCore algos
  return device_id >= 0 && ComputeCapabilityMajor(device_id) >= 7;
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

template <>
__half zero<__half>() {
  __half res;
  memset(&res, 0, sizeof(res));
  return res;
};

// calculates convolution output dimension
// yh = int64(math.Floor(float64(xh+c.Pads[0]+c.Pads[1]-(c.Dilations[0]*(wh-1)+1))/float64(c.Strides[0])) + 1)
// yw = int64(math.Floor(float64(xw+c.Pads[2]+c.Pads[3]-(c.Dilations[1]*(ww-1)+1))/float64(c.Strides[1])) + 1)
static inline int detail::calc_conv_out_dim(int input_dim, int filter_dim, int padd, int stride, int dilation) {
  return (input_dim + 2 * padd - (dilation * (filter_dim - 1) + 1)) / stride + 1;
}
} // namespace detail

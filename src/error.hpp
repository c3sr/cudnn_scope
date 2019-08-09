#pragma once

#include <cublas_v2.h>
#include <cudnn.h>
#ifdef ENABLE_CUDNN_CUPTI
#include <cupti.h>
#endif

#include "utils/error.hpp"

namespace utils {
namespace detail {

  template <>
  ALWAYS_INLINE const char *error_string<cudnnStatus_t>(const cudnnStatus_t &status) {
    switch (status) {
      case CUDNN_STATUS_SUCCESS:
        return "CUDNN_STATUS_SUCCESS";
      case CUDNN_STATUS_NOT_INITIALIZED:
        return "CUDNN_STATUS_NOT_INITIALIZED";
      case CUDNN_STATUS_ALLOC_FAILED:
        return "CUDNN_STATUS_ALLOC_FAILED";
      case CUDNN_STATUS_BAD_PARAM:
        return "CUDNN_STATUS_BAD_PARAM";
      case CUDNN_STATUS_INTERNAL_ERROR:
        return "CUDNN_STATUS_INTERNAL_ERROR";
      case CUDNN_STATUS_INVALID_VALUE:
        return "CUDNN_STATUS_INVALID_VALUE";
      case CUDNN_STATUS_ARCH_MISMATCH:
        return "CUDNN_STATUS_ARCH_MISMATCH";
      case CUDNN_STATUS_MAPPING_ERROR:
        return "CUDNN_STATUS_MAPPING_ERROR";
      case CUDNN_STATUS_EXECUTION_FAILED:
        return "CUDNN_STATUS_EXECUTION_FAILED";
      case CUDNN_STATUS_NOT_SUPPORTED:
        return "CUDNN_STATUS_NOT_SUPPORTED";
      case CUDNN_STATUS_LICENSE_ERROR:
        return "CUDNN_STATUS_LICENSE_ERROR";
      case CUDNN_STATUS_RUNTIME_IN_PROGRESS:
        return "CUDNN_STATUS_RUNTIME_IN_PROGRESS";
      case CUDNN_STATUS_RUNTIME_PREREQUISITE_MISSING:
        return "CUDNN_STATUS_RUNTIME_PREREQUISITE_MISSING";
      case CUDNN_STATUS_RUNTIME_FP_OVERFLOW:
        return "CUDNN_STATUS_RUNTIME_FP_OVERFLOW";
      default:
        return "Unknown error.";
    }
  }

  template <>
  ALWAYS_INLINE const char *error_string<cublasStatus_t>(const cublasStatus_t &status) {
    switch (status) {
      case CUBLAS_STATUS_SUCCESS:
        return "CUBLAS_STATUS_SUCCESS";
      case CUBLAS_STATUS_NOT_INITIALIZED:
        return "CUBLAS_STATUS_NOT_INITIALIZED";
      case CUBLAS_STATUS_ALLOC_FAILED:
        return "CUBLAS_STATUS_ALLOC_FAILED";
      case CUBLAS_STATUS_INVALID_VALUE:
        return "CUBLAS_STATUS_INVALID_VALUE";
      case CUBLAS_STATUS_ARCH_MISMATCH:
        return "CUBLAS_STATUS_ARCH_MISMATCH";
      case CUBLAS_STATUS_MAPPING_ERROR:
        return "CUBLAS_STATUS_MAPPING_ERROR";
      case CUBLAS_STATUS_EXECUTION_FAILED:
        return "CUBLAS_STATUS_EXECUTION_FAILED";
      case CUBLAS_STATUS_INTERNAL_ERROR:
        return "CUBLAS_STATUS_INTERNAL_ERROR";
      case CUBLAS_STATUS_NOT_SUPPORTED:
        return "CUBLAS_STATUS_NOT_SUPPORTED";
      case CUBLAS_STATUS_LICENSE_ERROR:
        return "CUBLAS_STATUS_LICENSE_ERROR";
      default:
        return "Unknown error.";
    }
  }

#ifdef ENABLE_CUDNN_CUPTI
  template <>
  ALWAYS_INLINE const char *error_string<CUptiResult>(const CUptiResult &status) {
    const char *res;
    cuptiGetResultString(status, &res);
    return res;
  }
#endif // ENABLE_CUDNN_CUPTI

  template <>
  ALWAYS_INLINE bool is_success<cudnnStatus_t>(const cudnnStatus_t &err) {
    return err == CUDNN_STATUS_SUCCESS;
  }

  template <>
  ALWAYS_INLINE bool is_success<cublasStatus_t>(const cublasStatus_t &err) {
    return err == CUBLAS_STATUS_SUCCESS;
  }

#ifdef ENABLE_CUDNN_CUPTI
  template <>
  ALWAYS_INLINE bool is_success<CUptiResult>(const CUptiResult &err) {
    return err == CUPTI_SUCCESS;
  }
#endif // ENABLE_CUDNN_CUPTI

} // namespace detail
} // namespace utils

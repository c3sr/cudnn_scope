#pragma once

#include "init/init.hpp"

extern CUcontext m_context;
extern CUdevice m_device;
extern cudnnHandle_t cudnn_handle;
extern cublasHandle_t cublas_handle;
extern int cuda_device_id;

extern int32_t num_warmup;
extern std::vector<std::string> metrics;
extern std::vector<std::string> events;

extern std::string gpu_name;
extern std::string host_name;
extern std::string cuda_driver_version;
extern std::string cuda_runtime_version;
extern std::string cupti_version;
extern std::string cudnn_version;
extern std::string cublas_version;
extern std::string compute_capability;

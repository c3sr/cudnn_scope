#pragma once

#include "init/init.hpp"

extern CUcontext m_context;
extern CUdevice m_device;
extern cudnnHandle_t cudnn_handle;
extern cublasHandle_t cublas_handle;
extern int cuda_device_id;

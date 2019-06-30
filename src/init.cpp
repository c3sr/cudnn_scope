#include "scope/init/init.hpp"
#include "scope/init/flags.hpp"
#include "scope/utils/utils.hpp"
#include "scope/utils/version.hpp"

#include <cudnn.h>

#include "config.hpp"
#include "error.hpp"
#include "init/init.hpp"

#include "cupti_profiler.hpp"

CUcontext m_context;
CUdevice m_device;
cudnnHandle_t cudnn_handle;
cublasHandle_t cublas_handle;

DEFINE_FLAG_bool(list_metrics, false, "list cupti metrics");
DEFINE_FLAG_bool(list_events, false, "list cupti events");

int cuda_device_id = 0;

static void register_cupti_flags() {
  RegisterOpt(clara::Opt(FLAG(list_metrics), "list_metrics")["-m"]["--list_metrics"]("list cupti metrics"));
  RegisterOpt(clara::Opt(FLAG(list_events), "list_events")["-e"]["--list_events"]("list cupti events"));
}

static int cuda_init() {
  if (PRINT_IF_ERROR(cuDeviceGet(&m_device, cuda_device_id))) {
    LOG(error, "cudnn_init failed to get CUDA device");
    return -1;
  }

  if (PRINT_IF_ERROR(cuCtxCreate(&m_context, 0, cuda_device_id))) {
    LOG(error, "cudnn_init failed to create CUDA context");
    return -1;
  }
  return 0;
}

static void cupti_options() {
  using namespace cupti_profiler;

  const bool list_metrics = FLAG(list_metrics);
  if (list_metrics) {
    const auto metrics = available_metrics(cuda_device_id);
    for (const auto& metric : metrics) {
      std::cout << metric << "\n";
    }
    exit(0);
  }

  const bool list_events = FLAG(list_events);
  if (list_events) {
    const auto metrics = available_events(cuda_device_id);
    for (const auto& metric : metrics) {
      std::cout << metric << "\n";
    }
    exit(0);
  }
}

static void cudnn_before_init() {
  // Create a version string and tell scope about it
  // These values are defined in cudnn_scope/config.hpp.in
  RegisterVersionString(
      version(SCOPE_PROJECT_NAME, SCOPE_VERSION, SCOPE_GIT_REFSPEC, SCOPE_GIT_HASH, SCOPE_GIT_LOCAL_CHANGES));
}

static int cudnn_init() {

  cuda_device_id = FLAG(cuda_device_ids)[0];

  if (PRINT_IF_ERROR(utils::cuda_reset_device(cuda_device_id))) {
    LOG(error, "cudnn_init failed to reset CUDA device");
    return -1;
  }
  if (PRINT_IF_ERROR(cudaSetDevice(cuda_device_id))) {
    LOG(error, "cudnn_init failed to set CUDA device");
    return -1;
  }

  const auto err = cuda_init();
  if (err) {
    return err;
  }

  if (PRINT_IF_ERROR(cudnnCreate(&cudnn_handle))) {
    LOG(error, "cudnn_init failed create CUDNN handle");
    return -1;
  }
  return 0;
}

static int cublas_init() {
  if (PRINT_IF_ERROR(cublasCreate(&cublas_handle))) {
    LOG(error, "cublas_init failed create CUBLAS handle");
    return -1;
  };
  return 0;
}

SCOPE_REGISTER_BEFORE_INIT(cudnn_before_init);
SCOPE_REGISTER_BEFORE_INIT(register_cupti_flags);
SCOPE_REGISTER_INIT(cudnn_init);
SCOPE_REGISTER_INIT(cublas_init);
SCOPE_REGISTER_AFTER_INIT(cupti_options, "cupti");

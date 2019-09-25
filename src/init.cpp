#include "scope/init/init.hpp"
#include "scope/init/flags.hpp"
#include "scope/utils/utils.hpp"
#include "scope/utils/version.hpp"

#include "spdlog/sinks/ansicolor_sink.h"
#include "spdlog/spdlog.h"

#include <cudnn.h>

#include "config.hpp"
#include "error.hpp"
#include "init/init.hpp"

#include "cupti_profiler.hpp"

CUcontext m_context;
CUdevice m_device;
cudnnHandle_t cudnn_handle;
cublasHandle_t cublas_handle;
int32_t num_warmup;
std::vector<std::string> metrics;
std::vector<std::string> events;

std::string gpu_name{""};
std::string host_name{""};
std::string cuda_driver_version{""};
std::string cuda_runtime_version{""};
#ifdef ENABLE_CUDNN_CUPTI
std::string cupti_version{""};
#endif // ENABLE_CUDNN_CUPTI
std::string cublas_version{""};
std::string cudnn_version{""};
std::string compute_capability{""};

DEFINE_FLAG_int32(num_warmup, 10, "number of times to run warmup code");
DEFINE_FLAG_bool(list_metrics, false, "list cupti metrics");
DEFINE_FLAG_bool(list_events, false, "list cupti events");


FLAGS_NS(std::vector<std::string> flop_metrics({"flop_count_sp", "flops_sp_add", "flops_sp_mul", "flops_sp_fma",
                                                       "flops_sp_special"}));
FLAGS_NS(std::vector<std::string> occupancy_metrics({"achieved_occupancy"}));
FLAGS_NS(std::vector<std::string> memory_metrics({"dram_read_bytes",
                                                                                                  "dram_write_bytes"}));

FLAGS_NS(std::vector<std::string> metrics = flop_metrics;);
FLAGS_NS(std::vector<std::string> events({}));

int cuda_device_id = 0;

#ifdef ENABLE_CUDNN_CUPTI
static void register_cupti_flags() {
  RegisterOpt(clara::Opt(FLAG(num_warmup), "num_warmup")["-w"]["--num_warmup"]("number of times to run warmup code"));
  RegisterOpt(clara::Opt(FLAG(metrics), "metrics")["--metrics"]("metrics to capture"));
  RegisterOpt(clara::Opt(FLAG(metrics), "events")["--events"]("events to capture"));
  RegisterOpt(clara::Opt(FLAG(list_metrics), "list_metrics")["-m"]["--list_metrics"]("list cupti metrics"));
  RegisterOpt(clara::Opt(FLAG(list_events), "list_events")["-e"]["--list_events"]("list cupti events"));
}
#endif // ENABLE_CUDNN_CUPTI

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

#ifdef ENABLE_CUDNN_CUPTI
static void cupti_options() {
  using namespace cupti_profiler;

  if (FLAG(list_metrics)) {
    for (const auto& metric : available_metrics(cuda_device_id)) {
      std::cout << metric << "\n";
    }
    exit(0);
  }

  if (FLAG(list_events)) {
    for (const auto& event : available_events(cuda_device_id)) {
      std::cout << event << "\n";
    }
    exit(0);
  }
}
#endif // ENABLE_CUDNN_CUPTI

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

  num_warmup = FLAG(num_warmup);

  metrics = FLAG(metrics);
  events  = FLAG(events);

  return 0;
}

static int cublas_init() {
  if (PRINT_IF_ERROR(cublasCreate(&cublas_handle))) {
    LOG(error, "cublas_init failed create CUBLAS handle");
    return -1;
  };
  return 0;
}

static void color_logger() {
  // bench::init::logger::console = spdlog::stdout_color_mt("cudnn_scope");
}

static std::string get_hostname() {
  char hostname[1024];
  gethostname(hostname, sizeof(hostname));
  hostname[sizeof(hostname) - 1] = 0;
  return std::string(hostname);
}

static std::string get_gpu_name() {
  cudaDeviceProp deviceProp;
  PRINT_IF_ERROR(cudaGetDeviceProperties(&deviceProp, cuda_device_id));
  return std::string(deviceProp.name);
}

static std::string get_cuda_runtime_version() {
  int version = 0;
  PRINT_IF_ERROR(cudaDriverGetVersion(&version));
  return fmt::format("{}.{}", version / 1000, version % 100);
}

static std::string get_cuda_driver_version() {
  int version = 0;
  PRINT_IF_ERROR(cudaRuntimeGetVersion(&version));
  return fmt::format("{}.{}", version / 1000, version % 100);
}

#ifdef ENABLE_CUDNN_CUPTI
static std::string get_cupti_version() {
  uint32_t version = 0;
  PRINT_IF_ERROR(cuptiGetVersion(&version));
  return fmt::format("{}.{}", version / 1000, version % 100);
}
#endif // ENABLE_CUDNN_CUPTI

static std::string get_cublas_version() {
  int version = 0;
  PRINT_IF_ERROR(cublasGetVersion(cublas_handle, &version));
  return fmt::format("{}.{}", version / 1000, version % 100);
}

static std::string get_cudnn_version() {
  const auto version = CUDNN_VERSION;
  return fmt::format("{}.{}.{}", CUDNN_MAJOR, CUDNN_MINOR, CUDNN_PATCHLEVEL);
}

/*!
 *  * \brief Determine minor version number of the gpu's cuda compute architecture.
 *   * \param device_id The device index of the cuda-capable gpu of interest.
 *    * \return the minor version number of the gpu's cuda compute architecture.
 *     */
static inline int compute_capability_minor(int device_id) {
  int minor = 0;
  PRINT_IF_ERROR(cudaDeviceGetAttribute(&minor, cudaDevAttrComputeCapabilityMinor, device_id));
  return minor;
}

/*!
 * \brief Determine major version number of the gpu's cuda compute architecture.
 * \param device_id The device index of the cuda-capable gpu of interest.
 * \return the major version number of the gpu's cuda compute architecture.
 */
static inline int compute_capability_major(int device_id) {
  int major = 0;
  PRINT_IF_ERROR(cudaDeviceGetAttribute(&major, cudaDevAttrComputeCapabilityMajor, device_id));
  return major;
}

static std::string get_compute_capability() {
  return fmt::format("{}.{}", compute_capability_major(cuda_device_id), compute_capability_minor(cuda_device_id));
}

static void system_info() {
  gpu_name             = get_gpu_name();
  host_name            = get_hostname();
  cuda_runtime_version = get_cuda_runtime_version();
  cuda_driver_version  = get_cuda_driver_version();
  cublas_version       = get_cublas_version();
#ifdef ENABLE_CUDNN_CUPTI
  cupti_version = get_cupti_version();
#endif // ENABLE_CUDNN_CUPTI
  cudnn_version      = get_cudnn_version();
  compute_capability = get_compute_capability();
}

SCOPE_REGISTER_BEFORE_INIT(cudnn_before_init);
#ifdef ENABLE_CUDNN_CUPTI
SCOPE_REGISTER_BEFORE_INIT(register_cupti_flags);
#endif // ENABLE_CUDNN_CUPTI
SCOPE_REGISTER_INIT(cudnn_init);
SCOPE_REGISTER_INIT(cublas_init);
#ifdef ENABLE_CUDNN_CUPTI
SCOPE_REGISTER_AFTER_INIT(cupti_options, "cupti");
#endif // ENABLE_CUDNN_CUPTI
SCOPE_REGISTER_AFTER_INIT(color_logger, "logger");
SCOPE_REGISTER_AFTER_INIT(system_info, "system_info");

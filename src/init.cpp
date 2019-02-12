#include "scope/init/init.hpp"
#include "scope/init/flags.hpp"
#include "scope/utils/utils.hpp"
#include "scope/utils/version.hpp"

#include <cudnn.h>

#include "config.hpp"
#include "error.hpp"
#include "init/init.hpp"

cudnnHandle_t cudnn_handle;
int cuda_device_id = 0;

void cudnn_before_init() {
  // Create a version string and tell scope about it
  // These values are defined in cudnn_scope/config.hpp.in
  RegisterVersionString(
      version(SCOPE_PROJECT_NAME, SCOPE_VERSION, SCOPE_GIT_REFSPEC, SCOPE_GIT_HASH, SCOPE_GIT_LOCAL_CHANGES));
}

int cudnn_init() {

  const int cuda_device_id = FLAG(cuda_device_ids)[0];

  if (PRINT_IF_ERROR(utils::cuda_reset_device(cuda_device_id))) {
    LOG(error, "cudnn_init failed to reset CUDA device");
    return -1;
  }
  if (PRINT_IF_ERROR(cudaSetDevice(cuda_device_id))) {
    LOG(error, "cudnn_init failed to set CUDA device");
    return -1;
  }

  if (PRINT_IF_ERROR(cudnnCreate(&cudnn_handle))) {
    LOG(error, "cudnn_init failed create CUDNN handle");
    return -1;
  }
  return 0;
}

SCOPE_REGISTER_BEFORE_INIT(cudnn_before_init);
SCOPE_REGISTER_INIT(cudnn_init);

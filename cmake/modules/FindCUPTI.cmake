# - Try to find cuDNN
#
# The following variables are optionally searched for defaults
#  CUPTI_ROOT_DIR:            Base directory where all cuDNN components are found
#
# The following are set after configuration is done:
#  CUPTI_FOUND
#  CUPTI_INCLUDE_DIRS
#  CUPTI_LIBRARIES
#  CUPTI_LIBRARY_DIRS

include(FindPackageHandleStandardArgs)

set(CUPTI_ROOT_DIR "" CACHE PATH "Folder contains NVIDIA CUPTI")

find_path(CUPTI_INCLUDE_DIR cupti.h
    HINTS ${CUPTI_ROOT_DIR} ${CUDA_TOOLKIT_ROOT_DIR}/extras/CUPTI
    PATH_SUFFIXES include)

find_library(CUPTI_LIBRARY cupti
    HINTS ${CUPTI_ROOT_DIR} ${CUDA_TOOLKIT_ROOT_DIR}/extras/CUPTI
    PATH_SUFFIXES lib lib64 lib lib64 x64)

find_package_handle_standard_args(
    CUPTI DEFAULT_MSG CUPTI_INCLUDE_DIR CUPTI_LIBRARY)

if(CUPTI_FOUND)
	# get CUPTI version
  file(READ ${CUPTI_INCLUDE_DIR}/cupti.h CUPTI_HEADER_CONTENTS)
	string(REGEX MATCH "define CUPTI_MAJOR * +([0-9]+)"
				 CUPTI_VERSION_MAJOR "${CUPTI_HEADER_CONTENTS}")
	string(REGEX REPLACE "define CUPTI_MAJOR * +([0-9]+)" "\\1"
				 CUPTI_VERSION_MAJOR "${CUPTI_VERSION_MAJOR}")
	string(REGEX MATCH "define CUPTI_MINOR * +([0-9]+)"
				 CUPTI_VERSION_MINOR "${CUPTI_HEADER_CONTENTS}")
	string(REGEX REPLACE "define CUPTI_MINOR * +([0-9]+)" "\\1"
				 CUPTI_VERSION_MINOR "${CUPTI_VERSION_MINOR}")
	string(REGEX MATCH "define CUPTI_PATCHLEVEL * +([0-9]+)"
				 CUPTI_VERSION_PATCH "${CUPTI_HEADER_CONTENTS}")
	string(REGEX REPLACE "define CUPTI_PATCHLEVEL * +([0-9]+)" "\\1"
				 CUPTI_VERSION_PATCH "${CUPTI_VERSION_PATCH}")
  # Assemble CUPTI version
  if(NOT CUPTI_VERSION_MAJOR)
    set(CUPTI_VERSION "?")
  else()
    set(CUPTI_VERSION "${CUPTI_VERSION_MAJOR}.${CUPTI_VERSION_MINOR}.${CUPTI_VERSION_PATCH}")
  endif()

  set(CUPTI_INCLUDE_DIRS ${CUPTI_INCLUDE_DIR})
  set(CUPTI_LIBRARIES ${CUPTI_LIBRARY})
  message(STATUS "Found CUPTI: v${CUPTI_VERSION}  (include: ${CUPTI_INCLUDE_DIR}, library: ${CUPTI_LIBRARY})")
  mark_as_advanced(CUPTI_ROOT_DIR CUPTI_LIBRARY CUPTI_INCLUDE_DIR)
endif()
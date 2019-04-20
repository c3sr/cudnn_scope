
#pragma once

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef EXTERN_C
#ifdef __cplusplus
#define EXTERN_C extern "C"
#define BEGIN_EXTERN_C EXTERN_C {
#define END_EXTERN_C }
#else //__cplusplus
#define EXTERN_C
#define BEGIN_EXTERN_C
#define END_EXTERN_C
#endif // __cplusplus
#endif // EXTERN_C

typedef enum CUDNN_Scope_DataType {
  CUDNN_Scope_Unknown = 0,
  CUDNN_Scope_Byte    = 1,
  CUDNN_Scope_Char    = 2,
  CUDNN_Scope_Short   = 3,
  CUDNN_Scope_Int     = 4,
  CUDNN_Scope_Long    = 5,
  CUDNN_Scope_Half    = 6,
  CUDNN_Scope_Float   = 7,
  CUDNN_Scope_Double  = 8,
} CUDNN_Scope_DataType;

////////////////////////////////////////////////////////////////////////////////////////
// CUDNN_Scope_Error
////////////////////////////////////////////////////////////////////////////////////////
typedef struct CUDNN_Scope_Error {
  char* message;
} CUDNN_Scope_Error;

extern CUDNN_Scope_Error CUDNN_Scope_GlobalError;
////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
// CUDNN_Scope_ActivationBWD
////////////////////////////////////////////////////////////////////////////////////////
typedef void* CUDNN_Scope_ActivationBWDHandle;
EXTERN_C CUDNN_Scope_ActivationBWDHandle CUDNN_Scope_ActivationBWD_New(int64_t w, int64_t h, int64_t c, int64_t n,
                                                                       int64_t k, int64_t filter_width,
                                                                       int64_t filter_height, int64_t pad_w,
                                                                       int64_t pad_h, int64_t wstride, int64_t hstride,
                                                                       cudnnActivationMode_t activation_mode);
EXTERN_C void CUDNN_Scope_ActivationBWD_SetUp(CUDNN_Scope_ActivationBWDHandle handle);
EXTERN_C void CUDNN_Scope_ActivationBWD_TearDown(CUDNN_Scope_ActivationBWDHandle handle);
EXTERN_C char* CUDNN_Scope_ActivationBWD_Attributes(CUDNN_Scope_ActivationBWDHandle handle);
EXTERN_C int64_t CUDNN_Scope_ActivationBWD_Run(CUDNN_Scope_ActivationBWDHandle handle);
////////////////////////////////////////////////////////////////////////////////////////

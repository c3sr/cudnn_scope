#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__15402659136871808490 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 */, \
      9216 /* Input1 */, \
      1 /* Input2 */, \
      1 /* Input3 */, \
      1 /* Input4 */, \
      -1 /* Input5 */, \
      0 /* Input6 */, \
      0 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__15402659136871808490(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 9216} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__15402659136871808490(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__15402659136871808490(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__15402659136871808490)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUDNN_DROPOUT_FWD
namespace LAYER_CUDNN_DROPOUT_FWD__BatchSize_1__13972583525817633749 {

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      -1 /* Input2 */, \
      -1 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__BatchSize_1__13972583525817633749(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


static void LAYER_CUDNN_DROPOUT_FWD_FLOAT32__BatchSize_1__13972583525817633749(benchmark::State& state) {
  LAYER_CUDNN_DROPOUT_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__BatchSize_1__13972583525817633749(state);
}




BENCHMARK(LAYER_CUDNN_DROPOUT_FWD_FLOAT32__BatchSize_1__13972583525817633749)->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUDNN_DROPOUT_FWD
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_FWD
namespace LAYER_CUDNN_SOFTMAX_FWD__BatchSize_1__17337716149880998901 {

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      1000 /* Input1 */, \
      -1 /* Input2 */, \
      -1 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_ADD_COUNTERS__BatchSize_1__17337716149880998901(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_FWD_FLOAT32__BatchSize_1__17337716149880998901(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_FWD_Impl<float, softmax_algorithm, softmax_mode>(state);
  BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_ADD_COUNTERS__BatchSize_1__17337716149880998901(state);
}

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0(b, SOFTMAX_MODE) \
 BENCHMARK_TEMPLATE(b, SOFTMAX_MODE, CUDNN_SOFTMAX_MODE_INSTANCE)\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES()\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS()\
  ->UseManualTime(); \
 BENCHMARK_TEMPLATE(b, SOFTMAX_MODE, CUDNN_SOFTMAX_MODE_CHANNEL)\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES()\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS()\
  ->UseManualTime(); \


#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD(b)                                                                                             \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0(b, CUDNN_SOFTMAX_FAST);                                                                    \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0(b, CUDNN_SOFTMAX_ACCURATE);                                                                    \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0(b, CUDNN_SOFTMAX_LOG)

BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD(LAYER_CUDNN_SOFTMAX_FWD_FLOAT32__BatchSize_1__17337716149880998901);

#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD
}
#endif // ENABLE_LAYER_CUDNN_SOFTMAX_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__3477789508090029587 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      384 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      384 /* FilterCount */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      1 /* PadHeight */, \
      1 /* PadWidth */, \
      1 /* StrideHeight */, \
      1 /* StrideWidth */, \
      1 /* DilationWidth */, \
      1 /* DilationHeight */, \
      ConvBwdTypeUndefined /* ConvBwdType */, \
      1 /* BatchSize */, \
      2 /* Group */, \
  }})

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_bwd_type", "batch_size", "group"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__3477789508090029587(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"filter_count", 384} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"group", 2} /* Group */, 
  });
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__3477789508090029587(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__3477789508090029587(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__3477789508090029587);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__3477789508090029587
#endif // ENABLE_LAYER_CUDNN_CONV_FWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__10450061830298950609 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      96 /* Input1 */, \
      54 /* Input2 */, \
      54 /* Input3 */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      0 /* PadHeight */, \
      0 /* PadWidth */, \
      2 /* StrideHeight */, \
      2 /* StrideWidth */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__10450061830298950609(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__10450061830298950609(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__10450061830298950609(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__10450061830298950609);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__10450061830298950609
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__15196650425865225473 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      3 /* Input1 */, \
      224 /* Input2 */, \
      224 /* Input3 */, \
      96 /* FilterCount */, \
      11 /* FilterHeight */, \
      11 /* FilterWidth */, \
      0 /* PadHeight */, \
      0 /* PadWidth */, \
      4 /* StrideHeight */, \
      4 /* StrideWidth */, \
      1 /* DilationWidth */, \
      1 /* DilationHeight */, \
      ConvBwdTypeUndefined /* ConvBwdType */, \
      1 /* BatchSize */, \
      1 /* Group */, \
  }})

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_bwd_type", "batch_size", "group"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__15196650425865225473(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 3} /* Input1 */, 
      {"input[2]", 224} /* Input2 */, 
      {"input[3]", 224} /* Input3 */, 
      {"filter_count", 96} /* FilterCount */, 
      {"filter_height", 11} /* FilterHeight */, 
      {"filter_width", 11} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 4} /* StrideHeight */, 
      {"stride_width", 4} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"group", 1} /* Group */, 
  });
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__15196650425865225473(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__15196650425865225473(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__15196650425865225473);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__15196650425865225473
#endif // ENABLE_LAYER_CUDNN_CONV_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__3204589935015321621 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__3204589935015321621(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__3204589935015321621(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__3204589935015321621(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__3204589935015321621);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__3204589935015321621
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__4398006555967076612 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      384 /* FilterCount */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      1 /* PadHeight */, \
      1 /* PadWidth */, \
      1 /* StrideHeight */, \
      1 /* StrideWidth */, \
      1 /* DilationWidth */, \
      1 /* DilationHeight */, \
      ConvBwdTypeUndefined /* ConvBwdType */, \
      1 /* BatchSize */, \
      1 /* Group */, \
  }})

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_bwd_type", "batch_size", "group"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__4398006555967076612(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"filter_count", 384} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"group", 1} /* Group */, 
  });
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__4398006555967076612(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__4398006555967076612(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__4398006555967076612);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__4398006555967076612
#endif // ENABLE_LAYER_CUDNN_CONV_FWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__1476794823864465519 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      0 /* PadHeight */, \
      1 /* PadWidth */, \
      2 /* StrideHeight */, \
      2 /* StrideWidth */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__1476794823864465519(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__1476794823864465519(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__1476794823864465519(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__1476794823864465519);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__1476794823864465519
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__4632184029031234066 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 */, \
      4096 /* Input1 */, \
      1 /* Input2 */, \
      1 /* Input3 */, \
      1 /* Input4 */, \
      -1 /* Input5 */, \
      0 /* Input6 */, \
      0 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__4632184029031234066(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__4632184029031234066(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__4632184029031234066(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__4632184029031234066)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__5216557022179604397 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      1000 /* Input0 */, \
      4096 /* Input1 */, \
      1 /* Input2 */, \
      1 /* Input3 */, \
      1 /* Input4 */, \
      -1 /* Input5 */, \
      0 /* Input6 */, \
      0 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__5216557022179604397(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1000} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__5216557022179604397(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__5216557022179604397(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_1__5216557022179604397)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__13364347910319021393 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      26 /* Input2 */, \
      26 /* Input3 */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      0 /* PadHeight */, \
      0 /* PadWidth */, \
      2 /* StrideHeight */, \
      2 /* StrideWidth */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__13364347910319021393(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__13364347910319021393(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__13364347910319021393(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_1__13364347910319021393);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__13364347910319021393
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1506774461810377604 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      96 /* Input1 */, \
      54 /* Input2 */, \
      54 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1506774461810377604(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__1506774461810377604(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1506774461810377604(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__1506774461810377604);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1506774461810377604
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__14316274289877239219 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      384 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__14316274289877239219(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__14316274289877239219(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__14316274289877239219(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__14316274289877239219);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__14316274289877239219
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__14083278732595022219 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      384 /* Input1 */, \
      12 /* Input2 */, \
      12 /* Input3 */, \
      256 /* FilterCount */, \
      3 /* FilterHeight */, \
      3 /* FilterWidth */, \
      1 /* PadHeight */, \
      1 /* PadWidth */, \
      1 /* StrideHeight */, \
      1 /* StrideWidth */, \
      1 /* DilationWidth */, \
      1 /* DilationHeight */, \
      ConvBwdTypeUndefined /* ConvBwdType */, \
      1 /* BatchSize */, \
      2 /* Group */, \
  }})

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_bwd_type", "batch_size", "group"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__14083278732595022219(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"group", 2} /* Group */, 
  });
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__14083278732595022219(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__14083278732595022219(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__14083278732595022219);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__14083278732595022219
#endif // ENABLE_LAYER_CUDNN_CONV_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__10999353342876867035 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      96 /* Input1 */, \
      26 /* Input2 */, \
      26 /* Input3 */, \
      256 /* FilterCount */, \
      5 /* FilterHeight */, \
      5 /* FilterWidth */, \
      2 /* PadHeight */, \
      2 /* PadWidth */, \
      1 /* StrideHeight */, \
      1 /* StrideWidth */, \
      1 /* DilationWidth */, \
      1 /* DilationHeight */, \
      ConvBwdTypeUndefined /* ConvBwdType */, \
      1 /* BatchSize */, \
      2 /* Group */, \
  }})

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_bwd_type", "batch_size", "group"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__10999353342876867035(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 5} /* FilterHeight */, 
      {"filter_width", 5} /* FilterWidth */, 
      {"pad_height", 2} /* PadHeight */, 
      {"pad_width", 2} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"group", 2} /* Group */, 
  });
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__10999353342876867035(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__10999353342876867035(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__10999353342876867035);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__10999353342876867035
#endif // ENABLE_LAYER_CUDNN_CONV_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__6095698385120626904 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      26 /* Input2 */, \
      26 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__6095698385120626904(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__6095698385120626904(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__6095698385120626904(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__6095698385120626904);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__6095698385120626904
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1263013196612366791 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      -1 /* Input2 */, \
      -1 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
      1 /* BatchSize */, \
  }})

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1263013196612366791(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
  });
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__1263013196612366791(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1263013196612366791(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_1__1263013196612366791);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1263013196612366791
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD

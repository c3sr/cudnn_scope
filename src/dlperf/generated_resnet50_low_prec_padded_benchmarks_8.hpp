#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_8__2875413648790202851 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      1 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      8 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2875413648790202851{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_8__2875413648790202851(benchmark::State& state) {
  const auto inputs = input_args__2875413648790202851;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_8__2875413648790202851(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_8__2875413648790202851(state);
    LAYER_CUDNN_POOLING_FWD_Impl<__half, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_8__2875413648790202851(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_8__2875413648790202851);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_8__2875413648790202851
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__7152826262751072612 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7152826262751072612{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__7152826262751072612(benchmark::State& state) {
  const auto inputs = input_args__7152826262751072612;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__7152826262751072612(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__7152826262751072612(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__7152826262751072612(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__7152826262751072612);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__7152826262751072612
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__8178100064739984175 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8178100064739984175{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__8178100064739984175(benchmark::State& state) {
  const auto inputs = input_args__8178100064739984175;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__8178100064739984175(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__8178100064739984175(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__8178100064739984175(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__8178100064739984175);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__8178100064739984175
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__9567789531534755762 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9567789531534755762{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9567789531534755762(benchmark::State& state) {
  const auto inputs = input_args__9567789531534755762;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__9567789531534755762(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9567789531534755762(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9567789531534755762(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__9567789531534755762);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__9567789531534755762
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4532015560080577629 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      64 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__4532015560080577629{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 64} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4532015560080577629(benchmark::State& state) {
  const auto inputs = input_args__4532015560080577629;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4532015560080577629(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4532015560080577629(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4532015560080577629(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4532015560080577629);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4532015560080577629
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4621840388036956455 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4621840388036956455{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4621840388036956455(benchmark::State& state) {
  const auto inputs = input_args__4621840388036956455;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4621840388036956455(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4621840388036956455(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4621840388036956455(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4621840388036956455);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4621840388036956455
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__6972200120215180548 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      128 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6972200120215180548{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 128} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__6972200120215180548(benchmark::State& state) {
  const auto inputs = input_args__6972200120215180548;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__6972200120215180548(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__6972200120215180548(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__6972200120215180548(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__6972200120215180548);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__6972200120215180548
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__3673071031575996126 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3673071031575996126{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3673071031575996126(benchmark::State& state) {
  const auto inputs = input_args__3673071031575996126;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__3673071031575996126(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3673071031575996126(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3673071031575996126(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__3673071031575996126);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__3673071031575996126
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__11195692453798254114 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11195692453798254114{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__11195692453798254114(benchmark::State& state) {
  const auto inputs = input_args__11195692453798254114;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__11195692453798254114(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__11195692453798254114(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__11195692453798254114(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__11195692453798254114);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__11195692453798254114
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__8465890347405920055 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      8 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      64 /* FilterCount , idx = 4*/, \
      7 /* FilterHeight , idx = 5*/, \
      7 /* FilterWidth , idx = 6*/, \
      3 /* PadHeight , idx = 7*/, \
      3 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8465890347405920055{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 8} /* Input1 */, 
      {"input[2]", 224} /* Input2 */, 
      {"input[3]", 224} /* Input3 */, 
      {"filter_count", 64} /* FilterCount */, 
      {"filter_height", 7} /* FilterHeight */, 
      {"filter_width", 7} /* FilterWidth */, 
      {"pad_height", 3} /* PadHeight */, 
      {"pad_width", 3} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8465890347405920055(benchmark::State& state) {
  const auto inputs = input_args__8465890347405920055;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__8465890347405920055(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8465890347405920055(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8465890347405920055(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__8465890347405920055);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__8465890347405920055
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__13369381677567604857 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13369381677567604857{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__13369381677567604857(benchmark::State& state) {
  const auto inputs = input_args__13369381677567604857;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__13369381677567604857(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__13369381677567604857(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__13369381677567604857(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__13369381677567604857);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__13369381677567604857
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__3150931201331721546 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3150931201331721546{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__3150931201331721546(benchmark::State& state) {
  const auto inputs = input_args__3150931201331721546;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__3150931201331721546(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__3150931201331721546(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__3150931201331721546(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__3150931201331721546);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__3150931201331721546
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__2607003402941080611 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2607003402941080611{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__2607003402941080611(benchmark::State& state) {
  const auto inputs = input_args__2607003402941080611;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__2607003402941080611(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__2607003402941080611(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__2607003402941080611(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__2607003402941080611);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__2607003402941080611
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__3117979616974224382 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      32 /* Input2 , idx = 2*/, \
      32 /* Input3 , idx = 3*/, \
      128 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3117979616974224382{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 32} /* Input2 */, 
      {"input[3]", 32} /* Input3 */, 
      {"filter_count", 128} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3117979616974224382(benchmark::State& state) {
  const auto inputs = input_args__3117979616974224382;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__3117979616974224382(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3117979616974224382(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3117979616974224382(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__3117979616974224382);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__3117979616974224382
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4673639181943078135 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4673639181943078135{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4673639181943078135(benchmark::State& state) {
  const auto inputs = input_args__4673639181943078135;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4673639181943078135(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4673639181943078135(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4673639181943078135(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4673639181943078135);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4673639181943078135
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__11661922188075537363 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      16 /* Input2 , idx = 2*/, \
      16 /* Input3 , idx = 3*/, \
      512 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11661922188075537363{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 16} /* Input2 */, 
      {"input[3]", 16} /* Input3 */, 
      {"filter_count", 512} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__11661922188075537363(benchmark::State& state) {
  const auto inputs = input_args__11661922188075537363;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__11661922188075537363(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__11661922188075537363(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__11661922188075537363(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__11661922188075537363);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__11661922188075537363
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__5408067824915266529 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5408067824915266529{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5408067824915266529(benchmark::State& state) {
  const auto inputs = input_args__5408067824915266529;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__5408067824915266529(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5408067824915266529(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5408067824915266529(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__5408067824915266529);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__5408067824915266529
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__15654125268330690258 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15654125268330690258{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15654125268330690258(benchmark::State& state) {
  const auto inputs = input_args__15654125268330690258;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__15654125268330690258(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15654125268330690258(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15654125268330690258(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__15654125268330690258);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__15654125268330690258
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4507293773787810584 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4507293773787810584{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4507293773787810584(benchmark::State& state) {
  const auto inputs = input_args__4507293773787810584;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4507293773787810584(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4507293773787810584(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4507293773787810584(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4507293773787810584);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4507293773787810584
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__13224026195368287740 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      64 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13224026195368287740{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 64} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__13224026195368287740(benchmark::State& state) {
  const auto inputs = input_args__13224026195368287740;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__13224026195368287740(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__13224026195368287740(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__13224026195368287740(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__13224026195368287740);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__13224026195368287740
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9510114122401726647 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9510114122401726647{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9510114122401726647(benchmark::State& state) {
  const auto inputs = input_args__9510114122401726647;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9510114122401726647(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9510114122401726647(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9510114122401726647(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9510114122401726647);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9510114122401726647
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__14391511132943410902 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      64 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14391511132943410902{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 64} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__14391511132943410902(benchmark::State& state) {
  const auto inputs = input_args__14391511132943410902;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__14391511132943410902(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__14391511132943410902(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__14391511132943410902(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__14391511132943410902);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__14391511132943410902
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__12744304533251939277 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12744304533251939277{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__12744304533251939277(benchmark::State& state) {
  const auto inputs = input_args__12744304533251939277;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__12744304533251939277(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__12744304533251939277(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__12744304533251939277(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__12744304533251939277);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__12744304533251939277
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__2517252182650902270 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2517252182650902270{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__2517252182650902270(benchmark::State& state) {
  const auto inputs = input_args__2517252182650902270;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__2517252182650902270(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__2517252182650902270(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__2517252182650902270(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__2517252182650902270);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__2517252182650902270
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__5088233185550574945 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5088233185550574945{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5088233185550574945(benchmark::State& state) {
  const auto inputs = input_args__5088233185550574945;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__5088233185550574945(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5088233185550574945(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__5088233185550574945(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__5088233185550574945);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__5088233185550574945
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__15325406386301610066 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15325406386301610066{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15325406386301610066(benchmark::State& state) {
  const auto inputs = input_args__15325406386301610066;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__15325406386301610066(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15325406386301610066(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__15325406386301610066(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__15325406386301610066);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__15325406386301610066
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__17471725211689562153 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      512 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__17471725211689562153{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"filter_count", 512} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__17471725211689562153(benchmark::State& state) {
  const auto inputs = input_args__17471725211689562153;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__17471725211689562153(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__17471725211689562153(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__17471725211689562153(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__17471725211689562153);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__17471725211689562153
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__14034168392062915356 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14034168392062915356{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__14034168392062915356(benchmark::State& state) {
  const auto inputs = input_args__14034168392062915356;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__14034168392062915356(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__14034168392062915356(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__14034168392062915356(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__14034168392062915356);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__14034168392062915356
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__15263577827825983061 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15263577827825983061{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__15263577827825983061(benchmark::State& state) {
  const auto inputs = input_args__15263577827825983061;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__15263577827825983061(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__15263577827825983061(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__15263577827825983061(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__15263577827825983061);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__15263577827825983061
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__4747024752554709862 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4747024752554709862{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__4747024752554709862(benchmark::State& state) {
  const auto inputs = input_args__4747024752554709862;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__4747024752554709862(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__4747024752554709862(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__4747024752554709862(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__4747024752554709862);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__4747024752554709862
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__655690948441552712 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__655690948441552712{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__655690948441552712(benchmark::State& state) {
  const auto inputs = input_args__655690948441552712;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__655690948441552712(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__655690948441552712(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__655690948441552712(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__655690948441552712);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__655690948441552712
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__502280892097005633 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__502280892097005633{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__502280892097005633(benchmark::State& state) {
  const auto inputs = input_args__502280892097005633;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__502280892097005633(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__502280892097005633(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__502280892097005633(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__502280892097005633);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__502280892097005633
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__10721869195398776178 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10721869195398776178{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10721869195398776178(benchmark::State& state) {
  const auto inputs = input_args__10721869195398776178;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__10721869195398776178(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10721869195398776178(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10721869195398776178(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__10721869195398776178);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__10721869195398776178
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9002179686972693935 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9002179686972693935{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9002179686972693935(benchmark::State& state) {
  const auto inputs = input_args__9002179686972693935;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9002179686972693935(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9002179686972693935(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9002179686972693935(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9002179686972693935);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9002179686972693935
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__2188411238439951597 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2188411238439951597{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__2188411238439951597(benchmark::State& state) {
  const auto inputs = input_args__2188411238439951597;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__2188411238439951597(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__2188411238439951597(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__2188411238439951597(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__2188411238439951597);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__2188411238439951597
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__10118746805479248350 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10118746805479248350{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10118746805479248350(benchmark::State& state) {
  const auto inputs = input_args__10118746805479248350;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__10118746805479248350(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10118746805479248350(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__10118746805479248350(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__10118746805479248350);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__10118746805479248350
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__7486368317370164650 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7486368317370164650{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7486368317370164650(benchmark::State& state) {
  const auto inputs = input_args__7486368317370164650;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__7486368317370164650(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7486368317370164650(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7486368317370164650(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__7486368317370164650);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__7486368317370164650
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__11525019904522482502 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      32 /* Input2 , idx = 2*/, \
      32 /* Input3 , idx = 3*/, \
      512 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11525019904522482502{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 32} /* Input2 */, 
      {"input[3]", 32} /* Input3 */, 
      {"filter_count", 512} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__11525019904522482502(benchmark::State& state) {
  const auto inputs = input_args__11525019904522482502;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__11525019904522482502(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__11525019904522482502(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__11525019904522482502(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__11525019904522482502);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__11525019904522482502
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__13541882979725150230 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      2048 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__13541882979725150230{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 2048} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__13541882979725150230(benchmark::State& state) {
  const auto inputs = input_args__13541882979725150230;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__13541882979725150230(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__13541882979725150230(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__13541882979725150230(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__13541882979725150230);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__13541882979725150230
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__5696632173541995356 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      8 /* Input2 , idx = 2*/, \
      8 /* Input3 , idx = 3*/, \
      2048 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5696632173541995356{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 8} /* Input2 */, 
      {"input[3]", 8} /* Input3 */, 
      {"filter_count", 2048} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5696632173541995356(benchmark::State& state) {
  const auto inputs = input_args__5696632173541995356;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__5696632173541995356(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5696632173541995356(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5696632173541995356(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__5696632173541995356);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__5696632173541995356
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__17919895960604568530 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17919895960604568530{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__17919895960604568530(benchmark::State& state) {
  const auto inputs = input_args__17919895960604568530;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__17919895960604568530(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__17919895960604568530(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__17919895960604568530(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__17919895960604568530);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__17919895960604568530
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__7675132775486252769 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7675132775486252769{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__7675132775486252769(benchmark::State& state) {
  const auto inputs = input_args__7675132775486252769;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__7675132775486252769(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__7675132775486252769(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__7675132775486252769(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__7675132775486252769);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__7675132775486252769
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__3202258064118813955 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3202258064118813955{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3202258064118813955(benchmark::State& state) {
  const auto inputs = input_args__3202258064118813955;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__3202258064118813955(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3202258064118813955(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__3202258064118813955(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__3202258064118813955);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__3202258064118813955
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__5947486737752699837 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      16 /* Input2 , idx = 2*/, \
      16 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5947486737752699837{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 16} /* Input2 */, 
      {"input[3]", 16} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__5947486737752699837(benchmark::State& state) {
  const auto inputs = input_args__5947486737752699837;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__5947486737752699837(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__5947486737752699837(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__5947486737752699837(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__5947486737752699837);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__5947486737752699837
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__779417257957364228 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__779417257957364228{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__779417257957364228(benchmark::State& state) {
  const auto inputs = input_args__779417257957364228;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__779417257957364228(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__779417257957364228(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__779417257957364228(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__779417257957364228);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__779417257957364228
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__5342318345713074683 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      16 /* Input2 , idx = 2*/, \
      16 /* Input3 , idx = 3*/, \
      2048 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5342318345713074683{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 16} /* Input2 */, 
      {"input[3]", 16} /* Input3 */, 
      {"filter_count", 2048} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5342318345713074683(benchmark::State& state) {
  const auto inputs = input_args__5342318345713074683;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__5342318345713074683(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5342318345713074683(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5342318345713074683(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__5342318345713074683);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__5342318345713074683
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__BatchSize_8__6585231747740372874 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      2048 /* Input2 , idx = 2*/, \
      0 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      1 /* Input5 , idx = 5*/, \
      1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6585231747740372874{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 2048} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_8__6585231747740372874(benchmark::State& state) {
  const auto inputs = input_args__6585231747740372874;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_8__6585231747740372874(benchmark::State& state) {
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_8__6585231747740372874(state);
  LAYER_CUBLAS_GEMM_FWD_Impl<__half>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_8__6585231747740372874(state);
}




BENCHMARK_CUDNN(LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_8__6585231747740372874)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__14165131680905115120 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14165131680905115120{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__14165131680905115120(benchmark::State& state) {
  const auto inputs = input_args__14165131680905115120;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__14165131680905115120(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__14165131680905115120(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__14165131680905115120(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__14165131680905115120);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__14165131680905115120
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__16834521993939166875 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16834521993939166875{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__16834521993939166875(benchmark::State& state) {
  const auto inputs = input_args__16834521993939166875;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__16834521993939166875(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__16834521993939166875(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__16834521993939166875(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__16834521993939166875);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__16834521993939166875
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6145172431909613477 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6145172431909613477{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6145172431909613477(benchmark::State& state) {
  const auto inputs = input_args__6145172431909613477;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6145172431909613477(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6145172431909613477(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6145172431909613477(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6145172431909613477);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6145172431909613477
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__17335742255016138094 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      32 /* Input2 , idx = 2*/, \
      32 /* Input3 , idx = 3*/, \
      128 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__17335742255016138094{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 32} /* Input2 */, 
      {"input[3]", 32} /* Input3 */, 
      {"filter_count", 128} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__17335742255016138094(benchmark::State& state) {
  const auto inputs = input_args__17335742255016138094;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__17335742255016138094(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__17335742255016138094(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__17335742255016138094(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__17335742255016138094);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__17335742255016138094
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__2484340154506822351 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2484340154506822351{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__2484340154506822351(benchmark::State& state) {
  const auto inputs = input_args__2484340154506822351;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__2484340154506822351(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__2484340154506822351(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_8__2484340154506822351(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_8__2484340154506822351);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_8__2484340154506822351
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__12628349584949314718 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      8 /* Input2 , idx = 2*/, \
      8 /* Input3 , idx = 3*/, \
      512 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__12628349584949314718{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 8} /* Input2 */, 
      {"input[3]", 8} /* Input3 */, 
      {"filter_count", 512} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__12628349584949314718(benchmark::State& state) {
  const auto inputs = input_args__12628349584949314718;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__12628349584949314718(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__12628349584949314718(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__12628349584949314718(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__12628349584949314718);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__12628349584949314718
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__16923332077046907038 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      32 /* Input2 , idx = 2*/, \
      32 /* Input3 , idx = 3*/, \
      1024 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16923332077046907038{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 32} /* Input2 */, 
      {"input[3]", 32} /* Input3 */, 
      {"filter_count", 1024} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16923332077046907038(benchmark::State& state) {
  const auto inputs = input_args__16923332077046907038;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__16923332077046907038(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16923332077046907038(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16923332077046907038(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__16923332077046907038);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__16923332077046907038
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__2127908169930784262 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      16 /* Input2 , idx = 2*/, \
      16 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__2127908169930784262{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 16} /* Input2 */, 
      {"input[3]", 16} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2127908169930784262(benchmark::State& state) {
  const auto inputs = input_args__2127908169930784262;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__2127908169930784262(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2127908169930784262(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2127908169930784262(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__2127908169930784262);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__2127908169930784262
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9993486293449302787 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9993486293449302787{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9993486293449302787(benchmark::State& state) {
  const auto inputs = input_args__9993486293449302787;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9993486293449302787(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9993486293449302787(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__9993486293449302787(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__9993486293449302787);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__9993486293449302787
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__4362675677570183311 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4362675677570183311{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__4362675677570183311(benchmark::State& state) {
  const auto inputs = input_args__4362675677570183311;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__4362675677570183311(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__4362675677570183311(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_8__4362675677570183311(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_8__4362675677570183311);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_8__4362675677570183311
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__7266591007224261639 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7266591007224261639{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7266591007224261639(benchmark::State& state) {
  const auto inputs = input_args__7266591007224261639;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__7266591007224261639(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7266591007224261639(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__7266591007224261639(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__7266591007224261639);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__7266591007224261639
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__3799368055063345020 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      8 /* Input2 , idx = 2*/, \
      8 /* Input3 , idx = 3*/, \
      512 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3799368055063345020{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 8} /* Input2 */, 
      {"input[3]", 8} /* Input3 */, 
      {"filter_count", 512} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__3799368055063345020(benchmark::State& state) {
  const auto inputs = input_args__3799368055063345020;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__3799368055063345020(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__3799368055063345020(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__3799368055063345020(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__3799368055063345020);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__3799368055063345020
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__18207713906421593022 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18207713906421593022{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18207713906421593022(benchmark::State& state) {
  const auto inputs = input_args__18207713906421593022;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__18207713906421593022(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18207713906421593022(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18207713906421593022(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__18207713906421593022);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__18207713906421593022
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__3510478059620511768 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      32 /* Input2 , idx = 2*/, \
      32 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      2 /* StrideHeight , idx = 9*/, \
      2 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3510478059620511768{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 32} /* Input2 */, 
      {"input[3]", 32} /* Input3 */, 
      {"filter_count", 256} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__3510478059620511768(benchmark::State& state) {
  const auto inputs = input_args__3510478059620511768;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__3510478059620511768(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__3510478059620511768(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__3510478059620511768(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__3510478059620511768);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__3510478059620511768
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__14220268815459192277 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1024 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14220268815459192277{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1024} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__14220268815459192277(benchmark::State& state) {
  const auto inputs = input_args__14220268815459192277;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__14220268815459192277(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__14220268815459192277(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__14220268815459192277(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__14220268815459192277);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__14220268815459192277
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__363039746017270363 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      16 /* Input2 , idx = 2*/, \
      16 /* Input3 , idx = 3*/, \
      1024 /* FilterCount , idx = 4*/, \
      1 /* FilterHeight , idx = 5*/, \
      1 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      1 /* Group , idx = 13*/, \
      8 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__363039746017270363{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 16} /* Input2 */, 
      {"input[3]", 16} /* Input3 */, 
      {"filter_count", 1024} /* FilterCount */, 
      {"filter_height", 1} /* FilterHeight */, 
      {"filter_width", 1} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 1} /* StrideHeight */, 
      {"stride_width", 1} /* StrideWidth */, 
      {"dilation_height", 1} /* DilationWidth */, 
      {"dilation_width", 1} /* DilationHeight */, 
      {"group", 1} /* Group */, 
      {"batch_size", 8} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__363039746017270363(benchmark::State& state) {
  const auto inputs = input_args__363039746017270363;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__363039746017270363(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__363039746017270363(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__363039746017270363(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__363039746017270363);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__363039746017270363
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__3504407958886656714 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3504407958886656714{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__3504407958886656714(benchmark::State& state) {
  const auto inputs = input_args__3504407958886656714;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__3504407958886656714(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__3504407958886656714(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_8__3504407958886656714(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_8__3504407958886656714);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_8__3504407958886656714
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__11714397604273432569 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      8 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11714397604273432569{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 8} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__11714397604273432569(benchmark::State& state) {
  const auto inputs = input_args__11714397604273432569;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__11714397604273432569(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__11714397604273432569(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_8__11714397604273432569(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_8__11714397604273432569);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_8__11714397604273432569
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING

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
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__3732618254575708558 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
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


static const std::map<std::string, double> input_args__3732618254575708558{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 3} /* Input1 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3732618254575708558(benchmark::State& state) {
  const auto inputs = input_args__3732618254575708558;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__3732618254575708558(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3732618254575708558(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__3732618254575708558(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__3732618254575708558);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__3732618254575708558
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__8864885730311586359 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8864885730311586359{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 3} /* Input1 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8864885730311586359(benchmark::State& state) {
  const auto inputs = input_args__8864885730311586359;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__8864885730311586359(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8864885730311586359(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8864885730311586359(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__8864885730311586359);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__8864885730311586359
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
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
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__16586756940129550562 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__16586756940129550562{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__16586756940129550562(benchmark::State& state) {
  const auto inputs = input_args__16586756940129550562;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__16586756940129550562(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__16586756940129550562(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__16586756940129550562(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__16586756940129550562);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__16586756940129550562
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__1197582205607560805 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1197582205607560805{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__1197582205607560805(benchmark::State& state) {
  const auto inputs = input_args__1197582205607560805;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__1197582205607560805(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__1197582205607560805(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__1197582205607560805(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__1197582205607560805);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__1197582205607560805
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__11330563493696431298 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__11330563493696431298{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__11330563493696431298(benchmark::State& state) {
  const auto inputs = input_args__11330563493696431298;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__11330563493696431298(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__11330563493696431298(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__11330563493696431298(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__11330563493696431298);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__11330563493696431298
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__10911326508273916914 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10911326508273916914{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10911326508273916914(benchmark::State& state) {
  const auto inputs = input_args__10911326508273916914;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__10911326508273916914(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10911326508273916914(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10911326508273916914(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__10911326508273916914);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__10911326508273916914
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__15498976832378506994 {

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


static const std::map<std::string, double> input_args__15498976832378506994{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__15498976832378506994(benchmark::State& state) {
  const auto inputs = input_args__15498976832378506994;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__15498976832378506994(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__15498976832378506994(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__15498976832378506994(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__15498976832378506994);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__15498976832378506994
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__2990590787082140115 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__2990590787082140115{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2990590787082140115(benchmark::State& state) {
  const auto inputs = input_args__2990590787082140115;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__2990590787082140115(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2990590787082140115(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__2990590787082140115(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__2990590787082140115);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__2990590787082140115
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__11868830246198092180 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11868830246198092180{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__11868830246198092180(benchmark::State& state) {
  const auto inputs = input_args__11868830246198092180;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__11868830246198092180(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__11868830246198092180(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__11868830246198092180(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__11868830246198092180);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__11868830246198092180
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__2898291905296387804 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__2898291905296387804{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__2898291905296387804(benchmark::State& state) {
  const auto inputs = input_args__2898291905296387804;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__2898291905296387804(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__2898291905296387804(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__2898291905296387804(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__2898291905296387804);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__2898291905296387804
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__11703657653377766248 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11703657653377766248{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__11703657653377766248(benchmark::State& state) {
  const auto inputs = input_args__11703657653377766248;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__11703657653377766248(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__11703657653377766248(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__11703657653377766248(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__11703657653377766248);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__11703657653377766248
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__18195350949932997856 {

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


static const std::map<std::string, double> input_args__18195350949932997856{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18195350949932997856(benchmark::State& state) {
  const auto inputs = input_args__18195350949932997856;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__18195350949932997856(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18195350949932997856(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__18195350949932997856(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__18195350949932997856);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__18195350949932997856
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__5111474789987879506 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__5111474789987879506{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5111474789987879506(benchmark::State& state) {
  const auto inputs = input_args__5111474789987879506;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__5111474789987879506(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5111474789987879506(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__5111474789987879506(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__5111474789987879506);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__5111474789987879506
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__5164154142188108383 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5164154142188108383{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5164154142188108383(benchmark::State& state) {
  const auto inputs = input_args__5164154142188108383;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__5164154142188108383(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5164154142188108383(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5164154142188108383(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__5164154142188108383);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__5164154142188108383
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
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
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6376283617246754842 {

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


static const std::map<std::string, double> input_args__6376283617246754842{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6376283617246754842(benchmark::State& state) {
  const auto inputs = input_args__6376283617246754842;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6376283617246754842(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6376283617246754842(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6376283617246754842(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6376283617246754842);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6376283617246754842
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4237286071394746390 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__4237286071394746390{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4237286071394746390(benchmark::State& state) {
  const auto inputs = input_args__4237286071394746390;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4237286071394746390(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4237286071394746390(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4237286071394746390(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4237286071394746390);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4237286071394746390
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__15308639350240167528 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15308639350240167528{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__15308639350240167528(benchmark::State& state) {
  const auto inputs = input_args__15308639350240167528;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__15308639350240167528(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__15308639350240167528(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__15308639350240167528(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__15308639350240167528);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__15308639350240167528
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4325002172440856322 {

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


static const std::map<std::string, double> input_args__4325002172440856322{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4325002172440856322(benchmark::State& state) {
  const auto inputs = input_args__4325002172440856322;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4325002172440856322(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4325002172440856322(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4325002172440856322(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4325002172440856322);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4325002172440856322
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__6804651212518380223 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__6804651212518380223{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__6804651212518380223(benchmark::State& state) {
  const auto inputs = input_args__6804651212518380223;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__6804651212518380223(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__6804651212518380223(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__6804651212518380223(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__6804651212518380223);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__6804651212518380223
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__14764123968533514227 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14764123968533514227{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__14764123968533514227(benchmark::State& state) {
  const auto inputs = input_args__14764123968533514227;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__14764123968533514227(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__14764123968533514227(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__14764123968533514227(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__14764123968533514227);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__14764123968533514227
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
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
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4657175182143262266 {

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


static const std::map<std::string, double> input_args__4657175182143262266{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4657175182143262266(benchmark::State& state) {
  const auto inputs = input_args__4657175182143262266;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4657175182143262266(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4657175182143262266(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__4657175182143262266(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__4657175182143262266);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__4657175182143262266
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__14488353707176141527 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__14488353707176141527{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__14488353707176141527(benchmark::State& state) {
  const auto inputs = input_args__14488353707176141527;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__14488353707176141527(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__14488353707176141527(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_8__14488353707176141527(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_8__14488353707176141527);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_8__14488353707176141527
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__5790364861209522343 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5790364861209522343{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__5790364861209522343(benchmark::State& state) {
  const auto inputs = input_args__5790364861209522343;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__5790364861209522343(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__5790364861209522343(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__5790364861209522343(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__5790364861209522343);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__5790364861209522343
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
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
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__10587946158739414626 {

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


static const std::map<std::string, double> input_args__10587946158739414626{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10587946158739414626(benchmark::State& state) {
  const auto inputs = input_args__10587946158739414626;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__10587946158739414626(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10587946158739414626(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10587946158739414626(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__10587946158739414626);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__10587946158739414626
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__11959607489743832112 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__11959607489743832112{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__11959607489743832112(benchmark::State& state) {
  const auto inputs = input_args__11959607489743832112;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__11959607489743832112(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__11959607489743832112(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__11959607489743832112(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__11959607489743832112);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__11959607489743832112
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__9632321760655801997 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__9632321760655801997{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__9632321760655801997(benchmark::State& state) {
  const auto inputs = input_args__9632321760655801997;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__9632321760655801997(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__9632321760655801997(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__9632321760655801997(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__9632321760655801997);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__9632321760655801997
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6892936211988733539 {

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


static const std::map<std::string, double> input_args__6892936211988733539{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6892936211988733539(benchmark::State& state) {
  const auto inputs = input_args__6892936211988733539;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6892936211988733539(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6892936211988733539(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__6892936211988733539(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__6892936211988733539);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__6892936211988733539
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__6521035011917344055 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__6521035011917344055{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__6521035011917344055(benchmark::State& state) {
  const auto inputs = input_args__6521035011917344055;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__6521035011917344055(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__6521035011917344055(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__6521035011917344055(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__6521035011917344055);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__6521035011917344055
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__4085561152599294723 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__4085561152599294723{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__4085561152599294723(benchmark::State& state) {
  const auto inputs = input_args__4085561152599294723;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__4085561152599294723(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__4085561152599294723(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__4085561152599294723(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__4085561152599294723);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__4085561152599294723
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
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
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__8055507269810990248 {

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


static const std::map<std::string, double> input_args__8055507269810990248{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__8055507269810990248(benchmark::State& state) {
  const auto inputs = input_args__8055507269810990248;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__8055507269810990248(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__8055507269810990248(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__8055507269810990248(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__8055507269810990248);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__8055507269810990248
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__774529104642672494 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__774529104642672494{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__774529104642672494(benchmark::State& state) {
  const auto inputs = input_args__774529104642672494;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__774529104642672494(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__774529104642672494(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__774529104642672494(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__774529104642672494);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__774529104642672494
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__7205997000058528660 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7205997000058528660{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__7205997000058528660(benchmark::State& state) {
  const auto inputs = input_args__7205997000058528660;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__7205997000058528660(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__7205997000058528660(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__7205997000058528660(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__7205997000058528660);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__7205997000058528660
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
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
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__5170622231487679397 {

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


static const std::map<std::string, double> input_args__5170622231487679397{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__5170622231487679397(benchmark::State& state) {
  const auto inputs = input_args__5170622231487679397;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__5170622231487679397(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__5170622231487679397(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__5170622231487679397(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__5170622231487679397);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__5170622231487679397
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__6010379474934408370 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__6010379474934408370{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__6010379474934408370(benchmark::State& state) {
  const auto inputs = input_args__6010379474934408370;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__6010379474934408370(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__6010379474934408370(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_8__6010379474934408370(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_8__6010379474934408370);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_8__6010379474934408370
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__6429951253365857154 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6429951253365857154{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__6429951253365857154(benchmark::State& state) {
  const auto inputs = input_args__6429951253365857154;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__6429951253365857154(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__6429951253365857154(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__6429951253365857154(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__6429951253365857154);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__6429951253365857154
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__10442967483988122233 {

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


static const std::map<std::string, double> input_args__10442967483988122233{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10442967483988122233(benchmark::State& state) {
  const auto inputs = input_args__10442967483988122233;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__10442967483988122233(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10442967483988122233(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__10442967483988122233(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__10442967483988122233);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__10442967483988122233
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4250871951219530486 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__4250871951219530486{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4250871951219530486(benchmark::State& state) {
  const auto inputs = input_args__4250871951219530486;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4250871951219530486(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4250871951219530486(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__4250871951219530486(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__4250871951219530486);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__4250871951219530486
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_8__6176721585804090977 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6176721585804090977{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_8__6176721585804090977(benchmark::State& state) {
  const auto inputs = input_args__6176721585804090977;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_8__6176721585804090977(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_8__6176721585804090977(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_8__6176721585804090977(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_8__6176721585804090977);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_8__6176721585804090977
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
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
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__11377463055325717682 {

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


static const std::map<std::string, double> input_args__11377463055325717682{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__11377463055325717682(benchmark::State& state) {
  const auto inputs = input_args__11377463055325717682;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__11377463055325717682(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__11377463055325717682(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__11377463055325717682(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__11377463055325717682);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__11377463055325717682
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__9594511528906652287 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__9594511528906652287{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__9594511528906652287(benchmark::State& state) {
  const auto inputs = input_args__9594511528906652287;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__9594511528906652287(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__9594511528906652287(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__9594511528906652287(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__9594511528906652287);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__9594511528906652287
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__2954364593587562632 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__2954364593587562632{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__2954364593587562632(benchmark::State& state) {
  const auto inputs = input_args__2954364593587562632;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__2954364593587562632(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__2954364593587562632(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__2954364593587562632(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__2954364593587562632);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__2954364593587562632
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__16442490364480761967 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__16442490364480761967{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16442490364480761967(benchmark::State& state) {
  const auto inputs = input_args__16442490364480761967;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__16442490364480761967(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16442490364480761967(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__16442490364480761967(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__16442490364480761967);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__16442490364480761967
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__8549304759314228515 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8549304759314228515{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8549304759314228515(benchmark::State& state) {
  const auto inputs = input_args__8549304759314228515;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__8549304759314228515(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8549304759314228515(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_8__8549304759314228515(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_8__8549304759314228515);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_8__8549304759314228515
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__9084278128970420640 {

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


static const std::map<std::string, double> input_args__9084278128970420640{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9084278128970420640(benchmark::State& state) {
  const auto inputs = input_args__9084278128970420640;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__9084278128970420640(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9084278128970420640(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_8__9084278128970420640(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_8__9084278128970420640);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_8__9084278128970420640
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__3912214074851846871 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__3912214074851846871{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__3912214074851846871(benchmark::State& state) {
  const auto inputs = input_args__3912214074851846871;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__3912214074851846871(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__3912214074851846871(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_8__3912214074851846871(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_8__3912214074851846871);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_8__3912214074851846871
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__6410187920346091053 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6410187920346091053{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__6410187920346091053(benchmark::State& state) {
  const auto inputs = input_args__6410187920346091053;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__6410187920346091053(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__6410187920346091053(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_8__6410187920346091053(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_8__6410187920346091053);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_8__6410187920346091053
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__8459813583316273447 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
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


static const std::map<std::string, double> input_args__8459813583316273447{{
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8459813583316273447(benchmark::State& state) {
  const auto inputs = input_args__8459813583316273447;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__8459813583316273447(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8459813583316273447(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_8__8459813583316273447(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_8__8459813583316273447);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_8__8459813583316273447
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__5372463815922384529 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5372463815922384529{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5372463815922384529(benchmark::State& state) {
  const auto inputs = input_args__5372463815922384529;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__5372463815922384529(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5372463815922384529(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_8__5372463815922384529(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_8__5372463815922384529);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_8__5372463815922384529
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__17185479835599155283 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__17185479835599155283{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__17185479835599155283(benchmark::State& state) {
  const auto inputs = input_args__17185479835599155283;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__17185479835599155283(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__17185479835599155283(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__17185479835599155283(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__17185479835599155283);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__17185479835599155283
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__10138337408293297767 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10138337408293297767{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10138337408293297767(benchmark::State& state) {
  const auto inputs = input_args__10138337408293297767;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__10138337408293297767(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10138337408293297767(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__10138337408293297767(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__10138337408293297767);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__10138337408293297767
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__5079937567656954261 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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


static const std::map<std::string, double> input_args__5079937567656954261{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5079937567656954261(benchmark::State& state) {
  const auto inputs = input_args__5079937567656954261;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__5079937567656954261(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5079937567656954261(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_8__5079937567656954261(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_8__5079937567656954261);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_8__5079937567656954261
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__2644205336121845665 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      8 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
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
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__2644205336121845665{{
      {"input[0]", 8} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__2644205336121845665(benchmark::State& state) {
  const auto inputs = input_args__2644205336121845665;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__2644205336121845665(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__2644205336121845665(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_8__2644205336121845665(state);
  }
  
  #endif //  CUDNN_SUPPORTS_TENSOR_OPS
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_8__2644205336121845665);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_8__2644205336121845665
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0

#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__1843146210790374264 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      1 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      2 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1843146210790374264{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__1843146210790374264(benchmark::State& state) {
  const auto inputs = input_args__1843146210790374264;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_2__1843146210790374264(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__1843146210790374264(state);
    LAYER_CUDNN_POOLING_FWD_Impl<__half, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__1843146210790374264(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_2__1843146210790374264);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__1843146210790374264
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__16282506575751354005 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16282506575751354005{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__16282506575751354005(benchmark::State& state) {
  const auto inputs = input_args__16282506575751354005;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__16282506575751354005(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__16282506575751354005(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__16282506575751354005(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__16282506575751354005);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__16282506575751354005
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__5889151137839384926 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5889151137839384926{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5889151137839384926(benchmark::State& state) {
  const auto inputs = input_args__5889151137839384926;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__5889151137839384926(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5889151137839384926(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5889151137839384926(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__5889151137839384926);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__5889151137839384926
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3814746841111338822 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3814746841111338822{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3814746841111338822(benchmark::State& state) {
  const auto inputs = input_args__3814746841111338822;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__3814746841111338822(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3814746841111338822(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3814746841111338822(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__3814746841111338822);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3814746841111338822
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__89627295906780372 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__89627295906780372{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__89627295906780372(benchmark::State& state) {
  const auto inputs = input_args__89627295906780372;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__89627295906780372(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__89627295906780372(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__89627295906780372(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__89627295906780372);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__89627295906780372
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__9937574821414352343 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9937574821414352343{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9937574821414352343(benchmark::State& state) {
  const auto inputs = input_args__9937574821414352343;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__9937574821414352343(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9937574821414352343(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9937574821414352343(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__9937574821414352343);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__9937574821414352343
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__6236170619363862634 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6236170619363862634{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__6236170619363862634(benchmark::State& state) {
  const auto inputs = input_args__6236170619363862634;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__6236170619363862634(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__6236170619363862634(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__6236170619363862634(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__6236170619363862634);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__6236170619363862634
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__7881150944354432580 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7881150944354432580{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7881150944354432580(benchmark::State& state) {
  const auto inputs = input_args__7881150944354432580;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__7881150944354432580(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7881150944354432580(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7881150944354432580(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__7881150944354432580);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__7881150944354432580
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__16539550092941432647 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16539550092941432647{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16539550092941432647(benchmark::State& state) {
  const auto inputs = input_args__16539550092941432647;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__16539550092941432647(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16539550092941432647(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16539550092941432647(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__16539550092941432647);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__16539550092941432647
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__16152625966938290057 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16152625966938290057{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__16152625966938290057(benchmark::State& state) {
  const auto inputs = input_args__16152625966938290057;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__16152625966938290057(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__16152625966938290057(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__16152625966938290057(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__16152625966938290057);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__16152625966938290057
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__8391465597707106997 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8391465597707106997{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__8391465597707106997(benchmark::State& state) {
  const auto inputs = input_args__8391465597707106997;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__8391465597707106997(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__8391465597707106997(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__8391465597707106997(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__8391465597707106997);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__8391465597707106997
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__7669167158694434672 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7669167158694434672{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7669167158694434672(benchmark::State& state) {
  const auto inputs = input_args__7669167158694434672;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__7669167158694434672(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7669167158694434672(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__7669167158694434672(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__7669167158694434672);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__7669167158694434672
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__16337206561105884787 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16337206561105884787{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16337206561105884787(benchmark::State& state) {
  const auto inputs = input_args__16337206561105884787;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__16337206561105884787(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16337206561105884787(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__16337206561105884787(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__16337206561105884787);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__16337206561105884787
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__11243507372183143671 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11243507372183143671{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__11243507372183143671(benchmark::State& state) {
  const auto inputs = input_args__11243507372183143671;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__11243507372183143671(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__11243507372183143671(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__11243507372183143671(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__11243507372183143671);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__11243507372183143671
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__1504138815747466740 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1504138815747466740{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__1504138815747466740(benchmark::State& state) {
  const auto inputs = input_args__1504138815747466740;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__1504138815747466740(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__1504138815747466740(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__1504138815747466740(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__1504138815747466740);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__1504138815747466740
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__582577114306830428 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__582577114306830428{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__582577114306830428(benchmark::State& state) {
  const auto inputs = input_args__582577114306830428;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__582577114306830428(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__582577114306830428(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__582577114306830428(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__582577114306830428);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__582577114306830428
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__9278130904821170527 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9278130904821170527{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9278130904821170527(benchmark::State& state) {
  const auto inputs = input_args__9278130904821170527;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__9278130904821170527(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9278130904821170527(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__9278130904821170527(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__9278130904821170527);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__9278130904821170527
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__17895129860916377009 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17895129860916377009{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__17895129860916377009(benchmark::State& state) {
  const auto inputs = input_args__17895129860916377009;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__17895129860916377009(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__17895129860916377009(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__17895129860916377009(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__17895129860916377009);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__17895129860916377009
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__26631721840597580 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__26631721840597580{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__26631721840597580(benchmark::State& state) {
  const auto inputs = input_args__26631721840597580;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__26631721840597580(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__26631721840597580(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__26631721840597580(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__26631721840597580);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__26631721840597580
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__16762144943263982825 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16762144943263982825{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16762144943263982825(benchmark::State& state) {
  const auto inputs = input_args__16762144943263982825;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__16762144943263982825(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16762144943263982825(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16762144943263982825(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__16762144943263982825);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__16762144943263982825
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__17300768728678995562 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17300768728678995562{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__17300768728678995562(benchmark::State& state) {
  const auto inputs = input_args__17300768728678995562;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__17300768728678995562(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__17300768728678995562(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__17300768728678995562(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__17300768728678995562);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__17300768728678995562
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__11737032048271049813 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11737032048271049813{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11737032048271049813(benchmark::State& state) {
  const auto inputs = input_args__11737032048271049813;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__11737032048271049813(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11737032048271049813(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11737032048271049813(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__11737032048271049813);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__11737032048271049813
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__13767831013139190417 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13767831013139190417{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__13767831013139190417(benchmark::State& state) {
  const auto inputs = input_args__13767831013139190417;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__13767831013139190417(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__13767831013139190417(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__13767831013139190417(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__13767831013139190417);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__13767831013139190417
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__13788804002330378090 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13788804002330378090{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__13788804002330378090(benchmark::State& state) {
  const auto inputs = input_args__13788804002330378090;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__13788804002330378090(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__13788804002330378090(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__13788804002330378090(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__13788804002330378090);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__13788804002330378090
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__16212604583979906920 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16212604583979906920{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__16212604583979906920(benchmark::State& state) {
  const auto inputs = input_args__16212604583979906920;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__16212604583979906920(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__16212604583979906920(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__16212604583979906920(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__16212604583979906920);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__16212604583979906920
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__15341568836411737947 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15341568836411737947{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15341568836411737947(benchmark::State& state) {
  const auto inputs = input_args__15341568836411737947;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__15341568836411737947(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15341568836411737947(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15341568836411737947(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__15341568836411737947);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__15341568836411737947
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__10401506962985331994 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10401506962985331994{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__10401506962985331994(benchmark::State& state) {
  const auto inputs = input_args__10401506962985331994;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__10401506962985331994(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__10401506962985331994(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__10401506962985331994(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__10401506962985331994);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__10401506962985331994
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__8355125013597722013 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8355125013597722013{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__8355125013597722013(benchmark::State& state) {
  const auto inputs = input_args__8355125013597722013;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__8355125013597722013(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__8355125013597722013(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__8355125013597722013(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__8355125013597722013);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__8355125013597722013
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3104671194380341306 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3104671194380341306{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3104671194380341306(benchmark::State& state) {
  const auto inputs = input_args__3104671194380341306;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3104671194380341306(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3104671194380341306(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3104671194380341306(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3104671194380341306);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3104671194380341306
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__7242119473403249928 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7242119473403249928{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__7242119473403249928(benchmark::State& state) {
  const auto inputs = input_args__7242119473403249928;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__7242119473403249928(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__7242119473403249928(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__7242119473403249928(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__7242119473403249928);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__7242119473403249928
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__10389292230482129060 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10389292230482129060{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__10389292230482129060(benchmark::State& state) {
  const auto inputs = input_args__10389292230482129060;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__10389292230482129060(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__10389292230482129060(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__10389292230482129060(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__10389292230482129060);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__10389292230482129060
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__14771142364233918832 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14771142364233918832{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__14771142364233918832(benchmark::State& state) {
  const auto inputs = input_args__14771142364233918832;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__14771142364233918832(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__14771142364233918832(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__14771142364233918832(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__14771142364233918832);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__14771142364233918832
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__4911900602416859251 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4911900602416859251{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__4911900602416859251(benchmark::State& state) {
  const auto inputs = input_args__4911900602416859251;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__4911900602416859251(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__4911900602416859251(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__4911900602416859251(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__4911900602416859251);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__4911900602416859251
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__4373097215246400669 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4373097215246400669{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__4373097215246400669(benchmark::State& state) {
  const auto inputs = input_args__4373097215246400669;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__4373097215246400669(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__4373097215246400669(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_2__4373097215246400669(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_2__4373097215246400669);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_2__4373097215246400669
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__BatchSize_2__16156577666090785135 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      2048 /* Input2 , idx = 2*/, \
      0 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      1 /* Input5 , idx = 5*/, \
      1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16156577666090785135{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 2048} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_2__16156577666090785135(benchmark::State& state) {
  const auto inputs = input_args__16156577666090785135;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_2__16156577666090785135(benchmark::State& state) {
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_2__16156577666090785135(state);
  LAYER_CUBLAS_GEMM_FWD_Impl<__half>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_2__16156577666090785135(state);
}




BENCHMARK_CUDNN(LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_2__16156577666090785135)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__10858479706910680775 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10858479706910680775{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10858479706910680775(benchmark::State& state) {
  const auto inputs = input_args__10858479706910680775;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__10858479706910680775(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10858479706910680775(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10858479706910680775(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__10858479706910680775);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__10858479706910680775
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__5620986234592619746 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5620986234592619746{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5620986234592619746(benchmark::State& state) {
  const auto inputs = input_args__5620986234592619746;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__5620986234592619746(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5620986234592619746(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5620986234592619746(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__5620986234592619746);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__5620986234592619746
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__4076618591795955892 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4076618591795955892{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__4076618591795955892(benchmark::State& state) {
  const auto inputs = input_args__4076618591795955892;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__4076618591795955892(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__4076618591795955892(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__4076618591795955892(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__4076618591795955892);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__4076618591795955892
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__12701346291485452727 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12701346291485452727{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__12701346291485452727(benchmark::State& state) {
  const auto inputs = input_args__12701346291485452727;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__12701346291485452727(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__12701346291485452727(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__12701346291485452727(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__12701346291485452727);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__12701346291485452727
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3626496808172121491 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3626496808172121491{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3626496808172121491(benchmark::State& state) {
  const auto inputs = input_args__3626496808172121491;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3626496808172121491(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3626496808172121491(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3626496808172121491(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3626496808172121491);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3626496808172121491
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__1642253536799466404 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1642253536799466404{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__1642253536799466404(benchmark::State& state) {
  const auto inputs = input_args__1642253536799466404;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__1642253536799466404(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__1642253536799466404(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__1642253536799466404(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__1642253536799466404);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__1642253536799466404
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__6154309321816697223 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6154309321816697223{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__6154309321816697223(benchmark::State& state) {
  const auto inputs = input_args__6154309321816697223;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__6154309321816697223(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__6154309321816697223(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__6154309321816697223(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__6154309321816697223);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__6154309321816697223
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3980383954005987408 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1024 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3980383954005987408{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1024} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3980383954005987408(benchmark::State& state) {
  const auto inputs = input_args__3980383954005987408;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3980383954005987408(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3980383954005987408(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__3980383954005987408(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__3980383954005987408);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__3980383954005987408
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__3534347029025400864 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3534347029025400864{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__3534347029025400864(benchmark::State& state) {
  const auto inputs = input_args__3534347029025400864;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__3534347029025400864(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__3534347029025400864(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__3534347029025400864(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__3534347029025400864);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__3534347029025400864
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__572947807899115791 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__572947807899115791{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__572947807899115791(benchmark::State& state) {
  const auto inputs = input_args__572947807899115791;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__572947807899115791(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__572947807899115791(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__572947807899115791(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__572947807899115791);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__572947807899115791
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__5698833811316599431 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5698833811316599431{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__5698833811316599431(benchmark::State& state) {
  const auto inputs = input_args__5698833811316599431;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__5698833811316599431(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__5698833811316599431(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__5698833811316599431(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__5698833811316599431);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__5698833811316599431
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__14393894747053067140 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14393894747053067140{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__14393894747053067140(benchmark::State& state) {
  const auto inputs = input_args__14393894747053067140;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__14393894747053067140(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__14393894747053067140(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__14393894747053067140(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__14393894747053067140);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__14393894747053067140
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__7800354888237006173 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7800354888237006173{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__7800354888237006173(benchmark::State& state) {
  const auto inputs = input_args__7800354888237006173;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__7800354888237006173(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__7800354888237006173(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__7800354888237006173(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__7800354888237006173);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__7800354888237006173
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__11360564034770670530 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11360564034770670530{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__11360564034770670530(benchmark::State& state) {
  const auto inputs = input_args__11360564034770670530;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__11360564034770670530(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__11360564034770670530(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__11360564034770670530(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__11360564034770670530);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__11360564034770670530
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_2__1634197824869498431 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1634197824869498431{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__1634197824869498431(benchmark::State& state) {
  const auto inputs = input_args__1634197824869498431;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_2__1634197824869498431(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__1634197824869498431(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__1634197824869498431(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_2__1634197824869498431);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_2__1634197824869498431
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__15431161846717647430 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15431161846717647430{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15431161846717647430(benchmark::State& state) {
  const auto inputs = input_args__15431161846717647430;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__15431161846717647430(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15431161846717647430(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_2__15431161846717647430(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_2__15431161846717647430);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_2__15431161846717647430
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__14755671911250394336 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14755671911250394336{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__14755671911250394336(benchmark::State& state) {
  const auto inputs = input_args__14755671911250394336;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__14755671911250394336(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__14755671911250394336(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__14755671911250394336(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__14755671911250394336);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__14755671911250394336
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__2932803448485446678 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2932803448485446678{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2932803448485446678(benchmark::State& state) {
  const auto inputs = input_args__2932803448485446678;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__2932803448485446678(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2932803448485446678(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2932803448485446678(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__2932803448485446678);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__2932803448485446678
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__11147479145084214855 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11147479145084214855{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11147479145084214855(benchmark::State& state) {
  const auto inputs = input_args__11147479145084214855;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__11147479145084214855(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11147479145084214855(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__11147479145084214855(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__11147479145084214855);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__11147479145084214855
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__9745987585524041859 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__9745987585524041859{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__9745987585524041859(benchmark::State& state) {
  const auto inputs = input_args__9745987585524041859;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__9745987585524041859(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__9745987585524041859(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__9745987585524041859(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__9745987585524041859);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__9745987585524041859
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__2829732074037598930 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2829732074037598930{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2829732074037598930(benchmark::State& state) {
  const auto inputs = input_args__2829732074037598930;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__2829732074037598930(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2829732074037598930(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__2829732074037598930(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__2829732074037598930);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__2829732074037598930
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__15979293165035343330 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15979293165035343330{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__15979293165035343330(benchmark::State& state) {
  const auto inputs = input_args__15979293165035343330;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__15979293165035343330(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__15979293165035343330(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__15979293165035343330(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__15979293165035343330);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__15979293165035343330
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__18024538710159081328 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__18024538710159081328{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__18024538710159081328(benchmark::State& state) {
  const auto inputs = input_args__18024538710159081328;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__18024538710159081328(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__18024538710159081328(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_2__18024538710159081328(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_2__18024538710159081328);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_2__18024538710159081328
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__15314701283809764400 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15314701283809764400{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__15314701283809764400(benchmark::State& state) {
  const auto inputs = input_args__15314701283809764400;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__15314701283809764400(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__15314701283809764400(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__15314701283809764400(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__15314701283809764400);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__15314701283809764400
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__10456246389906793443 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10456246389906793443{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__10456246389906793443(benchmark::State& state) {
  const auto inputs = input_args__10456246389906793443;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__10456246389906793443(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__10456246389906793443(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__10456246389906793443(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__10456246389906793443);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__10456246389906793443
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__13270744828966601094 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13270744828966601094{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__13270744828966601094(benchmark::State& state) {
  const auto inputs = input_args__13270744828966601094;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__13270744828966601094(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__13270744828966601094(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__13270744828966601094(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__13270744828966601094);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__13270744828966601094
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__11596198000963992557 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11596198000963992557{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__11596198000963992557(benchmark::State& state) {
  const auto inputs = input_args__11596198000963992557;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__11596198000963992557(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__11596198000963992557(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__11596198000963992557(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__11596198000963992557);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__11596198000963992557
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__1008173631723617624 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1008173631723617624{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__1008173631723617624(benchmark::State& state) {
  const auto inputs = input_args__1008173631723617624;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__1008173631723617624(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__1008173631723617624(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__1008173631723617624(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__1008173631723617624);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__1008173631723617624
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__6365483407406165156 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6365483407406165156{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__6365483407406165156(benchmark::State& state) {
  const auto inputs = input_args__6365483407406165156;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__6365483407406165156(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__6365483407406165156(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__6365483407406165156(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__6365483407406165156);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__6365483407406165156
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__1972051580241474864 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      2048 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1972051580241474864{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 2048} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__1972051580241474864(benchmark::State& state) {
  const auto inputs = input_args__1972051580241474864;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__1972051580241474864(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__1972051580241474864(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__1972051580241474864(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__1972051580241474864);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__1972051580241474864
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__9940708882498105899 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__9940708882498105899{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__9940708882498105899(benchmark::State& state) {
  const auto inputs = input_args__9940708882498105899;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__9940708882498105899(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__9940708882498105899(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_2__9940708882498105899(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_2__9940708882498105899);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_2__9940708882498105899
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__392426913178776639 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__392426913178776639{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__392426913178776639(benchmark::State& state) {
  const auto inputs = input_args__392426913178776639;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__392426913178776639(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__392426913178776639(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__392426913178776639(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__392426913178776639);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__392426913178776639
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__321446366007769006 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__321446366007769006{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__321446366007769006(benchmark::State& state) {
  const auto inputs = input_args__321446366007769006;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__321446366007769006(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__321446366007769006(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__321446366007769006(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__321446366007769006);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__321446366007769006
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__4457267625156160462 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4457267625156160462{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__4457267625156160462(benchmark::State& state) {
  const auto inputs = input_args__4457267625156160462;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__4457267625156160462(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__4457267625156160462(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__4457267625156160462(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__4457267625156160462);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__4457267625156160462
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__1277591215860024184 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1277591215860024184{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__1277591215860024184(benchmark::State& state) {
  const auto inputs = input_args__1277591215860024184;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__1277591215860024184(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__1277591215860024184(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_2__1277591215860024184(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_2__1277591215860024184);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_2__1277591215860024184
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__11055732748475458171 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11055732748475458171{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__11055732748475458171(benchmark::State& state) {
  const auto inputs = input_args__11055732748475458171;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__11055732748475458171(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__11055732748475458171(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_2__11055732748475458171(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_2__11055732748475458171);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_2__11055732748475458171
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__12919607006338709674 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12919607006338709674{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__12919607006338709674(benchmark::State& state) {
  const auto inputs = input_args__12919607006338709674;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__12919607006338709674(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__12919607006338709674(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__12919607006338709674(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__12919607006338709674);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__12919607006338709674
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__10117870974633743400 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10117870974633743400{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10117870974633743400(benchmark::State& state) {
  const auto inputs = input_args__10117870974633743400;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__10117870974633743400(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10117870974633743400(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_2__10117870974633743400(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_2__10117870974633743400);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_2__10117870974633743400
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__16840028193500049748 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16840028193500049748{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16840028193500049748(benchmark::State& state) {
  const auto inputs = input_args__16840028193500049748;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__16840028193500049748(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16840028193500049748(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_2__16840028193500049748(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_2__16840028193500049748);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_2__16840028193500049748
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__6634209537304455811 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6634209537304455811{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__6634209537304455811(benchmark::State& state) {
  const auto inputs = input_args__6634209537304455811;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__6634209537304455811(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__6634209537304455811(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__6634209537304455811(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__6634209537304455811);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__6634209537304455811
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__2046605619055912169 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__2046605619055912169{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__2046605619055912169(benchmark::State& state) {
  const auto inputs = input_args__2046605619055912169;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__2046605619055912169(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__2046605619055912169(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__2046605619055912169(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__2046605619055912169);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__2046605619055912169
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__1823948898471426309 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1823948898471426309{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__1823948898471426309(benchmark::State& state) {
  const auto inputs = input_args__1823948898471426309;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__1823948898471426309(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__1823948898471426309(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__1823948898471426309(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__1823948898471426309);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__1823948898471426309
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3269583333310659682 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3269583333310659682{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3269583333310659682(benchmark::State& state) {
  const auto inputs = input_args__3269583333310659682;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__3269583333310659682(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3269583333310659682(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3269583333310659682(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_2__3269583333310659682);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3269583333310659682
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__17601304656741146878 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17601304656741146878{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__17601304656741146878(benchmark::State& state) {
  const auto inputs = input_args__17601304656741146878;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__17601304656741146878(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__17601304656741146878(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__17601304656741146878(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_2__17601304656741146878);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__17601304656741146878
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__10489428168731541726 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10489428168731541726{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__10489428168731541726(benchmark::State& state) {
  const auto inputs = input_args__10489428168731541726;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__10489428168731541726(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__10489428168731541726(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_2__10489428168731541726(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_2__10489428168731541726);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_2__10489428168731541726
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_2__7352324884053860026 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7352324884053860026{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__7352324884053860026(benchmark::State& state) {
  const auto inputs = input_args__7352324884053860026;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_2__7352324884053860026(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__7352324884053860026(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_2__7352324884053860026(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_2__7352324884053860026);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_2__7352324884053860026
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__7056820457154697418 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7056820457154697418{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__7056820457154697418(benchmark::State& state) {
  const auto inputs = input_args__7056820457154697418;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__7056820457154697418(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__7056820457154697418(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__7056820457154697418(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__7056820457154697418);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__7056820457154697418
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__5249500053501426351 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5249500053501426351{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5249500053501426351(benchmark::State& state) {
  const auto inputs = input_args__5249500053501426351;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__5249500053501426351(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5249500053501426351(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_2__5249500053501426351(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_2__5249500053501426351);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_2__5249500053501426351
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__15145631700600366233 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15145631700600366233{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__15145631700600366233(benchmark::State& state) {
  const auto inputs = input_args__15145631700600366233;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__15145631700600366233(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__15145631700600366233(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_2__15145631700600366233(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_2__15145631700600366233);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_2__15145631700600366233
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__15499385383020525941 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15499385383020525941{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__15499385383020525941(benchmark::State& state) {
  const auto inputs = input_args__15499385383020525941;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__15499385383020525941(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__15499385383020525941(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_2__15499385383020525941(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_2__15499385383020525941);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_2__15499385383020525941
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2

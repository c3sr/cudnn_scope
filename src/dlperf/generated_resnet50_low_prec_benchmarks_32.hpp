#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__7775878044185740217 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7775878044185740217{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__7775878044185740217(benchmark::State& state) {
  const auto inputs = input_args__7775878044185740217;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__7775878044185740217(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__7775878044185740217(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__7775878044185740217(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__7775878044185740217);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__7775878044185740217
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__3627344119559258253 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3627344119559258253{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__3627344119559258253(benchmark::State& state) {
  const auto inputs = input_args__3627344119559258253;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__3627344119559258253(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__3627344119559258253(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__3627344119559258253(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__3627344119559258253);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__3627344119559258253
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__15502269001705697265 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15502269001705697265{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__15502269001705697265(benchmark::State& state) {
  const auto inputs = input_args__15502269001705697265;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__15502269001705697265(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__15502269001705697265(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__15502269001705697265(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__15502269001705697265);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__15502269001705697265
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__8278812176109199559 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8278812176109199559{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__8278812176109199559(benchmark::State& state) {
  const auto inputs = input_args__8278812176109199559;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__8278812176109199559(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__8278812176109199559(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__8278812176109199559(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__8278812176109199559);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__8278812176109199559
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__4075642497639528124 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4075642497639528124{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__4075642497639528124(benchmark::State& state) {
  const auto inputs = input_args__4075642497639528124;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__4075642497639528124(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__4075642497639528124(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__4075642497639528124(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__4075642497639528124);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__4075642497639528124
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__6130851535102693826 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6130851535102693826{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__6130851535102693826(benchmark::State& state) {
  const auto inputs = input_args__6130851535102693826;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__6130851535102693826(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__6130851535102693826(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__6130851535102693826(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__6130851535102693826);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__6130851535102693826
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__14856908601492901007 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14856908601492901007{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__14856908601492901007(benchmark::State& state) {
  const auto inputs = input_args__14856908601492901007;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__14856908601492901007(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__14856908601492901007(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__14856908601492901007(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__14856908601492901007);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__14856908601492901007
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__9531304724067703540 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9531304724067703540{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__9531304724067703540(benchmark::State& state) {
  const auto inputs = input_args__9531304724067703540;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__9531304724067703540(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__9531304724067703540(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__9531304724067703540(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__9531304724067703540);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__9531304724067703540
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_32__4533259076117173143 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      1 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      32 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4533259076117173143{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_32__4533259076117173143(benchmark::State& state) {
  const auto inputs = input_args__4533259076117173143;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_32__4533259076117173143(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_32__4533259076117173143(state);
    LAYER_CUDNN_POOLING_FWD_Impl<__half, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_32__4533259076117173143(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_32__4533259076117173143);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_32__4533259076117173143
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__2199439482817643333 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2199439482817643333{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2199439482817643333(benchmark::State& state) {
  const auto inputs = input_args__2199439482817643333;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__2199439482817643333(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2199439482817643333(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2199439482817643333(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__2199439482817643333);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__2199439482817643333
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__838269448742565643 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__838269448742565643{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__838269448742565643(benchmark::State& state) {
  const auto inputs = input_args__838269448742565643;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__838269448742565643(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__838269448742565643(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__838269448742565643(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__838269448742565643);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__838269448742565643
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__13758015389636537807 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13758015389636537807{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__13758015389636537807(benchmark::State& state) {
  const auto inputs = input_args__13758015389636537807;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__13758015389636537807(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__13758015389636537807(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__13758015389636537807(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__13758015389636537807);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__13758015389636537807
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__14236164353165190578 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14236164353165190578{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__14236164353165190578(benchmark::State& state) {
  const auto inputs = input_args__14236164353165190578;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__14236164353165190578(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__14236164353165190578(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__14236164353165190578(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__14236164353165190578);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__14236164353165190578
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__1916338834342405283 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1916338834342405283{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__1916338834342405283(benchmark::State& state) {
  const auto inputs = input_args__1916338834342405283;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__1916338834342405283(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__1916338834342405283(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__1916338834342405283(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__1916338834342405283);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__1916338834342405283
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__5833178058393334488 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5833178058393334488{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5833178058393334488(benchmark::State& state) {
  const auto inputs = input_args__5833178058393334488;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__5833178058393334488(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5833178058393334488(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5833178058393334488(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__5833178058393334488);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__5833178058393334488
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__11781959687368464375 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11781959687368464375{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__11781959687368464375(benchmark::State& state) {
  const auto inputs = input_args__11781959687368464375;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__11781959687368464375(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__11781959687368464375(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__11781959687368464375(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__11781959687368464375);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__11781959687368464375
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__16855360851789545868 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16855360851789545868{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16855360851789545868(benchmark::State& state) {
  const auto inputs = input_args__16855360851789545868;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__16855360851789545868(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16855360851789545868(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16855360851789545868(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__16855360851789545868);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__16855360851789545868
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__18073761722069980106 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__18073761722069980106{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__18073761722069980106(benchmark::State& state) {
  const auto inputs = input_args__18073761722069980106;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__18073761722069980106(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__18073761722069980106(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__18073761722069980106(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__18073761722069980106);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__18073761722069980106
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__102854351462112874 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__102854351462112874{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__102854351462112874(benchmark::State& state) {
  const auto inputs = input_args__102854351462112874;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__102854351462112874(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__102854351462112874(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__102854351462112874(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__102854351462112874);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__102854351462112874
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__13442301249643377801 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13442301249643377801{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13442301249643377801(benchmark::State& state) {
  const auto inputs = input_args__13442301249643377801;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__13442301249643377801(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13442301249643377801(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13442301249643377801(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__13442301249643377801);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__13442301249643377801
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__8939760817463535564 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8939760817463535564{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__8939760817463535564(benchmark::State& state) {
  const auto inputs = input_args__8939760817463535564;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__8939760817463535564(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__8939760817463535564(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__8939760817463535564(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__8939760817463535564);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__8939760817463535564
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__5562003379773445646 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5562003379773445646{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__5562003379773445646(benchmark::State& state) {
  const auto inputs = input_args__5562003379773445646;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__5562003379773445646(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__5562003379773445646(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__5562003379773445646(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__5562003379773445646);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__5562003379773445646
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__13154939061043141550 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13154939061043141550{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__13154939061043141550(benchmark::State& state) {
  const auto inputs = input_args__13154939061043141550;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__13154939061043141550(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__13154939061043141550(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__13154939061043141550(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__13154939061043141550);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__13154939061043141550
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__16223873654537319576 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16223873654537319576{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__16223873654537319576(benchmark::State& state) {
  const auto inputs = input_args__16223873654537319576;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__16223873654537319576(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__16223873654537319576(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__16223873654537319576(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__16223873654537319576);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__16223873654537319576
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__13376775725398321751 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13376775725398321751{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__13376775725398321751(benchmark::State& state) {
  const auto inputs = input_args__13376775725398321751;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__13376775725398321751(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__13376775725398321751(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__13376775725398321751(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__13376775725398321751);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__13376775725398321751
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__12001942720075412857 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      2048 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12001942720075412857{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 2048} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12001942720075412857(benchmark::State& state) {
  const auto inputs = input_args__12001942720075412857;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__12001942720075412857(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12001942720075412857(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12001942720075412857(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__12001942720075412857);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__12001942720075412857
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__8837318308046846337 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8837318308046846337{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8837318308046846337(benchmark::State& state) {
  const auto inputs = input_args__8837318308046846337;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__8837318308046846337(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8837318308046846337(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8837318308046846337(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__8837318308046846337);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__8837318308046846337
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__3644933935944624745 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3644933935944624745{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__3644933935944624745(benchmark::State& state) {
  const auto inputs = input_args__3644933935944624745;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__3644933935944624745(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__3644933935944624745(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__3644933935944624745(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__3644933935944624745);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__3644933935944624745
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__2340083525301539134 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2340083525301539134{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__2340083525301539134(benchmark::State& state) {
  const auto inputs = input_args__2340083525301539134;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__2340083525301539134(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__2340083525301539134(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__2340083525301539134(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__2340083525301539134);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__2340083525301539134
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__9332163173461072348 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9332163173461072348{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9332163173461072348(benchmark::State& state) {
  const auto inputs = input_args__9332163173461072348;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__9332163173461072348(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9332163173461072348(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9332163173461072348(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__9332163173461072348);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__9332163173461072348
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__4185866925177589765 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__4185866925177589765{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__4185866925177589765(benchmark::State& state) {
  const auto inputs = input_args__4185866925177589765;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__4185866925177589765(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__4185866925177589765(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__4185866925177589765(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__4185866925177589765);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__4185866925177589765
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__11780059200872913080 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11780059200872913080{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__11780059200872913080(benchmark::State& state) {
  const auto inputs = input_args__11780059200872913080;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__11780059200872913080(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__11780059200872913080(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__11780059200872913080(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__11780059200872913080);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__11780059200872913080
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__BatchSize_32__11956895750046217564 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      2048 /* Input2 , idx = 2*/, \
      0 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      1 /* Input5 , idx = 5*/, \
      1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11956895750046217564{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 2048} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_32__11956895750046217564(benchmark::State& state) {
  const auto inputs = input_args__11956895750046217564;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_32__11956895750046217564(benchmark::State& state) {
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_32__11956895750046217564(state);
  LAYER_CUBLAS_GEMM_FWD_Impl<__half>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_32__11956895750046217564(state);
}




BENCHMARK_CUDNN(LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_32__11956895750046217564)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__3934074999474201260 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3934074999474201260{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__3934074999474201260(benchmark::State& state) {
  const auto inputs = input_args__3934074999474201260;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__3934074999474201260(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__3934074999474201260(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__3934074999474201260(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__3934074999474201260);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__3934074999474201260
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__12678942444603697681 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__12678942444603697681{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__12678942444603697681(benchmark::State& state) {
  const auto inputs = input_args__12678942444603697681;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__12678942444603697681(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__12678942444603697681(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__12678942444603697681(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__12678942444603697681);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__12678942444603697681
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__15896664485656839884 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15896664485656839884{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__15896664485656839884(benchmark::State& state) {
  const auto inputs = input_args__15896664485656839884;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__15896664485656839884(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__15896664485656839884(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__15896664485656839884(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__15896664485656839884);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__15896664485656839884
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__10878414858853028023 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10878414858853028023{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__10878414858853028023(benchmark::State& state) {
  const auto inputs = input_args__10878414858853028023;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__10878414858853028023(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__10878414858853028023(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__10878414858853028023(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__10878414858853028023);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__10878414858853028023
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__258249073022879709 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__258249073022879709{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__258249073022879709(benchmark::State& state) {
  const auto inputs = input_args__258249073022879709;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__258249073022879709(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__258249073022879709(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__258249073022879709(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__258249073022879709);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__258249073022879709
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__2520991670400452461 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2520991670400452461{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2520991670400452461(benchmark::State& state) {
  const auto inputs = input_args__2520991670400452461;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__2520991670400452461(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2520991670400452461(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__2520991670400452461(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__2520991670400452461);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__2520991670400452461
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__6974791717183811956 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6974791717183811956{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__6974791717183811956(benchmark::State& state) {
  const auto inputs = input_args__6974791717183811956;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__6974791717183811956(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__6974791717183811956(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__6974791717183811956(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__6974791717183811956);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__6974791717183811956
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__3071693065253234447 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3071693065253234447{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__3071693065253234447(benchmark::State& state) {
  const auto inputs = input_args__3071693065253234447;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__3071693065253234447(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__3071693065253234447(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__3071693065253234447(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__3071693065253234447);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__3071693065253234447
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__1161881935698296473 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1161881935698296473{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1161881935698296473(benchmark::State& state) {
  const auto inputs = input_args__1161881935698296473;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__1161881935698296473(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1161881935698296473(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1161881935698296473(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__1161881935698296473);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__1161881935698296473
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__8512738909926593344 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8512738909926593344{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8512738909926593344(benchmark::State& state) {
  const auto inputs = input_args__8512738909926593344;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__8512738909926593344(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8512738909926593344(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_32__8512738909926593344(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_32__8512738909926593344);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_32__8512738909926593344
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__4472721870803484840 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__4472721870803484840{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__4472721870803484840(benchmark::State& state) {
  const auto inputs = input_args__4472721870803484840;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__4472721870803484840(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__4472721870803484840(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__4472721870803484840(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__4472721870803484840);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__4472721870803484840
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__10497514973730459802 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10497514973730459802{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__10497514973730459802(benchmark::State& state) {
  const auto inputs = input_args__10497514973730459802;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__10497514973730459802(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__10497514973730459802(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__10497514973730459802(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__10497514973730459802);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__10497514973730459802
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__16619618211220476438 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16619618211220476438{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__16619618211220476438(benchmark::State& state) {
  const auto inputs = input_args__16619618211220476438;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__16619618211220476438(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__16619618211220476438(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__16619618211220476438(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__16619618211220476438);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__16619618211220476438
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__15920838676604651972 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15920838676604651972{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__15920838676604651972(benchmark::State& state) {
  const auto inputs = input_args__15920838676604651972;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__15920838676604651972(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__15920838676604651972(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__15920838676604651972(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__15920838676604651972);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__15920838676604651972
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__7596603773415642602 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7596603773415642602{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__7596603773415642602(benchmark::State& state) {
  const auto inputs = input_args__7596603773415642602;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__7596603773415642602(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__7596603773415642602(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_32__7596603773415642602(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_32__7596603773415642602);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_32__7596603773415642602
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__16578702347459478422 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16578702347459478422{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__16578702347459478422(benchmark::State& state) {
  const auto inputs = input_args__16578702347459478422;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__16578702347459478422(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__16578702347459478422(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__16578702347459478422(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__16578702347459478422);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__16578702347459478422
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__10157862840842714847 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10157862840842714847{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10157862840842714847(benchmark::State& state) {
  const auto inputs = input_args__10157862840842714847;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__10157862840842714847(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10157862840842714847(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10157862840842714847(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__10157862840842714847);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__10157862840842714847
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__8774762709134234122 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8774762709134234122{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__8774762709134234122(benchmark::State& state) {
  const auto inputs = input_args__8774762709134234122;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__8774762709134234122(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__8774762709134234122(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__8774762709134234122(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__8774762709134234122);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__8774762709134234122
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__1440331252729579534 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1440331252729579534{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1440331252729579534(benchmark::State& state) {
  const auto inputs = input_args__1440331252729579534;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__1440331252729579534(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1440331252729579534(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__1440331252729579534(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__1440331252729579534);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__1440331252729579534
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__11611879823513537095 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11611879823513537095{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__11611879823513537095(benchmark::State& state) {
  const auto inputs = input_args__11611879823513537095;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__11611879823513537095(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__11611879823513537095(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__11611879823513537095(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__11611879823513537095);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__11611879823513537095
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__14279887323636876103 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14279887323636876103{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__14279887323636876103(benchmark::State& state) {
  const auto inputs = input_args__14279887323636876103;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__14279887323636876103(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__14279887323636876103(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__14279887323636876103(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__14279887323636876103);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__14279887323636876103
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__13031967372630854501 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13031967372630854501{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13031967372630854501(benchmark::State& state) {
  const auto inputs = input_args__13031967372630854501;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__13031967372630854501(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13031967372630854501(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_32__13031967372630854501(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_32__13031967372630854501);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_32__13031967372630854501
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__7561747596892821011 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7561747596892821011{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__7561747596892821011(benchmark::State& state) {
  const auto inputs = input_args__7561747596892821011;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__7561747596892821011(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__7561747596892821011(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__7561747596892821011(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__7561747596892821011);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__7561747596892821011
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__15649657084457129032 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15649657084457129032{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__15649657084457129032(benchmark::State& state) {
  const auto inputs = input_args__15649657084457129032;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__15649657084457129032(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__15649657084457129032(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__15649657084457129032(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__15649657084457129032);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__15649657084457129032
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__3717872339074717591 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3717872339074717591{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__3717872339074717591(benchmark::State& state) {
  const auto inputs = input_args__3717872339074717591;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__3717872339074717591(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__3717872339074717591(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_32__3717872339074717591(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_32__3717872339074717591);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_32__3717872339074717591
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__6631373113392793386 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6631373113392793386{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__6631373113392793386(benchmark::State& state) {
  const auto inputs = input_args__6631373113392793386;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__6631373113392793386(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__6631373113392793386(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__6631373113392793386(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__6631373113392793386);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__6631373113392793386
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__5325725880560223457 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5325725880560223457{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__5325725880560223457(benchmark::State& state) {
  const auto inputs = input_args__5325725880560223457;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__5325725880560223457(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__5325725880560223457(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__5325725880560223457(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__5325725880560223457);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__5325725880560223457
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__5824868746478056138 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5824868746478056138{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__5824868746478056138(benchmark::State& state) {
  const auto inputs = input_args__5824868746478056138;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__5824868746478056138(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__5824868746478056138(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__5824868746478056138(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__5824868746478056138);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__5824868746478056138
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__542880171754594363 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__542880171754594363{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__542880171754594363(benchmark::State& state) {
  const auto inputs = input_args__542880171754594363;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__542880171754594363(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__542880171754594363(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__542880171754594363(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__542880171754594363);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__542880171754594363
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__5612358347407357504 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5612358347407357504{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5612358347407357504(benchmark::State& state) {
  const auto inputs = input_args__5612358347407357504;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__5612358347407357504(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5612358347407357504(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__5612358347407357504(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__5612358347407357504);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__5612358347407357504
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__14006447847904214747 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14006447847904214747{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__14006447847904214747(benchmark::State& state) {
  const auto inputs = input_args__14006447847904214747;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__14006447847904214747(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__14006447847904214747(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__14006447847904214747(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__14006447847904214747);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__14006447847904214747
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_32__12046286916719842278 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__12046286916719842278{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__12046286916719842278(benchmark::State& state) {
  const auto inputs = input_args__12046286916719842278;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_32__12046286916719842278(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__12046286916719842278(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__12046286916719842278(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_32__12046286916719842278);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_32__12046286916719842278
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__13825374536048850819 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13825374536048850819{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__13825374536048850819(benchmark::State& state) {
  const auto inputs = input_args__13825374536048850819;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__13825374536048850819(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__13825374536048850819(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__13825374536048850819(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__13825374536048850819);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__13825374536048850819
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__17385999163747969416 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17385999163747969416{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__17385999163747969416(benchmark::State& state) {
  const auto inputs = input_args__17385999163747969416;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__17385999163747969416(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__17385999163747969416(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__17385999163747969416(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__17385999163747969416);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__17385999163747969416
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__13135651024655561312 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13135651024655561312{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__13135651024655561312(benchmark::State& state) {
  const auto inputs = input_args__13135651024655561312;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__13135651024655561312(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__13135651024655561312(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__13135651024655561312(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__13135651024655561312);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__13135651024655561312
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__15078829952593902432 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15078829952593902432{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__15078829952593902432(benchmark::State& state) {
  const auto inputs = input_args__15078829952593902432;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__15078829952593902432(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__15078829952593902432(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__15078829952593902432(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__15078829952593902432);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__15078829952593902432
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__12526640776588634139 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12526640776588634139{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__12526640776588634139(benchmark::State& state) {
  const auto inputs = input_args__12526640776588634139;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__12526640776588634139(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__12526640776588634139(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__12526640776588634139(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__12526640776588634139);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__12526640776588634139
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__16698285184648085088 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16698285184648085088{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16698285184648085088(benchmark::State& state) {
  const auto inputs = input_args__16698285184648085088;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__16698285184648085088(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16698285184648085088(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__16698285184648085088(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__16698285184648085088);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__16698285184648085088
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__12108164587368163001 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12108164587368163001{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12108164587368163001(benchmark::State& state) {
  const auto inputs = input_args__12108164587368163001;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__12108164587368163001(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12108164587368163001(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__12108164587368163001(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__12108164587368163001);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__12108164587368163001
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__1660753005502994940 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1660753005502994940{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__1660753005502994940(benchmark::State& state) {
  const auto inputs = input_args__1660753005502994940;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__1660753005502994940(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__1660753005502994940(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_32__1660753005502994940(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_32__1660753005502994940);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_32__1660753005502994940
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__14977812475437988261 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14977812475437988261{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__14977812475437988261(benchmark::State& state) {
  const auto inputs = input_args__14977812475437988261;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__14977812475437988261(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__14977812475437988261(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__14977812475437988261(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__14977812475437988261);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__14977812475437988261
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__18284865084901057296 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__18284865084901057296{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__18284865084901057296(benchmark::State& state) {
  const auto inputs = input_args__18284865084901057296;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__18284865084901057296(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__18284865084901057296(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__18284865084901057296(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__18284865084901057296);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__18284865084901057296
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__1838390466059574295 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1838390466059574295{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__1838390466059574295(benchmark::State& state) {
  const auto inputs = input_args__1838390466059574295;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__1838390466059574295(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__1838390466059574295(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_32__1838390466059574295(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_32__1838390466059574295);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_32__1838390466059574295
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__4319256319147746323 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4319256319147746323{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__4319256319147746323(benchmark::State& state) {
  const auto inputs = input_args__4319256319147746323;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__4319256319147746323(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__4319256319147746323(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_32__4319256319147746323(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_32__4319256319147746323);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_32__4319256319147746323
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__8186062192492769896 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8186062192492769896{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 32} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__8186062192492769896(benchmark::State& state) {
  const auto inputs = input_args__8186062192492769896;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__8186062192492769896(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__8186062192492769896(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_32__8186062192492769896(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_32__8186062192492769896);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_32__8186062192492769896
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__6182785789005774789 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6182785789005774789{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__6182785789005774789(benchmark::State& state) {
  const auto inputs = input_args__6182785789005774789;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__6182785789005774789(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__6182785789005774789(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_32__6182785789005774789(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_32__6182785789005774789);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_32__6182785789005774789
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__3658150069958588101 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3658150069958588101{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__3658150069958588101(benchmark::State& state) {
  const auto inputs = input_args__3658150069958588101;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__3658150069958588101(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__3658150069958588101(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_32__3658150069958588101(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_32__3658150069958588101);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_32__3658150069958588101
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__10238766467926789473 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10238766467926789473{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__10238766467926789473(benchmark::State& state) {
  const auto inputs = input_args__10238766467926789473;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__10238766467926789473(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__10238766467926789473(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_32__10238766467926789473(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_32__10238766467926789473);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_32__10238766467926789473
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__10892439351607294794 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10892439351607294794{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10892439351607294794(benchmark::State& state) {
  const auto inputs = input_args__10892439351607294794;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__10892439351607294794(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10892439351607294794(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_32__10892439351607294794(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_32__10892439351607294794);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_32__10892439351607294794
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__9785213776875959313 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1024 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      32 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9785213776875959313{{
      {"input[0]", 32} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1024} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9785213776875959313(benchmark::State& state) {
  const auto inputs = input_args__9785213776875959313;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__9785213776875959313(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9785213776875959313(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_32__9785213776875959313(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_32__9785213776875959313);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_32__9785213776875959313
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_32__10776729647895311461 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10776729647895311461{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__10776729647895311461(benchmark::State& state) {
  const auto inputs = input_args__10776729647895311461;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_32__10776729647895311461(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__10776729647895311461(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_32__10776729647895311461(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_32__10776729647895311461);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_32__10776729647895311461
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__6010912523092587733 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      32 /* Input0 , idx = 0*/, \
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
      32 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__6010912523092587733{{
      {"input[0]", 32} /* Input0 */, 
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
      {"batch_size", 32} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__6010912523092587733(benchmark::State& state) {
  const auto inputs = input_args__6010912523092587733;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__6010912523092587733(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__6010912523092587733(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_32__6010912523092587733(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_32__6010912523092587733);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_32__6010912523092587733
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0

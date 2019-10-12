#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__13003613934437170392 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13003613934437170392{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__13003613934437170392(benchmark::State& state) {
  const auto inputs = input_args__13003613934437170392;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__13003613934437170392(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__13003613934437170392(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__13003613934437170392(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__13003613934437170392);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__13003613934437170392
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__9282658272234529605 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9282658272234529605{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__9282658272234529605(benchmark::State& state) {
  const auto inputs = input_args__9282658272234529605;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__9282658272234529605(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__9282658272234529605(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__9282658272234529605(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__9282658272234529605);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__9282658272234529605
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__7225574044990647974 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7225574044990647974{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__7225574044990647974(benchmark::State& state) {
  const auto inputs = input_args__7225574044990647974;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__7225574044990647974(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__7225574044990647974(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__7225574044990647974(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__7225574044990647974);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__7225574044990647974
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__11343138529648392227 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11343138529648392227{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__11343138529648392227(benchmark::State& state) {
  const auto inputs = input_args__11343138529648392227;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__11343138529648392227(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__11343138529648392227(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__11343138529648392227(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__11343138529648392227);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__11343138529648392227
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__6350999556780480501 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6350999556780480501{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__6350999556780480501(benchmark::State& state) {
  const auto inputs = input_args__6350999556780480501;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__6350999556780480501(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__6350999556780480501(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__6350999556780480501(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__6350999556780480501);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__6350999556780480501
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__13598493427061889558 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13598493427061889558{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__13598493427061889558(benchmark::State& state) {
  const auto inputs = input_args__13598493427061889558;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__13598493427061889558(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__13598493427061889558(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__13598493427061889558(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__13598493427061889558);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__13598493427061889558
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__12519764561153662897 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12519764561153662897{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__12519764561153662897(benchmark::State& state) {
  const auto inputs = input_args__12519764561153662897;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__12519764561153662897(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__12519764561153662897(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__12519764561153662897(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__12519764561153662897);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__12519764561153662897
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__5272560963483390546 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5272560963483390546{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__5272560963483390546(benchmark::State& state) {
  const auto inputs = input_args__5272560963483390546;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__5272560963483390546(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__5272560963483390546(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__5272560963483390546(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__5272560963483390546);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__5272560963483390546
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__7938553875776758285 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7938553875776758285{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__7938553875776758285(benchmark::State& state) {
  const auto inputs = input_args__7938553875776758285;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__7938553875776758285(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__7938553875776758285(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__7938553875776758285(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__7938553875776758285);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__7938553875776758285
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__9997900443422502894 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9997900443422502894{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9997900443422502894(benchmark::State& state) {
  const auto inputs = input_args__9997900443422502894;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__9997900443422502894(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9997900443422502894(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9997900443422502894(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__9997900443422502894);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__9997900443422502894
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__BatchSize_4__7141099854769763022 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      2048 /* Input2 , idx = 2*/, \
      0 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      1 /* Input5 , idx = 5*/, \
      1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7141099854769763022{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 2048} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_4__7141099854769763022(benchmark::State& state) {
  const auto inputs = input_args__7141099854769763022;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_4__7141099854769763022(benchmark::State& state) {
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_4__7141099854769763022(state);
  LAYER_CUBLAS_GEMM_FWD_Impl<__half>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__BatchSize_4__7141099854769763022(state);
}




BENCHMARK_CUDNN(LAYER_CUBLAS_GEMM_FWD_TENSORCOREHALF__BatchSize_4__7141099854769763022)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__2259739143521999048 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2259739143521999048{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__2259739143521999048(benchmark::State& state) {
  const auto inputs = input_args__2259739143521999048;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__2259739143521999048(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__2259739143521999048(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__2259739143521999048(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__2259739143521999048);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__2259739143521999048
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__7563381742866526311 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__7563381742866526311{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__7563381742866526311(benchmark::State& state) {
  const auto inputs = input_args__7563381742866526311;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__7563381742866526311(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__7563381742866526311(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__7563381742866526311(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__7563381742866526311);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__7563381742866526311
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__17637482302679281834 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__17637482302679281834{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17637482302679281834(benchmark::State& state) {
  const auto inputs = input_args__17637482302679281834;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__17637482302679281834(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17637482302679281834(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17637482302679281834(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__17637482302679281834);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__17637482302679281834
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__10632209547999471939 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10632209547999471939{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__10632209547999471939(benchmark::State& state) {
  const auto inputs = input_args__10632209547999471939;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__10632209547999471939(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__10632209547999471939(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__10632209547999471939(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__10632209547999471939);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__10632209547999471939
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__1918685484421056492 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1918685484421056492{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__1918685484421056492(benchmark::State& state) {
  const auto inputs = input_args__1918685484421056492;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__1918685484421056492(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__1918685484421056492(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__1918685484421056492(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__1918685484421056492);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__1918685484421056492
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__10266471927955883247 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10266471927955883247{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__10266471927955883247(benchmark::State& state) {
  const auto inputs = input_args__10266471927955883247;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__10266471927955883247(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__10266471927955883247(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__10266471927955883247(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__10266471927955883247);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__10266471927955883247
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__2220829714873139171 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2220829714873139171{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__2220829714873139171(benchmark::State& state) {
  const auto inputs = input_args__2220829714873139171;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__2220829714873139171(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__2220829714873139171(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__2220829714873139171(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__2220829714873139171);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__2220829714873139171
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__1958298743821574343 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1958298743821574343{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__1958298743821574343(benchmark::State& state) {
  const auto inputs = input_args__1958298743821574343;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__1958298743821574343(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__1958298743821574343(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__1958298743821574343(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__1958298743821574343);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__1958298743821574343
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__14619483508574440417 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14619483508574440417{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__14619483508574440417(benchmark::State& state) {
  const auto inputs = input_args__14619483508574440417;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__14619483508574440417(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__14619483508574440417(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__14619483508574440417(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__14619483508574440417);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__14619483508574440417
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__11507701358026344208 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11507701358026344208{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11507701358026344208(benchmark::State& state) {
  const auto inputs = input_args__11507701358026344208;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__11507701358026344208(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11507701358026344208(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11507701358026344208(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__11507701358026344208);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__11507701358026344208
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__3315835931642992753 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3315835931642992753{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3315835931642992753(benchmark::State& state) {
  const auto inputs = input_args__3315835931642992753;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__3315835931642992753(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3315835931642992753(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3315835931642992753(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__3315835931642992753);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__3315835931642992753
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__14596433564122535314 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14596433564122535314{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14596433564122535314(benchmark::State& state) {
  const auto inputs = input_args__14596433564122535314;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__14596433564122535314(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14596433564122535314(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14596433564122535314(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__14596433564122535314);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__14596433564122535314
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__6845092502887908767 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6845092502887908767{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__6845092502887908767(benchmark::State& state) {
  const auto inputs = input_args__6845092502887908767;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__6845092502887908767(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__6845092502887908767(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__6845092502887908767(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__6845092502887908767);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__6845092502887908767
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__3168433766578227029 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3168433766578227029{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3168433766578227029(benchmark::State& state) {
  const auto inputs = input_args__3168433766578227029;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__3168433766578227029(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3168433766578227029(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__3168433766578227029(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__3168433766578227029);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__3168433766578227029
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__14946405319086820022 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14946405319086820022{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14946405319086820022(benchmark::State& state) {
  const auto inputs = input_args__14946405319086820022;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__14946405319086820022(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14946405319086820022(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__14946405319086820022(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__14946405319086820022);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__14946405319086820022
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__14380538362559370115 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14380538362559370115{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__14380538362559370115(benchmark::State& state) {
  const auto inputs = input_args__14380538362559370115;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__14380538362559370115(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__14380538362559370115(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__14380538362559370115(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__14380538362559370115);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__14380538362559370115
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__518073316044685482 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__518073316044685482{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__518073316044685482(benchmark::State& state) {
  const auto inputs = input_args__518073316044685482;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__518073316044685482(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__518073316044685482(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__518073316044685482(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__518073316044685482);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__518073316044685482
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__15202207119927861425 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15202207119927861425{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__15202207119927861425(benchmark::State& state) {
  const auto inputs = input_args__15202207119927861425;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__15202207119927861425(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__15202207119927861425(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__15202207119927861425(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__15202207119927861425);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__15202207119927861425
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__13739385420162999165 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13739385420162999165{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__13739385420162999165(benchmark::State& state) {
  const auto inputs = input_args__13739385420162999165;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__13739385420162999165(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__13739385420162999165(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__13739385420162999165(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__13739385420162999165);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__13739385420162999165
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__6501192306390822558 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6501192306390822558{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__6501192306390822558(benchmark::State& state) {
  const auto inputs = input_args__6501192306390822558;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__6501192306390822558(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__6501192306390822558(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__6501192306390822558(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__6501192306390822558);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__6501192306390822558
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__17644898279180304058 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__17644898279180304058{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17644898279180304058(benchmark::State& state) {
  const auto inputs = input_args__17644898279180304058;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__17644898279180304058(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17644898279180304058(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__17644898279180304058(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__17644898279180304058);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__17644898279180304058
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__13018967077896388088 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__13018967077896388088{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__13018967077896388088(benchmark::State& state) {
  const auto inputs = input_args__13018967077896388088;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__13018967077896388088(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__13018967077896388088(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__13018967077896388088(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__13018967077896388088);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__13018967077896388088
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__15965873409401609456 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15965873409401609456{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__15965873409401609456(benchmark::State& state) {
  const auto inputs = input_args__15965873409401609456;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__15965873409401609456(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__15965873409401609456(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__15965873409401609456(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__15965873409401609456);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__15965873409401609456
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__14422770200282698042 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14422770200282698042{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__14422770200282698042(benchmark::State& state) {
  const auto inputs = input_args__14422770200282698042;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__14422770200282698042(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__14422770200282698042(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__14422770200282698042(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__14422770200282698042);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__14422770200282698042
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__3722298192431352550 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3722298192431352550{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3722298192431352550(benchmark::State& state) {
  const auto inputs = input_args__3722298192431352550;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__3722298192431352550(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3722298192431352550(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3722298192431352550(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__3722298192431352550);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__3722298192431352550
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__12360008947860650620 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12360008947860650620{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12360008947860650620(benchmark::State& state) {
  const auto inputs = input_args__12360008947860650620;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__12360008947860650620(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12360008947860650620(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12360008947860650620(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__12360008947860650620);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__12360008947860650620
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__17097883737264716642 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17097883737264716642{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__17097883737264716642(benchmark::State& state) {
  const auto inputs = input_args__17097883737264716642;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__17097883737264716642(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__17097883737264716642(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__17097883737264716642(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__17097883737264716642);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__17097883737264716642
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__707952861115659905 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__707952861115659905{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__707952861115659905(benchmark::State& state) {
  const auto inputs = input_args__707952861115659905;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__707952861115659905(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__707952861115659905(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__707952861115659905(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__707952861115659905);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__707952861115659905
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__15925591739734337071 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15925591739734337071{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__15925591739734337071(benchmark::State& state) {
  const auto inputs = input_args__15925591739734337071;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__15925591739734337071(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__15925591739734337071(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__15925591739734337071(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__15925591739734337071);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__15925591739734337071
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__11344846345052038509 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11344846345052038509{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__11344846345052038509(benchmark::State& state) {
  const auto inputs = input_args__11344846345052038509;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__11344846345052038509(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__11344846345052038509(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__11344846345052038509(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__11344846345052038509);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__11344846345052038509
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_4__9156078209138519513 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      1 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      4 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9156078209138519513{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 1} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_4__9156078209138519513(benchmark::State& state) {
  const auto inputs = input_args__9156078209138519513;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_4__9156078209138519513(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_4__9156078209138519513(state);
    LAYER_CUDNN_POOLING_FWD_Impl<__half, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_4__9156078209138519513(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_TENSORCOREHALF__BatchSize_4__9156078209138519513);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_4__9156078209138519513
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__12597858432256559198 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__12597858432256559198{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__12597858432256559198(benchmark::State& state) {
  const auto inputs = input_args__12597858432256559198;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__12597858432256559198(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__12597858432256559198(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__12597858432256559198(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__12597858432256559198);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__12597858432256559198
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__14527851033342136759 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14527851033342136759{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__14527851033342136759(benchmark::State& state) {
  const auto inputs = input_args__14527851033342136759;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__14527851033342136759(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__14527851033342136759(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__14527851033342136759(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__14527851033342136759);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__14527851033342136759
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__15700498097916634367 {

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15700498097916634367{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__15700498097916634367(benchmark::State& state) {
  const auto inputs = input_args__15700498097916634367;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__15700498097916634367(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__15700498097916634367(state);
  LAYER_CUDNN_OP_TENSOR_ADD_FWD_Impl<__half >(state);
  BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_ADD_COUNTERS__BatchSize_4__15700498097916634367(state);
}

#define BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD(LAYER_CUDNN_OP_TENSOR_ADD_FWD_TENSORCOREHALF__BatchSize_4__15700498097916634367);

#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_OP_TENSOR_ADD_FWD
} // end namespace LAYER_CUDNN_OP_TENSOR_ADD_FWD__BatchSize_4__15700498097916634367
#endif // ENABLE_LAYER_CUDNN_OP_TENSOR_ADD_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__6234358795164304627 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6234358795164304627{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6234358795164304627(benchmark::State& state) {
  const auto inputs = input_args__6234358795164304627;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__6234358795164304627(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6234358795164304627(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6234358795164304627(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__6234358795164304627);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__6234358795164304627
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__11601526008483952433 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11601526008483952433{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__11601526008483952433(benchmark::State& state) {
  const auto inputs = input_args__11601526008483952433;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__11601526008483952433(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__11601526008483952433(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__11601526008483952433(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__11601526008483952433);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__11601526008483952433
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__4869090788219833093 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__4869090788219833093{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__4869090788219833093(benchmark::State& state) {
  const auto inputs = input_args__4869090788219833093;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__4869090788219833093(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__4869090788219833093(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__4869090788219833093(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__4869090788219833093);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__4869090788219833093
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__6486658790083140488 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6486658790083140488{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6486658790083140488(benchmark::State& state) {
  const auto inputs = input_args__6486658790083140488;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__6486658790083140488(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6486658790083140488(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__6486658790083140488(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__6486658790083140488);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__6486658790083140488
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__17095657486070820562 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__17095657486070820562{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__17095657486070820562(benchmark::State& state) {
  const auto inputs = input_args__17095657486070820562;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__17095657486070820562(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__17095657486070820562(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__17095657486070820562(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__17095657486070820562);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__17095657486070820562
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_4__15794509890831073347 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15794509890831073347{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__15794509890831073347(benchmark::State& state) {
  const auto inputs = input_args__15794509890831073347;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_4__15794509890831073347(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__15794509890831073347(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__15794509890831073347(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_4__15794509890831073347);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_4__15794509890831073347
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__12684229374779245783 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12684229374779245783{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12684229374779245783(benchmark::State& state) {
  const auto inputs = input_args__12684229374779245783;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__12684229374779245783(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12684229374779245783(state);
  LAYER_CUDNN_ACTIVATION_FWD_Impl<__half, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_4__12684229374779245783(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_TENSORCOREHALF__BatchSize_4__12684229374779245783);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_4__12684229374779245783
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__7619956978031745089 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7619956978031745089{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__7619956978031745089(benchmark::State& state) {
  const auto inputs = input_args__7619956978031745089;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__7619956978031745089(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__7619956978031745089(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__7619956978031745089(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__7619956978031745089);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__7619956978031745089
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__9891487821269636321 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__9891487821269636321{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__9891487821269636321(benchmark::State& state) {
  const auto inputs = input_args__9891487821269636321;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__9891487821269636321(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__9891487821269636321(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__9891487821269636321(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__9891487821269636321);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__9891487821269636321
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__14212085452237885726 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14212085452237885726{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14212085452237885726(benchmark::State& state) {
  const auto inputs = input_args__14212085452237885726;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__14212085452237885726(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14212085452237885726(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14212085452237885726(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__14212085452237885726);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__14212085452237885726
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__1060991337893798775 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1060991337893798775{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__1060991337893798775(benchmark::State& state) {
  const auto inputs = input_args__1060991337893798775;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__1060991337893798775(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__1060991337893798775(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__1060991337893798775(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__1060991337893798775);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__1060991337893798775
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__3850713138947906731 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3850713138947906731{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3850713138947906731(benchmark::State& state) {
  const auto inputs = input_args__3850713138947906731;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__3850713138947906731(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3850713138947906731(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__3850713138947906731(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__3850713138947906731);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__3850713138947906731
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__4768296980725704265 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4768296980725704265{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__4768296980725704265(benchmark::State& state) {
  const auto inputs = input_args__4768296980725704265;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__4768296980725704265(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__4768296980725704265(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__4768296980725704265(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__4768296980725704265);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__4768296980725704265
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_4
namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__12931554703483337556 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__12931554703483337556{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__12931554703483337556(benchmark::State& state) {
  const auto inputs = input_args__12931554703483337556;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__12931554703483337556(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__12931554703483337556(state);
    
      LAYER_CUDNN_CONV_FWD_4_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_4_ADD_COUNTERS__BatchSize_4__12931554703483337556(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_4(LAYER_CUDNN_CONV_FWD_4_TENSORCOREHALF__BatchSize_4__12931554703483337556);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_4
} // end namespace LAYER_CUDNN_CONV_FWD_4__BatchSize_4__12931554703483337556
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_4

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__8053444435364051491 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__8053444435364051491{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__8053444435364051491(benchmark::State& state) {
  const auto inputs = input_args__8053444435364051491;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__8053444435364051491(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__8053444435364051491(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__8053444435364051491(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__8053444435364051491);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__8053444435364051491
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__11192110601332170222 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11192110601332170222{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__11192110601332170222(benchmark::State& state) {
  const auto inputs = input_args__11192110601332170222;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__11192110601332170222(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__11192110601332170222(state);
  LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_ADD_COUNTERS__BatchSize_4__11192110601332170222(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE(LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_TENSORCOREHALF__BatchSize_4__11192110601332170222);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_INFERENCE__BatchSize_4__11192110601332170222
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_INFERENCE

#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__9207214167375466509 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9207214167375466509{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 4} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9207214167375466509(benchmark::State& state) {
  const auto inputs = input_args__9207214167375466509;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__9207214167375466509(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9207214167375466509(state);
  LAYER_CUDNN_BATCHNORM_FWD_TRAINING_Impl<__half, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_ADD_COUNTERS__BatchSize_4__9207214167375466509(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(b) \
   BENCHMARK_CUDNN_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING(LAYER_CUDNN_BATCHNORM_FWD_TRAINING_TENSORCOREHALF__BatchSize_4__9207214167375466509);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
} // end namespace LAYER_CUDNN_BATCHNORM_FWD_TRAINING__BatchSize_4__9207214167375466509
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_FWD_TRAINING
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__17256872381776144817 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17256872381776144817{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__17256872381776144817(benchmark::State& state) {
  const auto inputs = input_args__17256872381776144817;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__17256872381776144817(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__17256872381776144817(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__17256872381776144817(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__17256872381776144817);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__17256872381776144817
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__18323940032435296350 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__18323940032435296350{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18323940032435296350(benchmark::State& state) {
  const auto inputs = input_args__18323940032435296350;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__18323940032435296350(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18323940032435296350(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18323940032435296350(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__18323940032435296350);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__18323940032435296350
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__14524003343215206719 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14524003343215206719{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14524003343215206719(benchmark::State& state) {
  const auto inputs = input_args__14524003343215206719;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__14524003343215206719(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14524003343215206719(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__14524003343215206719(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__14524003343215206719);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__14524003343215206719
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__718206186648124552 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__718206186648124552{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__718206186648124552(benchmark::State& state) {
  const auto inputs = input_args__718206186648124552;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__718206186648124552(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__718206186648124552(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__718206186648124552(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__718206186648124552);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__718206186648124552
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__15817488037268374201 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15817488037268374201{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__15817488037268374201(benchmark::State& state) {
  const auto inputs = input_args__15817488037268374201;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__15817488037268374201(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__15817488037268374201(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__15817488037268374201(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__15817488037268374201);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__15817488037268374201
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__1029784636120261282 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__1029784636120261282{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__1029784636120261282(benchmark::State& state) {
  const auto inputs = input_args__1029784636120261282;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__1029784636120261282(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__1029784636120261282(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__1029784636120261282(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__1029784636120261282);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__1029784636120261282
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_1
namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__7317455267804744162 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7317455267804744162{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__7317455267804744162(benchmark::State& state) {
  const auto inputs = input_args__7317455267804744162;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__7317455267804744162(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__7317455267804744162(state);
    
      LAYER_CUDNN_CONV_FWD_1_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_1_ADD_COUNTERS__BatchSize_4__7317455267804744162(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_1(LAYER_CUDNN_CONV_FWD_1_TENSORCOREHALF__BatchSize_4__7317455267804744162);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_1
} // end namespace LAYER_CUDNN_CONV_FWD_1__BatchSize_4__7317455267804744162
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_1

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__2737975405920488096 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__2737975405920488096{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__2737975405920488096(benchmark::State& state) {
  const auto inputs = input_args__2737975405920488096;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__2737975405920488096(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__2737975405920488096(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_ADD_COUNTERS__BatchSize_4__2737975405920488096(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_TENSORCOREHALF__BatchSize_4__2737975405920488096);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2__BatchSize_4__2737975405920488096
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_2
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__3407192505953718224 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      2048 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      2048 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3407192505953718224{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 2048} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__3407192505953718224(benchmark::State& state) {
  const auto inputs = input_args__3407192505953718224;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__3407192505953718224(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__3407192505953718224(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__3407192505953718224(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__3407192505953718224);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__3407192505953718224
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_3
namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__18336488205046563518 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__18336488205046563518{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18336488205046563518(benchmark::State& state) {
  const auto inputs = input_args__18336488205046563518;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__18336488205046563518(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18336488205046563518(state);
    
      LAYER_CUDNN_CONV_FWD_3_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_3_ADD_COUNTERS__BatchSize_4__18336488205046563518(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_3(LAYER_CUDNN_CONV_FWD_3_TENSORCOREHALF__BatchSize_4__18336488205046563518);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_3
} // end namespace LAYER_CUDNN_CONV_FWD_3__BatchSize_4__18336488205046563518
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_3

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_4__14444992507612638255 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__14444992507612638255{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__14444992507612638255(benchmark::State& state) {
  const auto inputs = input_args__14444992507612638255;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_4__14444992507612638255(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__14444992507612638255(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_ADD_COUNTERS__BatchSize_4__14444992507612638255(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_TENSORCOREHALF__BatchSize_4__14444992507612638255);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3__BatchSize_4__14444992507612638255
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_3
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__986841950261270698 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__986841950261270698{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__986841950261270698(benchmark::State& state) {
  const auto inputs = input_args__986841950261270698;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__986841950261270698(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__986841950261270698(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__986841950261270698(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__986841950261270698);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__986841950261270698
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_0
namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__5431523459279211926 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__5431523459279211926{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__5431523459279211926(benchmark::State& state) {
  const auto inputs = input_args__5431523459279211926;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__5431523459279211926(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__5431523459279211926(state);
    
      LAYER_CUDNN_CONV_FWD_0_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_0_ADD_COUNTERS__BatchSize_4__5431523459279211926(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_0(LAYER_CUDNN_CONV_FWD_0_TENSORCOREHALF__BatchSize_4__5431523459279211926);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_0
} // end namespace LAYER_CUDNN_CONV_FWD_0__BatchSize_4__5431523459279211926
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_0

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__11569238004909150414 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__11569238004909150414{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11569238004909150414(benchmark::State& state) {
  const auto inputs = input_args__11569238004909150414;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__11569238004909150414(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11569238004909150414(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__11569238004909150414(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__11569238004909150414);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__11569238004909150414
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__16169747928586304094 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      1024 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1024 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16169747928586304094{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1024} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__16169747928586304094(benchmark::State& state) {
  const auto inputs = input_args__16169747928586304094;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__16169747928586304094(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__16169747928586304094(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__16169747928586304094(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__16169747928586304094);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__16169747928586304094
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__3897409531561667602 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__3897409531561667602{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__3897409531561667602(benchmark::State& state) {
  const auto inputs = input_args__3897409531561667602;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__3897409531561667602(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__3897409531561667602(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__3897409531561667602(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__3897409531561667602);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__3897409531561667602
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__7153729348737327331 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__7153729348737327331{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__7153729348737327331(benchmark::State& state) {
  const auto inputs = input_args__7153729348737327331;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__7153729348737327331(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__7153729348737327331(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_ADD_COUNTERS__BatchSize_4__7153729348737327331(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_TENSORCOREHALF__BatchSize_4__7153729348737327331);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0__BatchSize_4__7153729348737327331
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_0
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__12574978931986893981 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12574978931986893981{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__12574978931986893981(benchmark::State& state) {
  const auto inputs = input_args__12574978931986893981;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__12574978931986893981(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__12574978931986893981(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__12574978931986893981(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__12574978931986893981);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__12574978931986893981
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__15272505847485694825 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__15272505847485694825{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__15272505847485694825(benchmark::State& state) {
  const auto inputs = input_args__15272505847485694825;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__15272505847485694825(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__15272505847485694825(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__15272505847485694825(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__15272505847485694825);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__15272505847485694825
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__10643055416322141901 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10643055416322141901{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__10643055416322141901(benchmark::State& state) {
  const auto inputs = input_args__10643055416322141901;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__10643055416322141901(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__10643055416322141901(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_ADD_COUNTERS__BatchSize_4__10643055416322141901(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_TENSORCOREHALF__BatchSize_4__10643055416322141901);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1__BatchSize_4__10643055416322141901
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_1
#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__5363001110456933472 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      4 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5363001110456933472{{
      {"input[0]", 4} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__5363001110456933472(benchmark::State& state) {
  const auto inputs = input_args__5363001110456933472;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__5363001110456933472(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__5363001110456933472(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<__half>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_4__5363001110456933472(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_TENSORCOREHALF__BatchSize_4__5363001110456933472);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_4__5363001110456933472
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_FWD_2
namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__10219819932448703024 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__10219819932448703024{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__10219819932448703024(benchmark::State& state) {
  const auto inputs = input_args__10219819932448703024;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__10219819932448703024(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__10219819932448703024(state);
    
      LAYER_CUDNN_CONV_FWD_2_Impl<__half, convolution_algorithm, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_2_ADD_COUNTERS__BatchSize_4__10219819932448703024(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD_2(LAYER_CUDNN_CONV_FWD_2_TENSORCOREHALF__BatchSize_4__10219819932448703024);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_2
} // end namespace LAYER_CUDNN_CONV_FWD_2__BatchSize_4__10219819932448703024
#endif // ENABLE_LAYER_CUDNN_CONV_FWD_2

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__16618930145549235074 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS() \
  Args({{ \
      4 /* Input0 , idx = 0*/, \
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
      4 /* BatchSize , idx = 14*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 15*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 16*/, \
  }})


static const std::map<std::string, double> input_args__16618930145549235074{{
      {"input[0]", 4} /* Input0 */, 
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
      {"batch_size", 4} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "group", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__16618930145549235074(benchmark::State& state) {
  const auto inputs = input_args__16618930145549235074;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  #ifdef CUDNN_SUPPORTS_TENSOR_OPS
  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__16618930145549235074(benchmark::State& state) {
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__16618930145549235074(state);
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_Impl<__half, convolution_algorithm, activation_mode, CUDNN_TENSOR_OP_MATH>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_ADD_COUNTERS__BatchSize_4__16618930145549235074(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_TENSORCOREHALF__BatchSize_4__16618930145549235074);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4__BatchSize_4__16618930145549235074
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_4

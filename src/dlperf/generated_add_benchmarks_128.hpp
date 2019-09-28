#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6859240673649989660 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6859240673649989660{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(benchmark::State& state) {
  const auto inputs = input_args__6859240673649989660;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6859240673649989660(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6859240673649989660);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6859240673649989660
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6859240673649989660 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6859240673649989660{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(benchmark::State& state) {
  const auto inputs = input_args__6859240673649989660;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6859240673649989660(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6859240673649989660(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6859240673649989660);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6859240673649989660
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8482452444647423132 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8482452444647423132{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(benchmark::State& state) {
  const auto inputs = input_args__8482452444647423132;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8482452444647423132(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8482452444647423132);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8482452444647423132
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1264185635573811460 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1264185635573811460{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(benchmark::State& state) {
  const auto inputs = input_args__1264185635573811460;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1264185635573811460(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1264185635573811460);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1264185635573811460
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11521589232237330268 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      111 /* Input2 , idx = 2*/, \
      111 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11521589232237330268{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 111} /* Input2 */, 
      {"input[3]", 111} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11521589232237330268(benchmark::State& state) {
  const auto inputs = input_args__11521589232237330268;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11521589232237330268(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11521589232237330268(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11521589232237330268(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11521589232237330268);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11521589232237330268
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1716429192037680256 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      24 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      24 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1716429192037680256{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 24} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 24} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1716429192037680256(benchmark::State& state) {
  const auto inputs = input_args__1716429192037680256;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1716429192037680256(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1716429192037680256(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1716429192037680256(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1716429192037680256);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1716429192037680256
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12168489055843003372 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12168489055843003372{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(benchmark::State& state) {
  const auto inputs = input_args__12168489055843003372;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12168489055843003372(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12168489055843003372);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12168489055843003372
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5924414009008629672 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5924414009008629672{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(benchmark::State& state) {
  const auto inputs = input_args__5924414009008629672;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5924414009008629672(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5924414009008629672);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5924414009008629672
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1264185635573811460 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1264185635573811460{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(benchmark::State& state) {
  const auto inputs = input_args__1264185635573811460;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1264185635573811460(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1264185635573811460(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1264185635573811460);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1264185635573811460
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8482452444647423132 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8482452444647423132{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(benchmark::State& state) {
  const auto inputs = input_args__8482452444647423132;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8482452444647423132(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8482452444647423132(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8482452444647423132);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8482452444647423132
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2320672496716893973 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2320672496716893973{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320672496716893973(benchmark::State& state) {
  const auto inputs = input_args__2320672496716893973;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2320672496716893973(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320672496716893973(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320672496716893973(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2320672496716893973);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2320672496716893973
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12168489055843003372 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12168489055843003372{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(benchmark::State& state) {
  const auto inputs = input_args__12168489055843003372;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12168489055843003372(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12168489055843003372(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12168489055843003372);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12168489055843003372
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5924414009008629672 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5924414009008629672{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(benchmark::State& state) {
  const auto inputs = input_args__5924414009008629672;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5924414009008629672(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5924414009008629672(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5924414009008629672);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5924414009008629672
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18216523098587031868 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      112 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      112 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18216523098587031868{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 112} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 112} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18216523098587031868(benchmark::State& state) {
  const auto inputs = input_args__18216523098587031868;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18216523098587031868(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18216523098587031868(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18216523098587031868(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18216523098587031868);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18216523098587031868
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11280943375005784372 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11280943375005784372{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11280943375005784372(benchmark::State& state) {
  const auto inputs = input_args__11280943375005784372;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11280943375005784372(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11280943375005784372(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11280943375005784372(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11280943375005784372);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11280943375005784372
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10902815492908330824 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10902815492908330824{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10902815492908330824(benchmark::State& state) {
  const auto inputs = input_args__10902815492908330824;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10902815492908330824(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10902815492908330824(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10902815492908330824(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10902815492908330824);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10902815492908330824
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17241771812751007689 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17241771812751007689{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17241771812751007689(benchmark::State& state) {
  const auto inputs = input_args__17241771812751007689;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17241771812751007689(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17241771812751007689(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17241771812751007689(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17241771812751007689);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17241771812751007689
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10310562429340781068 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10310562429340781068{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(benchmark::State& state) {
  const auto inputs = input_args__10310562429340781068;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10310562429340781068(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10310562429340781068);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10310562429340781068
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__575896578004152053 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__575896578004152053{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__575896578004152053(benchmark::State& state) {
  const auto inputs = input_args__575896578004152053;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__575896578004152053(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__575896578004152053(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__575896578004152053(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__575896578004152053);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__575896578004152053
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11033755222608854044 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11033755222608854044{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11033755222608854044(benchmark::State& state) {
  const auto inputs = input_args__11033755222608854044;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11033755222608854044(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11033755222608854044(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11033755222608854044(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11033755222608854044);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11033755222608854044
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1674989363749376564 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1674989363749376564{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1674989363749376564(benchmark::State& state) {
  const auto inputs = input_args__1674989363749376564;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1674989363749376564(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1674989363749376564(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1674989363749376564(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1674989363749376564);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1674989363749376564
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10310562429340781068 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10310562429340781068{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(benchmark::State& state) {
  const auto inputs = input_args__10310562429340781068;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10310562429340781068(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10310562429340781068(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10310562429340781068);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10310562429340781068
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14050067440827267060 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14050067440827267060{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(benchmark::State& state) {
  const auto inputs = input_args__14050067440827267060;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14050067440827267060(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14050067440827267060);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14050067440827267060
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7144862260163209205{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(benchmark::State& state) {
  const auto inputs = input_args__7144862260163209205;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17550085615010822756{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(benchmark::State& state) {
  const auto inputs = input_args__17550085615010822756;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7144862260163209205{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(benchmark::State& state) {
  const auto inputs = input_args__7144862260163209205;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16113597110251631060{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(benchmark::State& state) {
  const auto inputs = input_args__16113597110251631060;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15754489727245341360{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(benchmark::State& state) {
  const auto inputs = input_args__15754489727245341360;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8635869144469815488 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      224 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      224 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8635869144469815488{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 224} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 224} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8635869144469815488(benchmark::State& state) {
  const auto inputs = input_args__8635869144469815488;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8635869144469815488(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8635869144469815488(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8635869144469815488(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8635869144469815488);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8635869144469815488
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3631821995132056173 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3631821995132056173{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3631821995132056173(benchmark::State& state) {
  const auto inputs = input_args__3631821995132056173;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3631821995132056173(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3631821995132056173(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3631821995132056173(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3631821995132056173);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3631821995132056173
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2089005179067163720 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2089005179067163720{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(benchmark::State& state) {
  const auto inputs = input_args__2089005179067163720;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2089005179067163720(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2089005179067163720);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2089005179067163720
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12720352659311529640 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12720352659311529640{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12720352659311529640(benchmark::State& state) {
  const auto inputs = input_args__12720352659311529640;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12720352659311529640(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12720352659311529640(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12720352659311529640(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12720352659311529640);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12720352659311529640
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14050067440827267060 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14050067440827267060{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(benchmark::State& state) {
  const auto inputs = input_args__14050067440827267060;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14050067440827267060(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14050067440827267060(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14050067440827267060);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14050067440827267060
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2083551952999376520 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1000 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2083551952999376520{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1000} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2083551952999376520(benchmark::State& state) {
  const auto inputs = input_args__2083551952999376520;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2083551952999376520(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2083551952999376520(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2083551952999376520(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2083551952999376520);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2083551952999376520
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10482945834488758724 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      208 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      208 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10482945834488758724{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 208} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 208} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10482945834488758724(benchmark::State& state) {
  const auto inputs = input_args__10482945834488758724;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10482945834488758724(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10482945834488758724(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10482945834488758724(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10482945834488758724);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10482945834488758724
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9190570167830646677 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      55 /* Input2 , idx = 2*/, \
      55 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9190570167830646677{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 55} /* Input2 */, 
      {"input[3]", 55} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9190570167830646677(benchmark::State& state) {
  const auto inputs = input_args__9190570167830646677;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9190570167830646677(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9190570167830646677(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9190570167830646677(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9190570167830646677);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9190570167830646677
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14330195283996994941 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14330195283996994941{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14330195283996994941(benchmark::State& state) {
  const auto inputs = input_args__14330195283996994941;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14330195283996994941(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14330195283996994941(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14330195283996994941(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14330195283996994941);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14330195283996994941
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9833440969941217557 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9833440969941217557{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(benchmark::State& state) {
  const auto inputs = input_args__9833440969941217557;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9833440969941217557(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9833440969941217557);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9833440969941217557
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2089005179067163720 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2089005179067163720{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(benchmark::State& state) {
  const auto inputs = input_args__2089005179067163720;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2089005179067163720(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2089005179067163720(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2089005179067163720);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2089005179067163720
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3544570339102023309 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3544570339102023309{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(benchmark::State& state) {
  const auto inputs = input_args__3544570339102023309;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3544570339102023309(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3544570339102023309);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3544570339102023309
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10582517107983845984 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10582517107983845984{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10582517107983845984(benchmark::State& state) {
  const auto inputs = input_args__10582517107983845984;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10582517107983845984(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10582517107983845984(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10582517107983845984(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10582517107983845984);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10582517107983845984
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4597747489000786837 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4597747489000786837{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(benchmark::State& state) {
  const auto inputs = input_args__4597747489000786837;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4597747489000786837(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4597747489000786837);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4597747489000786837
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9864634100235992405 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9864634100235992405{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(benchmark::State& state) {
  const auto inputs = input_args__9864634100235992405;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9864634100235992405(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9864634100235992405);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9864634100235992405
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12464803891748548965{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(benchmark::State& state) {
  const auto inputs = input_args__12464803891748548965;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17661338392463725908 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17661338392463725908{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(benchmark::State& state) {
  const auto inputs = input_args__17661338392463725908;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17661338392463725908(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17661338392463725908);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17661338392463725908
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11674821256163484797{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(benchmark::State& state) {
  const auto inputs = input_args__11674821256163484797;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11353100897492663541 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11353100897492663541{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(benchmark::State& state) {
  const auto inputs = input_args__11353100897492663541;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11353100897492663541(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11353100897492663541);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11353100897492663541
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9303945440899666673 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      24 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      24 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9303945440899666673{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 24} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 24} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9303945440899666673(benchmark::State& state) {
  const auto inputs = input_args__9303945440899666673;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9303945440899666673(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9303945440899666673(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9303945440899666673(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9303945440899666673);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9303945440899666673
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18356365886311276160 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18356365886311276160{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(benchmark::State& state) {
  const auto inputs = input_args__18356365886311276160;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18356365886311276160(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18356365886311276160);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18356365886311276160
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17661338392463725908 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17661338392463725908{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(benchmark::State& state) {
  const auto inputs = input_args__17661338392463725908;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17661338392463725908(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17661338392463725908(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17661338392463725908);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17661338392463725908
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12464803891748548965{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(benchmark::State& state) {
  const auto inputs = input_args__12464803891748548965;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__108109265675920149 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      224 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      224 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__108109265675920149{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 224} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 224} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__108109265675920149(benchmark::State& state) {
  const auto inputs = input_args__108109265675920149;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__108109265675920149(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__108109265675920149(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__108109265675920149(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__108109265675920149);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__108109265675920149
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15302560716262082472{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(benchmark::State& state) {
  const auto inputs = input_args__15302560716262082472;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17550085615010822756{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(benchmark::State& state) {
  const auto inputs = input_args__17550085615010822756;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9836458143901942013 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9836458143901942013{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(benchmark::State& state) {
  const auto inputs = input_args__9836458143901942013;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9836458143901942013(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9836458143901942013);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9836458143901942013
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__431740090990427637 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      288 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      288 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__431740090990427637{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 288} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 288} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__431740090990427637(benchmark::State& state) {
  const auto inputs = input_args__431740090990427637;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__431740090990427637(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__431740090990427637(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__431740090990427637(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__431740090990427637);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__431740090990427637
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17818088280455606564 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      24 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      24 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17818088280455606564{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 24} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 24} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17818088280455606564(benchmark::State& state) {
  const auto inputs = input_args__17818088280455606564;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17818088280455606564(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17818088280455606564(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17818088280455606564(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17818088280455606564);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17818088280455606564
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15754489727245341360{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(benchmark::State& state) {
  const auto inputs = input_args__15754489727245341360;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17205345164502286573 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      144 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      144 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17205345164502286573{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 144} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 144} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17205345164502286573(benchmark::State& state) {
  const auto inputs = input_args__17205345164502286573;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17205345164502286573(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17205345164502286573(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17205345164502286573(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17205345164502286573);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17205345164502286573
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12464803891748548965{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(benchmark::State& state) {
  const auto inputs = input_args__12464803891748548965;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17461454005405158161 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17461454005405158161{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(benchmark::State& state) {
  const auto inputs = input_args__17461454005405158161;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17461454005405158161(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17461454005405158161);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17461454005405158161
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9986387788965186281 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      112 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      112 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9986387788965186281{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 112} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 112} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9986387788965186281(benchmark::State& state) {
  const auto inputs = input_args__9986387788965186281;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9986387788965186281(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9986387788965186281(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9986387788965186281(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9986387788965186281);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9986387788965186281
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16113597110251631060{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(benchmark::State& state) {
  const auto inputs = input_args__16113597110251631060;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7018314683765305825 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7018314683765305825{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7018314683765305825(benchmark::State& state) {
  const auto inputs = input_args__7018314683765305825;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7018314683765305825(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7018314683765305825(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7018314683765305825(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7018314683765305825);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7018314683765305825
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18364218469298070312 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18364218469298070312{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(benchmark::State& state) {
  const auto inputs = input_args__18364218469298070312;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18364218469298070312(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18364218469298070312);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18364218469298070312
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8967388133412824377 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      16 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      16 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8967388133412824377{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 16} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 16} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8967388133412824377(benchmark::State& state) {
  const auto inputs = input_args__8967388133412824377;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8967388133412824377(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8967388133412824377(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8967388133412824377(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8967388133412824377);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8967388133412824377
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4597747489000786837 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4597747489000786837{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(benchmark::State& state) {
  const auto inputs = input_args__4597747489000786837;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4597747489000786837(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4597747489000786837(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4597747489000786837);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4597747489000786837
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16219227087486504093 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16219227087486504093{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16219227087486504093(benchmark::State& state) {
  const auto inputs = input_args__16219227087486504093;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16219227087486504093(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16219227087486504093(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16219227087486504093(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16219227087486504093);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16219227087486504093
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10997081871477580600 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      144 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      144 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10997081871477580600{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 144} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 144} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10997081871477580600(benchmark::State& state) {
  const auto inputs = input_args__10997081871477580600;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10997081871477580600(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10997081871477580600(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10997081871477580600(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10997081871477580600);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10997081871477580600
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1997211688478456333{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(benchmark::State& state) {
  const auto inputs = input_args__1997211688478456333;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3544570339102023309 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3544570339102023309{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(benchmark::State& state) {
  const auto inputs = input_args__3544570339102023309;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3544570339102023309(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3544570339102023309(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3544570339102023309);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3544570339102023309
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__12464803891748548965{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(benchmark::State& state) {
  const auto inputs = input_args__12464803891748548965;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12464803891748548965(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12464803891748548965);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12464803891748548965
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15754489727245341360{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(benchmark::State& state) {
  const auto inputs = input_args__15754489727245341360;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9864634100235992405 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9864634100235992405{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(benchmark::State& state) {
  const auto inputs = input_args__9864634100235992405;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9864634100235992405(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9864634100235992405(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9864634100235992405);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9864634100235992405
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1997211688478456333{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(benchmark::State& state) {
  const auto inputs = input_args__1997211688478456333;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17953447834261536737 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      320 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      320 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17953447834261536737{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 320} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 320} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17953447834261536737(benchmark::State& state) {
  const auto inputs = input_args__17953447834261536737;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17953447834261536737(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17953447834261536737(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17953447834261536737(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17953447834261536737);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17953447834261536737
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9836458143901942013 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9836458143901942013{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(benchmark::State& state) {
  const auto inputs = input_args__9836458143901942013;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9836458143901942013(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9836458143901942013(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9836458143901942013);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9836458143901942013
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11353100897492663541 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11353100897492663541{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(benchmark::State& state) {
  const auto inputs = input_args__11353100897492663541;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11353100897492663541(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11353100897492663541(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11353100897492663541);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11353100897492663541
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11674821256163484797{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(benchmark::State& state) {
  const auto inputs = input_args__11674821256163484797;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4036808435251592297 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      320 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      320 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4036808435251592297{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 320} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 320} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4036808435251592297(benchmark::State& state) {
  const auto inputs = input_args__4036808435251592297;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4036808435251592297(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4036808435251592297(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4036808435251592297(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4036808435251592297);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4036808435251592297
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5315604631183163101 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5315604631183163101{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5315604631183163101(benchmark::State& state) {
  const auto inputs = input_args__5315604631183163101;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5315604631183163101(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5315604631183163101(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5315604631183163101(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5315604631183163101);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5315604631183163101
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15754489727245341360{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(benchmark::State& state) {
  const auto inputs = input_args__15754489727245341360;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15754489727245341360(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15754489727245341360);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15754489727245341360
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11674821256163484797{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(benchmark::State& state) {
  const auto inputs = input_args__11674821256163484797;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11674821256163484797(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11674821256163484797);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11674821256163484797
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7144862260163209205{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(benchmark::State& state) {
  const auto inputs = input_args__7144862260163209205;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7144862260163209205(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7144862260163209205);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7144862260163209205
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10340163974003285044 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      320 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      320 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10340163974003285044{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 320} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 320} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10340163974003285044(benchmark::State& state) {
  const auto inputs = input_args__10340163974003285044;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10340163974003285044(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10340163974003285044(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10340163974003285044(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10340163974003285044);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10340163974003285044
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5305509593962808181 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5305509593962808181{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5305509593962808181(benchmark::State& state) {
  const auto inputs = input_args__5305509593962808181;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5305509593962808181(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5305509593962808181(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5305509593962808181(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5305509593962808181);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5305509593962808181
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9833440969941217557 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__9833440969941217557{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(benchmark::State& state) {
  const auto inputs = input_args__9833440969941217557;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9833440969941217557(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9833440969941217557(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9833440969941217557);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9833440969941217557
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6677918300458286973 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      6 /* Input2 , idx = 2*/, \
      6 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6677918300458286973{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 6} /* Input2 */, 
      {"input[3]", 6} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6677918300458286973(benchmark::State& state) {
  const auto inputs = input_args__6677918300458286973;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6677918300458286973(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6677918300458286973(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6677918300458286973(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6677918300458286973);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6677918300458286973
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15302560716262082472{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(benchmark::State& state) {
  const auto inputs = input_args__15302560716262082472;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1997211688478456333{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(benchmark::State& state) {
  const auto inputs = input_args__1997211688478456333;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1997211688478456333(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1997211688478456333);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1997211688478456333
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16654934039990821393 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      208 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      208 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16654934039990821393{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 208} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 208} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16654934039990821393(benchmark::State& state) {
  const auto inputs = input_args__16654934039990821393;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16654934039990821393(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16654934039990821393(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16654934039990821393(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16654934039990821393);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16654934039990821393
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16993911994717052704{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(benchmark::State& state) {
  const auto inputs = input_args__16993911994717052704;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8606621558200284324 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      48 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      48 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8606621558200284324{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 48} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 48} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8606621558200284324(benchmark::State& state) {
  const auto inputs = input_args__8606621558200284324;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8606621558200284324(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8606621558200284324(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8606621558200284324(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8606621558200284324);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8606621558200284324
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8333076193598021152 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      288 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      288 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8333076193598021152{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 288} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 288} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8333076193598021152(benchmark::State& state) {
  const auto inputs = input_args__8333076193598021152;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8333076193598021152(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8333076193598021152(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8333076193598021152(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8333076193598021152);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8333076193598021152
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18364218469298070312 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18364218469298070312{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(benchmark::State& state) {
  const auto inputs = input_args__18364218469298070312;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18364218469298070312(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18364218469298070312(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18364218469298070312);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18364218469298070312
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15302560716262082472{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(benchmark::State& state) {
  const auto inputs = input_args__15302560716262082472;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15302560716262082472(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15302560716262082472);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15302560716262082472
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3179991070768801068 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3179991070768801068{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3179991070768801068(benchmark::State& state) {
  const auto inputs = input_args__3179991070768801068;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3179991070768801068(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3179991070768801068(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3179991070768801068(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3179991070768801068);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3179991070768801068
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8224662502370506349 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__8224662502370506349{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8224662502370506349(benchmark::State& state) {
  const auto inputs = input_args__8224662502370506349;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8224662502370506349(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8224662502370506349(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8224662502370506349(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8224662502370506349);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8224662502370506349
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5816835428709799236 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      192 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      192 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5816835428709799236{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 192} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 192} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5816835428709799236(benchmark::State& state) {
  const auto inputs = input_args__5816835428709799236;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5816835428709799236(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5816835428709799236(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5816835428709799236(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5816835428709799236);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5816835428709799236
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17461454005405158161 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17461454005405158161{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(benchmark::State& state) {
  const auto inputs = input_args__17461454005405158161;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17461454005405158161(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17461454005405158161(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17461454005405158161);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17461454005405158161
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17940726976908995396 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17940726976908995396{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(benchmark::State& state) {
  const auto inputs = input_args__17940726976908995396;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17940726976908995396(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17940726976908995396);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17940726976908995396
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4120185123774093604 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      32 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      32 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4120185123774093604{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 32} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 32} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4120185123774093604(benchmark::State& state) {
  const auto inputs = input_args__4120185123774093604;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4120185123774093604(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4120185123774093604(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4120185123774093604(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4120185123774093604);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4120185123774093604
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4128094864202278028 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4128094864202278028{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4128094864202278028(benchmark::State& state) {
  const auto inputs = input_args__4128094864202278028;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4128094864202278028(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4128094864202278028(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4128094864202278028(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4128094864202278028);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4128094864202278028
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1417090207520177572{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(benchmark::State& state) {
  const auto inputs = input_args__1417090207520177572;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5226635955645670968 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      320 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      320 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5226635955645670968{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 320} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 320} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5226635955645670968(benchmark::State& state) {
  const auto inputs = input_args__5226635955645670968;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5226635955645670968(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5226635955645670968(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5226635955645670968(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5226635955645670968);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5226635955645670968
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1417090207520177572{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(benchmark::State& state) {
  const auto inputs = input_args__1417090207520177572;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18356365886311276160 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      160 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      160 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__18356365886311276160{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 160} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 160} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(benchmark::State& state) {
  const auto inputs = input_args__18356365886311276160;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18356365886311276160(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__18356365886311276160(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__18356365886311276160);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__18356365886311276160
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__388938490474717341 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      1000 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__388938490474717341{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 1000} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388938490474717341(benchmark::State& state) {
  const auto inputs = input_args__388938490474717341;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__388938490474717341(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388938490474717341(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388938490474717341(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__388938490474717341);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__388938490474717341
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1174768147038145876 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      125 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      125 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1174768147038145876{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 125} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 125} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1174768147038145876(benchmark::State& state) {
  const auto inputs = input_args__1174768147038145876;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1174768147038145876(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1174768147038145876(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1174768147038145876(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1174768147038145876);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1174768147038145876
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1417090207520177572{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(benchmark::State& state) {
  const auto inputs = input_args__1417090207520177572;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1417090207520177572(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1417090207520177572);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1417090207520177572
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4203663723702755556 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__4203663723702755556{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4203663723702755556(benchmark::State& state) {
  const auto inputs = input_args__4203663723702755556;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4203663723702755556(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4203663723702755556(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4203663723702755556(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4203663723702755556);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4203663723702755556
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16993911994717052704{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(benchmark::State& state) {
  const auto inputs = input_args__16993911994717052704;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17189594106826108556 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17189594106826108556{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(benchmark::State& state) {
  const auto inputs = input_args__17189594106826108556;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17189594106826108556(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17189594106826108556);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17189594106826108556
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15829855089226796852 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__15829855089226796852{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15829855089226796852(benchmark::State& state) {
  const auto inputs = input_args__15829855089226796852;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15829855089226796852(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15829855089226796852(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15829855089226796852(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15829855089226796852);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15829855089226796852
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17940726976908995396 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17940726976908995396{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(benchmark::State& state) {
  const auto inputs = input_args__17940726976908995396;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17940726976908995396(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17940726976908995396(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17940726976908995396);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17940726976908995396
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13708179973881077096 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__13708179973881077096{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13708179973881077096(benchmark::State& state) {
  const auto inputs = input_args__13708179973881077096;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13708179973881077096(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13708179973881077096(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13708179973881077096(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13708179973881077096);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13708179973881077096
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2834365911804326924 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2834365911804326924{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(benchmark::State& state) {
  const auto inputs = input_args__2834365911804326924;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2834365911804326924(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2834365911804326924);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2834365911804326924
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17550085615010822756{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(benchmark::State& state) {
  const auto inputs = input_args__17550085615010822756;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17550085615010822756(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17550085615010822756);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17550085615010822756
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17189594106826108556 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__17189594106826108556{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(benchmark::State& state) {
  const auto inputs = input_args__17189594106826108556;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17189594106826108556(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17189594106826108556(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17189594106826108556);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17189594106826108556
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16036812853257925732 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16036812853257925732{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(benchmark::State& state) {
  const auto inputs = input_args__16036812853257925732;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16036812853257925732(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16036812853257925732);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16036812853257925732
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6970435345161355412 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      27 /* Input2 , idx = 2*/, \
      27 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6970435345161355412{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 27} /* Input2 */, 
      {"input[3]", 27} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6970435345161355412(benchmark::State& state) {
  const auto inputs = input_args__6970435345161355412;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6970435345161355412(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6970435345161355412(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6970435345161355412(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6970435345161355412);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6970435345161355412
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2834365911804326924 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      13 /* Input2 , idx = 2*/, \
      13 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      384 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__2834365911804326924{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 13} /* Input2 */, 
      {"input[3]", 13} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 384} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(benchmark::State& state) {
  const auto inputs = input_args__2834365911804326924;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2834365911804326924(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2834365911804326924(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2834365911804326924);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2834365911804326924
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16036812853257925732 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16036812853257925732{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(benchmark::State& state) {
  const auto inputs = input_args__16036812853257925732;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16036812853257925732(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16036812853257925732(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16036812853257925732);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16036812853257925732
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      304 /* Input1 , idx = 1*/, \
      100 /* Input2 , idx = 2*/, \
      100 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      304 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6267886414262062652{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 304} /* Input1 */, 
      {"input[2]", 100} /* Input2 */, 
      {"input[3]", 100} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 304} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(benchmark::State& state) {
  const auto inputs = input_args__6267886414262062652;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16466108725633948040 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      109 /* Input2 , idx = 2*/, \
      109 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      96 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16466108725633948040{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 109} /* Input2 */, 
      {"input[3]", 109} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 96} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16466108725633948040(benchmark::State& state) {
  const auto inputs = input_args__16466108725633948040;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16466108725633948040(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16466108725633948040(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16466108725633948040(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16466108725633948040);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16466108725633948040
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__324586340928167452 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      25 /* Input2 , idx = 2*/, \
      25 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__324586340928167452{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 25} /* Input2 */, 
      {"input[3]", 25} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__324586340928167452(benchmark::State& state) {
  const auto inputs = input_args__324586340928167452;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__324586340928167452(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__324586340928167452(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__324586340928167452(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__324586340928167452);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__324586340928167452
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      304 /* Input1 , idx = 1*/, \
      100 /* Input2 , idx = 2*/, \
      100 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      304 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6267886414262062652{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 304} /* Input1 */, 
      {"input[2]", 100} /* Input2 */, 
      {"input[3]", 100} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 304} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(benchmark::State& state) {
  const auto inputs = input_args__6267886414262062652;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      304 /* Input1 , idx = 1*/, \
      100 /* Input2 , idx = 2*/, \
      100 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      304 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6267886414262062652{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 304} /* Input1 */, 
      {"input[2]", 100} /* Input2 */, 
      {"input[3]", 100} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 304} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(benchmark::State& state) {
  const auto inputs = input_args__6267886414262062652;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      304 /* Input1 , idx = 1*/, \
      100 /* Input2 , idx = 2*/, \
      100 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      304 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__6267886414262062652{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 304} /* Input1 */, 
      {"input[2]", 100} /* Input2 */, 
      {"input[3]", 100} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 304} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(benchmark::State& state) {
  const auto inputs = input_args__6267886414262062652;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6267886414262062652(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6267886414262062652);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6267886414262062652
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14481822368851456428 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      7 /* Input2 , idx = 2*/, \
      7 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__14481822368851456428{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14481822368851456428(benchmark::State& state) {
  const auto inputs = input_args__14481822368851456428;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14481822368851456428(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14481822368851456428(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14481822368851456428(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14481822368851456428);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14481822368851456428
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__346143356676603356 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__346143356676603356{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(benchmark::State& state) {
  const auto inputs = input_args__346143356676603356;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__346143356676603356(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__346143356676603356);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__346143356676603356
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3085487822413079056 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3085487822413079056{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(benchmark::State& state) {
  const auto inputs = input_args__3085487822413079056;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3085487822413079056(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3085487822413079056);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3085487822413079056
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13759857992126917680 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__13759857992126917680{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 224} /* Input2 */, 
      {"input[3]", 224} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(benchmark::State& state) {
  const auto inputs = input_args__13759857992126917680;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13759857992126917680(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13759857992126917680);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13759857992126917680
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3804123622389920268 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3804123622389920268{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(benchmark::State& state) {
  const auto inputs = input_args__3804123622389920268;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3804123622389920268(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3804123622389920268);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3804123622389920268
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3085487822413079056 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      56 /* Input2 , idx = 2*/, \
      56 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3085487822413079056{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(benchmark::State& state) {
  const auto inputs = input_args__3085487822413079056;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3085487822413079056(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3085487822413079056(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3085487822413079056);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3085487822413079056
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1085047944580221856 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1085047944580221856{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1085047944580221856(benchmark::State& state) {
  const auto inputs = input_args__1085047944580221856;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1085047944580221856(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1085047944580221856(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1085047944580221856(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1085047944580221856);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1085047944580221856
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3804123622389920268 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      112 /* Input2 , idx = 2*/, \
      112 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3804123622389920268{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(benchmark::State& state) {
  const auto inputs = input_args__3804123622389920268;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3804123622389920268(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3804123622389920268(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3804123622389920268);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3804123622389920268
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13759857992126917680 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      64 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      64 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__13759857992126917680{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 224} /* Input2 */, 
      {"input[3]", 224} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 64} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(benchmark::State& state) {
  const auto inputs = input_args__13759857992126917680;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13759857992126917680(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13759857992126917680(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13759857992126917680);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13759857992126917680
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__346143356676603356 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      512 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      512 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__346143356676603356{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 512} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(benchmark::State& state) {
  const auto inputs = input_args__346143356676603356;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__346143356676603356(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__346143356676603356(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__346143356676603356);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__346143356676603356
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      128 /* Input1 , idx = 1*/, \
      28 /* Input2 , idx = 2*/, \
      28 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      128 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16113597110251631060{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 128} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(benchmark::State& state) {
  const auto inputs = input_args__16113597110251631060;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16113597110251631060(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16113597110251631060);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16113597110251631060
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      128 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      14 /* Input2 , idx = 2*/, \
      14 /* Input3 , idx = 3*/, \
      1 /* BiasShape0 , idx = 4*/, \
      256 /* BiasShape1 , idx = 5*/, \
      1 /* BiasShape2 , idx = 6*/, \
      1 /* BiasShape3 , idx = 7*/, \
      0 /* BatchSize , idx = 8*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 9*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16993911994717052704{{
      {"input[0]", 128} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"bias[0]", 1} /* BiasShape0 */, 
      {"bias[1]", 256} /* BiasShape1 */, 
      {"bias[2]", 1} /* BiasShape2 */, 
      {"bias[3]", 1} /* BiasShape3 */, 
      {"batch_size", 0} /* BatchSize */, 
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "bias[0]", "bias[1]", "bias[2]", "bias[3]", "batch_size", "conv_fwd_type", "conv_bwd_type"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(benchmark::State& state) {
  const auto inputs = input_args__16993911994717052704;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16993911994717052704(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16993911994717052704);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16993911994717052704
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR


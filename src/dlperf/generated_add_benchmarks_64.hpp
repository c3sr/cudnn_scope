#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2497960317851333131 {

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


static const std::map<std::string, double> input_args__2497960317851333131{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2497960317851333131(benchmark::State& state) {
  const auto inputs = input_args__2497960317851333131;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2497960317851333131(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2497960317851333131(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2497960317851333131(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2497960317851333131);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2497960317851333131
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1671298985572953747 {

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


static const std::map<std::string, double> input_args__1671298985572953747{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1671298985572953747(benchmark::State& state) {
  const auto inputs = input_args__1671298985572953747;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1671298985572953747(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1671298985572953747(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1671298985572953747(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1671298985572953747);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1671298985572953747
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17415695309150251183 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__17415695309150251183{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(benchmark::State& state) {
  const auto inputs = input_args__17415695309150251183;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17415695309150251183(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17415695309150251183);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17415695309150251183
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15796279073230916655 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15796279073230916655{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(benchmark::State& state) {
  const auto inputs = input_args__15796279073230916655;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15796279073230916655(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15796279073230916655);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15796279073230916655
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10775998117863710007 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10775998117863710007{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(benchmark::State& state) {
  const auto inputs = input_args__10775998117863710007;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10775998117863710007(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10775998117863710007);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10775998117863710007
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123 {

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


static const std::map<std::string, double> input_args__5075786649210682123{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(benchmark::State& state) {
  const auto inputs = input_args__5075786649210682123;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10775998117863710007 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10775998117863710007{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(benchmark::State& state) {
  const auto inputs = input_args__10775998117863710007;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10775998117863710007(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10775998117863710007(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10775998117863710007);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10775998117863710007
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3231450663242973151 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__3231450663242973151{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(benchmark::State& state) {
  const auto inputs = input_args__3231450663242973151;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3231450663242973151(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3231450663242973151);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3231450663242973151
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11768736874198114367 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__11768736874198114367{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(benchmark::State& state) {
  const auto inputs = input_args__11768736874198114367;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11768736874198114367(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11768736874198114367);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11768736874198114367
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17415695309150251183 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__17415695309150251183{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(benchmark::State& state) {
  const auto inputs = input_args__17415695309150251183;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17415695309150251183(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17415695309150251183(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17415695309150251183);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17415695309150251183
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15796279073230916655 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15796279073230916655{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(benchmark::State& state) {
  const auto inputs = input_args__15796279073230916655;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15796279073230916655(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15796279073230916655(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15796279073230916655);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15796279073230916655
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11768736874198114367 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__11768736874198114367{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(benchmark::State& state) {
  const auto inputs = input_args__11768736874198114367;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11768736874198114367(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11768736874198114367(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11768736874198114367);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11768736874198114367
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6547109684717359979 {

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


static const std::map<std::string, double> input_args__6547109684717359979{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6547109684717359979(benchmark::State& state) {
  const auto inputs = input_args__6547109684717359979;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6547109684717359979(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6547109684717359979(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6547109684717359979(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6547109684717359979);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6547109684717359979
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10929610792980490647{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(benchmark::State& state) {
  const auto inputs = input_args__10929610792980490647;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1916578189461034859 {

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


static const std::map<std::string, double> input_args__1916578189461034859{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(benchmark::State& state) {
  const auto inputs = input_args__1916578189461034859;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1916578189461034859(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1916578189461034859);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1916578189461034859
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3231450663242973151 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__3231450663242973151{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(benchmark::State& state) {
  const auto inputs = input_args__3231450663242973151;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3231450663242973151(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3231450663242973151(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3231450663242973151);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3231450663242973151
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15493786422891976687 {

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


static const std::map<std::string, double> input_args__15493786422891976687{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(benchmark::State& state) {
  const auto inputs = input_args__15493786422891976687;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15493786422891976687(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15493786422891976687);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15493786422891976687
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12474989900348681707 {

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


static const std::map<std::string, double> input_args__12474989900348681707{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(benchmark::State& state) {
  const auto inputs = input_args__12474989900348681707;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12474989900348681707(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12474989900348681707);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12474989900348681707
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123 {

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


static const std::map<std::string, double> input_args__5075786649210682123{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(benchmark::State& state) {
  const auto inputs = input_args__5075786649210682123;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6423813881279281607 {

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


static const std::map<std::string, double> input_args__6423813881279281607{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6423813881279281607(benchmark::State& state) {
  const auto inputs = input_args__6423813881279281607;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6423813881279281607(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6423813881279281607(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6423813881279281607(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6423813881279281607);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6423813881279281607
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16482247821008278695 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__16482247821008278695{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16482247821008278695(benchmark::State& state) {
  const auto inputs = input_args__16482247821008278695;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16482247821008278695(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16482247821008278695(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16482247821008278695(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16482247821008278695);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16482247821008278695
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8613467384027917911{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(benchmark::State& state) {
  const auto inputs = input_args__8613467384027917911;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6893236725603752711 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6893236725603752711{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6893236725603752711(benchmark::State& state) {
  const auto inputs = input_args__6893236725603752711;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6893236725603752711(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6893236725603752711(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6893236725603752711(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6893236725603752711);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6893236725603752711
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11023369562643230843 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__11023369562643230843{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(benchmark::State& state) {
  const auto inputs = input_args__11023369562643230843;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11023369562643230843(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11023369562643230843);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11023369562643230843
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6600513575373186535{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(benchmark::State& state) {
  const auto inputs = input_args__6600513575373186535;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8151214760605040999 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8151214760605040999{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(benchmark::State& state) {
  const auto inputs = input_args__8151214760605040999;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8151214760605040999(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8151214760605040999);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8151214760605040999
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__388391596130063339 {

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


static const std::map<std::string, double> input_args__388391596130063339{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388391596130063339(benchmark::State& state) {
  const auto inputs = input_args__388391596130063339;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__388391596130063339(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388391596130063339(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__388391596130063339(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__388391596130063339);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__388391596130063339
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595 {

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


static const std::map<std::string, double> input_args__4530887567847204595{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(benchmark::State& state) {
  const auto inputs = input_args__4530887567847204595;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1647160980520771155 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__1647160980520771155{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1647160980520771155(benchmark::State& state) {
  const auto inputs = input_args__1647160980520771155;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1647160980520771155(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1647160980520771155(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1647160980520771155(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1647160980520771155);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1647160980520771155
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2009638210945461103 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__2009638210945461103{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2009638210945461103(benchmark::State& state) {
  const auto inputs = input_args__2009638210945461103;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2009638210945461103(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2009638210945461103(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2009638210945461103(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2009638210945461103);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2009638210945461103
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15434113223472886683 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15434113223472886683{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(benchmark::State& state) {
  const auto inputs = input_args__15434113223472886683;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15434113223472886683(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15434113223472886683);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15434113223472886683
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1470320548919624307 {

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


static const std::map<std::string, double> input_args__1470320548919624307{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(benchmark::State& state) {
  const auto inputs = input_args__1470320548919624307;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1470320548919624307(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1470320548919624307);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1470320548919624307
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4195804663003613531 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__4195804663003613531{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4195804663003613531(benchmark::State& state) {
  const auto inputs = input_args__4195804663003613531;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4195804663003613531(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4195804663003613531(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4195804663003613531(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4195804663003613531);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4195804663003613531
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6600513575373186535{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(benchmark::State& state) {
  const auto inputs = input_args__6600513575373186535;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15434113223472886683 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15434113223472886683{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(benchmark::State& state) {
  const auto inputs = input_args__15434113223472886683;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15434113223472886683(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15434113223472886683(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15434113223472886683);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15434113223472886683
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1768424995547516167 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__1768424995547516167{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1768424995547516167(benchmark::State& state) {
  const auto inputs = input_args__1768424995547516167;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1768424995547516167(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1768424995547516167(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1768424995547516167(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1768424995547516167);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1768424995547516167
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595 {

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


static const std::map<std::string, double> input_args__4530887567847204595{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(benchmark::State& state) {
  const auto inputs = input_args__4530887567847204595;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11023369562643230843 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__11023369562643230843{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(benchmark::State& state) {
  const auto inputs = input_args__11023369562643230843;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11023369562643230843(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11023369562643230843(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11023369562643230843);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11023369562643230843
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7677221017521535679 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__7677221017521535679{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(benchmark::State& state) {
  const auto inputs = input_args__7677221017521535679;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7677221017521535679(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7677221017521535679);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7677221017521535679
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15493786422891976687 {

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


static const std::map<std::string, double> input_args__15493786422891976687{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(benchmark::State& state) {
  const auto inputs = input_args__15493786422891976687;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15493786422891976687(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15493786422891976687(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15493786422891976687);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15493786422891976687
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8151214760605040999 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8151214760605040999{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(benchmark::State& state) {
  const auto inputs = input_args__8151214760605040999;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8151214760605040999(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8151214760605040999(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8151214760605040999);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8151214760605040999
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1470320548919624307 {

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


static const std::map<std::string, double> input_args__1470320548919624307{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(benchmark::State& state) {
  const auto inputs = input_args__1470320548919624307;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1470320548919624307(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1470320548919624307(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1470320548919624307);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1470320548919624307
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1389879446669966203 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__1389879446669966203{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1389879446669966203(benchmark::State& state) {
  const auto inputs = input_args__1389879446669966203;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1389879446669966203(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1389879446669966203(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1389879446669966203(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1389879446669966203);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1389879446669966203
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13713789553007113431 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__13713789553007113431{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13713789553007113431(benchmark::State& state) {
  const auto inputs = input_args__13713789553007113431;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13713789553007113431(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13713789553007113431(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13713789553007113431(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13713789553007113431);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13713789553007113431
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10608654301701785095 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10608654301701785095{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10608654301701785095(benchmark::State& state) {
  const auto inputs = input_args__10608654301701785095;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10608654301701785095(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10608654301701785095(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10608654301701785095(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10608654301701785095);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10608654301701785095
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1548574858169882103 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__1548574858169882103{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1548574858169882103(benchmark::State& state) {
  const auto inputs = input_args__1548574858169882103;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1548574858169882103(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1548574858169882103(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1548574858169882103(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1548574858169882103);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1548574858169882103
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6954716400163425723 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6954716400163425723{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6954716400163425723(benchmark::State& state) {
  const auto inputs = input_args__6954716400163425723;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6954716400163425723(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6954716400163425723(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6954716400163425723(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6954716400163425723);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6954716400163425723
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7677221017521535679 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__7677221017521535679{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(benchmark::State& state) {
  const auto inputs = input_args__7677221017521535679;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7677221017521535679(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7677221017521535679(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7677221017521535679);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7677221017521535679
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595 {

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


static const std::map<std::string, double> input_args__4530887567847204595{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(benchmark::State& state) {
  const auto inputs = input_args__4530887567847204595;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4530887567847204595(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4530887567847204595);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4530887567847204595
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2096574028788148271 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__2096574028788148271{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2096574028788148271(benchmark::State& state) {
  const auto inputs = input_args__2096574028788148271;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2096574028788148271(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2096574028788148271(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2096574028788148271(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2096574028788148271);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2096574028788148271
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3783171347345676955 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__3783171347345676955{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3783171347345676955(benchmark::State& state) {
  const auto inputs = input_args__3783171347345676955;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3783171347345676955(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3783171347345676955(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__3783171347345676955(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__3783171347345676955);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__3783171347345676955
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1916578189461034859 {

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


static const std::map<std::string, double> input_args__1916578189461034859{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(benchmark::State& state) {
  const auto inputs = input_args__1916578189461034859;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1916578189461034859(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__1916578189461034859(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__1916578189461034859);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__1916578189461034859
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6819703267567847043{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(benchmark::State& state) {
  const auto inputs = input_args__6819703267567847043;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10929610792980490647{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(benchmark::State& state) {
  const auto inputs = input_args__10929610792980490647;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6301848377957345939 {

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


static const std::map<std::string, double> input_args__6301848377957345939{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6301848377957345939(benchmark::State& state) {
  const auto inputs = input_args__6301848377957345939;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6301848377957345939(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6301848377957345939(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6301848377957345939(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6301848377957345939);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6301848377957345939
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6523876652904570967 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6523876652904570967{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(benchmark::State& state) {
  const auto inputs = input_args__6523876652904570967;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6523876652904570967(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6523876652904570967);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6523876652904570967
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4913822241876946207 {

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


static const std::map<std::string, double> input_args__4913822241876946207{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4913822241876946207(benchmark::State& state) {
  const auto inputs = input_args__4913822241876946207;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4913822241876946207(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4913822241876946207(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4913822241876946207(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4913822241876946207);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4913822241876946207
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8843286906782517939 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8843286906782517939{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(benchmark::State& state) {
  const auto inputs = input_args__8843286906782517939;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8843286906782517939(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8843286906782517939);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8843286906782517939
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6523876652904570967 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6523876652904570967{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(benchmark::State& state) {
  const auto inputs = input_args__6523876652904570967;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6523876652904570967(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6523876652904570967(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6523876652904570967);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6523876652904570967
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9261206903541434927 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__9261206903541434927{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9261206903541434927(benchmark::State& state) {
  const auto inputs = input_args__9261206903541434927;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9261206903541434927(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9261206903541434927(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9261206903541434927(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9261206903541434927);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9261206903541434927
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17572911784290768115 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__17572911784290768115{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17572911784290768115(benchmark::State& state) {
  const auto inputs = input_args__17572911784290768115;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17572911784290768115(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17572911784290768115(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17572911784290768115(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17572911784290768115);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17572911784290768115
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8057436683031808787{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(benchmark::State& state) {
  const auto inputs = input_args__8057436683031808787;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5790185427397383067{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(benchmark::State& state) {
  const auto inputs = input_args__5790185427397383067;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14560246801989747511 {

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


static const std::map<std::string, double> input_args__14560246801989747511{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14560246801989747511(benchmark::State& state) {
  const auto inputs = input_args__14560246801989747511;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14560246801989747511(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14560246801989747511(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14560246801989747511(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14560246801989747511);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14560246801989747511
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14141639641660837987 {

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


static const std::map<std::string, double> input_args__14141639641660837987{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14141639641660837987(benchmark::State& state) {
  const auto inputs = input_args__14141639641660837987;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14141639641660837987(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14141639641660837987(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14141639641660837987(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14141639641660837987);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14141639641660837987
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14012177330143166191 {

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


static const std::map<std::string, double> input_args__14012177330143166191{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14012177330143166191(benchmark::State& state) {
  const auto inputs = input_args__14012177330143166191;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14012177330143166191(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14012177330143166191(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14012177330143166191(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14012177330143166191);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14012177330143166191
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6819703267567847043{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(benchmark::State& state) {
  const auto inputs = input_args__6819703267567847043;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8305152223983658263 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8305152223983658263{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8305152223983658263(benchmark::State& state) {
  const auto inputs = input_args__8305152223983658263;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8305152223983658263(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8305152223983658263(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8305152223983658263(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8305152223983658263);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8305152223983658263
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8703580306532629775 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8703580306532629775{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8703580306532629775(benchmark::State& state) {
  const auto inputs = input_args__8703580306532629775;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8703580306532629775(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8703580306532629775(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8703580306532629775(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8703580306532629775);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8703580306532629775
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17843907923829361171 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__17843907923829361171{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17843907923829361171(benchmark::State& state) {
  const auto inputs = input_args__17843907923829361171;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17843907923829361171(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17843907923829361171(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17843907923829361171(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17843907923829361171);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17843907923829361171
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459 {

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


static const std::map<std::string, double> input_args__9920469381430914459{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(benchmark::State& state) {
  const auto inputs = input_args__9920469381430914459;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12515871961643311531 {

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


static const std::map<std::string, double> input_args__12515871961643311531{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(benchmark::State& state) {
  const auto inputs = input_args__12515871961643311531;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12515871961643311531(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12515871961643311531);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12515871961643311531
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16395464265342808451 {

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


static const std::map<std::string, double> input_args__16395464265342808451{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16395464265342808451(benchmark::State& state) {
  const auto inputs = input_args__16395464265342808451;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16395464265342808451(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16395464265342808451(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__16395464265342808451(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__16395464265342808451);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__16395464265342808451
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6819703267567847043{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(benchmark::State& state) {
  const auto inputs = input_args__6819703267567847043;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2320125877254945891 {

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


static const std::map<std::string, double> input_args__2320125877254945891{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320125877254945891(benchmark::State& state) {
  const auto inputs = input_args__2320125877254945891;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2320125877254945891(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320125877254945891(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2320125877254945891(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2320125877254945891);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2320125877254945891
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2061022041506789131 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__2061022041506789131{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2061022041506789131(benchmark::State& state) {
  const auto inputs = input_args__2061022041506789131;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2061022041506789131(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2061022041506789131(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2061022041506789131(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2061022041506789131);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2061022041506789131
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13319719511418986507 {

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


static const std::map<std::string, double> input_args__13319719511418986507{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(benchmark::State& state) {
  const auto inputs = input_args__13319719511418986507;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13319719511418986507(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13319719511418986507);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13319719511418986507
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11838052863373774351 {

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


static const std::map<std::string, double> input_args__11838052863373774351{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11838052863373774351(benchmark::State& state) {
  const auto inputs = input_args__11838052863373774351;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11838052863373774351(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11838052863373774351(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11838052863373774351(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11838052863373774351);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11838052863373774351
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__826664843024910343 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__826664843024910343{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__826664843024910343(benchmark::State& state) {
  const auto inputs = input_args__826664843024910343;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__826664843024910343(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__826664843024910343(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__826664843024910343(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__826664843024910343);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__826664843024910343
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5790185427397383067{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(benchmark::State& state) {
  const auto inputs = input_args__5790185427397383067;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2654699922439978987 {

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


static const std::map<std::string, double> input_args__2654699922439978987{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2654699922439978987(benchmark::State& state) {
  const auto inputs = input_args__2654699922439978987;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2654699922439978987(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2654699922439978987(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2654699922439978987(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2654699922439978987);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2654699922439978987
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8843286906782517939 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8843286906782517939{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(benchmark::State& state) {
  const auto inputs = input_args__8843286906782517939;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8843286906782517939(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8843286906782517939(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8843286906782517939);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8843286906782517939
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411 {

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


static const std::map<std::string, double> input_args__9750921417352673411{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(benchmark::State& state) {
  const auto inputs = input_args__9750921417352673411;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8057436683031808787{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(benchmark::State& state) {
  const auto inputs = input_args__8057436683031808787;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459 {

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


static const std::map<std::string, double> input_args__9920469381430914459{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(benchmark::State& state) {
  const auto inputs = input_args__9920469381430914459;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8853386874893498139 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8853386874893498139{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(benchmark::State& state) {
  const auto inputs = input_args__8853386874893498139;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8853386874893498139(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8853386874893498139);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8853386874893498139
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8853386874893498139 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8853386874893498139{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(benchmark::State& state) {
  const auto inputs = input_args__8853386874893498139;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8853386874893498139(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8853386874893498139(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8853386874893498139);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8853386874893498139
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12664598820006499863 {

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


static const std::map<std::string, double> input_args__12664598820006499863{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12664598820006499863(benchmark::State& state) {
  const auto inputs = input_args__12664598820006499863;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12664598820006499863(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12664598820006499863(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12664598820006499863(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12664598820006499863);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12664598820006499863
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13641037661054972095 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__13641037661054972095{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13641037661054972095(benchmark::State& state) {
  const auto inputs = input_args__13641037661054972095;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13641037661054972095(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13641037661054972095(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13641037661054972095(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13641037661054972095);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13641037661054972095
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14669029974537985043 {

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


static const std::map<std::string, double> input_args__14669029974537985043{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14669029974537985043(benchmark::State& state) {
  const auto inputs = input_args__14669029974537985043;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14669029974537985043(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14669029974537985043(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14669029974537985043(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14669029974537985043);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14669029974537985043
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2353885194983268619 {

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


static const std::map<std::string, double> input_args__2353885194983268619{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2353885194983268619(benchmark::State& state) {
  const auto inputs = input_args__2353885194983268619;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2353885194983268619(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2353885194983268619(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2353885194983268619(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2353885194983268619);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2353885194983268619
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459 {

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


static const std::map<std::string, double> input_args__9920469381430914459{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(benchmark::State& state) {
  const auto inputs = input_args__9920469381430914459;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459 {

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


static const std::map<std::string, double> input_args__9920469381430914459{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(benchmark::State& state) {
  const auto inputs = input_args__9920469381430914459;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9920469381430914459(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9920469381430914459);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9920469381430914459
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5790185427397383067{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(benchmark::State& state) {
  const auto inputs = input_args__5790185427397383067;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5790185427397383067(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5790185427397383067);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5790185427397383067
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12116611631805018399 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12116611631805018399{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12116611631805018399(benchmark::State& state) {
  const auto inputs = input_args__12116611631805018399;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12116611631805018399(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12116611631805018399(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12116611631805018399(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12116611631805018399);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12116611631805018399
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14740280099752866315 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__14740280099752866315{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14740280099752866315(benchmark::State& state) {
  const auto inputs = input_args__14740280099752866315;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14740280099752866315(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14740280099752866315(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__14740280099752866315(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__14740280099752866315);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__14740280099752866315
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13319719511418986507 {

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


static const std::map<std::string, double> input_args__13319719511418986507{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(benchmark::State& state) {
  const auto inputs = input_args__13319719511418986507;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13319719511418986507(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13319719511418986507(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13319719511418986507);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13319719511418986507
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6819703267567847043{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(benchmark::State& state) {
  const auto inputs = input_args__6819703267567847043;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6819703267567847043(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6819703267567847043);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6819703267567847043
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12515871961643311531 {

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


static const std::map<std::string, double> input_args__12515871961643311531{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(benchmark::State& state) {
  const auto inputs = input_args__12515871961643311531;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12515871961643311531(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12515871961643311531(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12515871961643311531);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12515871961643311531
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411 {

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


static const std::map<std::string, double> input_args__9750921417352673411{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(benchmark::State& state) {
  const auto inputs = input_args__9750921417352673411;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12526034343564811267 {

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


static const std::map<std::string, double> input_args__12526034343564811267{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(benchmark::State& state) {
  const auto inputs = input_args__12526034343564811267;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12526034343564811267(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12526034343564811267);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12526034343564811267
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411 {

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


static const std::map<std::string, double> input_args__9750921417352673411{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(benchmark::State& state) {
  const auto inputs = input_args__9750921417352673411;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9750921417352673411(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9750921417352673411);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9750921417352673411
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12526034343564811267 {

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


static const std::map<std::string, double> input_args__12526034343564811267{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(benchmark::State& state) {
  const auto inputs = input_args__12526034343564811267;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12526034343564811267(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12526034343564811267(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12526034343564811267);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12526034343564811267
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13630871705049845015 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__13630871705049845015{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13630871705049845015(benchmark::State& state) {
  const auto inputs = input_args__13630871705049845015;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13630871705049845015(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13630871705049845015(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__13630871705049845015(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__13630871705049845015);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__13630871705049845015
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10929610792980490647{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(benchmark::State& state) {
  const auto inputs = input_args__10929610792980490647;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10929610792980490647(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10929610792980490647);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10929610792980490647
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15884199052224111391 {

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


static const std::map<std::string, double> input_args__15884199052224111391{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15884199052224111391(benchmark::State& state) {
  const auto inputs = input_args__15884199052224111391;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15884199052224111391(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15884199052224111391(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15884199052224111391(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15884199052224111391);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15884199052224111391
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2113007000734965911 {

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


static const std::map<std::string, double> input_args__2113007000734965911{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2113007000734965911(benchmark::State& state) {
  const auto inputs = input_args__2113007000734965911;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2113007000734965911(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2113007000734965911(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__2113007000734965911(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__2113007000734965911);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__2113007000734965911
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9006362746909998967 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__9006362746909998967{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(benchmark::State& state) {
  const auto inputs = input_args__9006362746909998967;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9006362746909998967(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9006362746909998967);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9006362746909998967
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9006362746909998967 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__9006362746909998967{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(benchmark::State& state) {
  const auto inputs = input_args__9006362746909998967;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9006362746909998967(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9006362746909998967(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9006362746909998967);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9006362746909998967
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7823778886714909219 {

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


static const std::map<std::string, double> input_args__7823778886714909219{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7823778886714909219(benchmark::State& state) {
  const auto inputs = input_args__7823778886714909219;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7823778886714909219(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7823778886714909219(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7823778886714909219(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7823778886714909219);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7823778886714909219
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7851889146541154187 {

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


static const std::map<std::string, double> input_args__7851889146541154187{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7851889146541154187(benchmark::State& state) {
  const auto inputs = input_args__7851889146541154187;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7851889146541154187(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7851889146541154187(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__7851889146541154187(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__7851889146541154187);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__7851889146541154187
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15329916758658875767 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15329916758658875767{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15329916758658875767(benchmark::State& state) {
  const auto inputs = input_args__15329916758658875767;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15329916758658875767(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15329916758658875767(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15329916758658875767(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15329916758658875767);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15329916758658875767
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8789843528678466435 {

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


static const std::map<std::string, double> input_args__8789843528678466435{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8789843528678466435(benchmark::State& state) {
  const auto inputs = input_args__8789843528678466435;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8789843528678466435(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8789843528678466435(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8789843528678466435(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8789843528678466435);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8789843528678466435
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123 {

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


static const std::map<std::string, double> input_args__5075786649210682123{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(benchmark::State& state) {
  const auto inputs = input_args__5075786649210682123;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5075786649210682123(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5075786649210682123);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5075786649210682123
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17543666416907133079 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__17543666416907133079{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17543666416907133079(benchmark::State& state) {
  const auto inputs = input_args__17543666416907133079;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17543666416907133079(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17543666416907133079(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__17543666416907133079(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__17543666416907133079);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__17543666416907133079
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10685597660530547047 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10685597660530547047{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10685597660530547047(benchmark::State& state) {
  const auto inputs = input_args__10685597660530547047;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10685597660530547047(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10685597660530547047(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10685597660530547047(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10685597660530547047);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10685597660530547047
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__6600513575373186535{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(benchmark::State& state) {
  const auto inputs = input_args__6600513575373186535;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__6600513575373186535(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__6600513575373186535);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__6600513575373186535
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12474989900348681707 {

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


static const std::map<std::string, double> input_args__12474989900348681707{{
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(benchmark::State& state) {
  const auto inputs = input_args__12474989900348681707;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12474989900348681707(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12474989900348681707(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12474989900348681707);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12474989900348681707
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12740038299644929599 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12740038299644929599{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(benchmark::State& state) {
  const auto inputs = input_args__12740038299644929599;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12740038299644929599(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12740038299644929599);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12740038299644929599
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5548020936302552479 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5548020936302552479{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5548020936302552479(benchmark::State& state) {
  const auto inputs = input_args__5548020936302552479;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5548020936302552479(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5548020936302552479(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5548020936302552479(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5548020936302552479);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5548020936302552479
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12740038299644929599 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12740038299644929599{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(benchmark::State& state) {
  const auto inputs = input_args__12740038299644929599;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12740038299644929599(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12740038299644929599(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12740038299644929599);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12740038299644929599
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4247904771308484611 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__4247904771308484611{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(benchmark::State& state) {
  const auto inputs = input_args__4247904771308484611;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4247904771308484611(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4247904771308484611);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4247904771308484611
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8057436683031808787{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(benchmark::State& state) {
  const auto inputs = input_args__8057436683031808787;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8057436683031808787(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8057436683031808787);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8057436683031808787
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__797483429377908287 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__797483429377908287{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(benchmark::State& state) {
  const auto inputs = input_args__797483429377908287;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__797483429377908287(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__797483429377908287);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__797483429377908287
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4247904771308484611 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__4247904771308484611{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(benchmark::State& state) {
  const auto inputs = input_args__4247904771308484611;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4247904771308484611(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__4247904771308484611(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__4247904771308484611);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__4247904771308484611
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5115138061852107719 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5115138061852107719{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(benchmark::State& state) {
  const auto inputs = input_args__5115138061852107719;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5115138061852107719(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5115138061852107719);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5115138061852107719
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__797483429377908287 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__797483429377908287{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(benchmark::State& state) {
  const auto inputs = input_args__797483429377908287;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__797483429377908287(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__797483429377908287(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__797483429377908287);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__797483429377908287
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12598426063378691619 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12598426063378691619{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(benchmark::State& state) {
  const auto inputs = input_args__12598426063378691619;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12598426063378691619(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12598426063378691619);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12598426063378691619
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12598426063378691619 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12598426063378691619{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(benchmark::State& state) {
  const auto inputs = input_args__12598426063378691619;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12598426063378691619(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__12598426063378691619(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__12598426063378691619);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__12598426063378691619
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15202818011084511759{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(benchmark::State& state) {
  const auto inputs = input_args__15202818011084511759;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5115138061852107719 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__5115138061852107719{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(benchmark::State& state) {
  const auto inputs = input_args__5115138061852107719;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5115138061852107719(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__5115138061852107719(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__5115138061852107719);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__5115138061852107719
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8613467384027917911{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(benchmark::State& state) {
  const auto inputs = input_args__8613467384027917911;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15202818011084511759{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(benchmark::State& state) {
  const auto inputs = input_args__15202818011084511759;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11019464295906112187 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__11019464295906112187{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11019464295906112187(benchmark::State& state) {
  const auto inputs = input_args__11019464295906112187;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11019464295906112187(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11019464295906112187(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__11019464295906112187(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__11019464295906112187);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__11019464295906112187
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9280507739717364207 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__9280507739717364207{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(benchmark::State& state) {
  const auto inputs = input_args__9280507739717364207;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9280507739717364207(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9280507739717364207);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9280507739717364207
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10652904636832829619 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10652904636832829619{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10652904636832829619(benchmark::State& state) {
  const auto inputs = input_args__10652904636832829619;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10652904636832829619(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10652904636832829619(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10652904636832829619(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10652904636832829619);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10652904636832829619
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10018712885216468883 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__10018712885216468883{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10018712885216468883(benchmark::State& state) {
  const auto inputs = input_args__10018712885216468883;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10018712885216468883(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10018712885216468883(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__10018712885216468883(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__10018712885216468883);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__10018712885216468883
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15202818011084511759{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(benchmark::State& state) {
  const auto inputs = input_args__15202818011084511759;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9280507739717364207 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__9280507739717364207{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(benchmark::State& state) {
  const auto inputs = input_args__9280507739717364207;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9280507739717364207(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__9280507739717364207(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__9280507739717364207);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__9280507739717364207
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__15202818011084511759{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(benchmark::State& state) {
  const auto inputs = input_args__15202818011084511759;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__15202818011084511759(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__15202818011084511759);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__15202818011084511759
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      64 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__8613467384027917911{{
      {"input[0]", 64} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(benchmark::State& state) {
  const auto inputs = input_args__8613467384027917911;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911(benchmark::State& state) {
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_0__8613467384027917911(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK_CUDNN(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_0__8613467384027917911);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_0__8613467384027917911
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR


#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__14316274289877239219 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14316274289877239219{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__14316274289877239219(benchmark::State& state) {
  const auto inputs = input_args__14316274289877239219;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__4632184029031234066 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__4632184029031234066{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__4632184029031234066(benchmark::State& state) {
  const auto inputs = input_args__4632184029031234066;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__10450061830298950609 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      1 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__10450061830298950609{{
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
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__10450061830298950609(benchmark::State& state) {
  const auto inputs = input_args__10450061830298950609;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__1803548454571862708 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      0 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1803548454571862708{{
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
      {"batch_size", 0} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__1803548454571862708(benchmark::State& state) {
  const auto inputs = input_args__1803548454571862708;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__1803548454571862708(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__1803548454571862708(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__1803548454571862708);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__1803548454571862708
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUDNN_DROPOUT_FWD
namespace LAYER_CUDNN_DROPOUT_FWD__BatchSize_1__13972583525817633749 {

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13972583525817633749{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__BatchSize_1__13972583525817633749(benchmark::State& state) {
  const auto inputs = input_args__13972583525817633749;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__6095698385120626904 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6095698385120626904{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__6095698385120626904(benchmark::State& state) {
  const auto inputs = input_args__6095698385120626904;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_1__13884985811540362052 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__13884985811540362052{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__13884985811540362052(benchmark::State& state) {
  const auto inputs = input_args__13884985811540362052;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__13884985811540362052(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__13884985811540362052(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__13884985811540362052)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_1__6140815538730566844 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 , idx = 0*/, \
      9216 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6140815538730566844{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 9216} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__6140815538730566844(benchmark::State& state) {
  const auto inputs = input_args__6140815538730566844;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__6140815538730566844(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__6140815538730566844(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__6140815538730566844)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__10049769413595140023 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10049769413595140023{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__10049769413595140023(benchmark::State& state) {
  const auto inputs = input_args__10049769413595140023;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__10049769413595140023(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__10049769413595140023(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__10049769413595140023);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__10049769413595140023
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_DROPOUT_BWD
namespace LAYER_CUDNN_DROPOUT_BWD__BatchSize_1__15117317512501897831 {

#define BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15117317512501897831{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_ADD_COUNTERS__BatchSize_1__15117317512501897831(benchmark::State& state) {
  const auto inputs = input_args__15117317512501897831;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_DROPOUT_BWD_FLOAT32__BatchSize_1__15117317512501897831(benchmark::State& state) {
  LAYER_CUDNN_DROPOUT_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_ADD_COUNTERS__BatchSize_1__15117317512501897831(state);
}




BENCHMARK(LAYER_CUDNN_DROPOUT_BWD_FLOAT32__BatchSize_1__15117317512501897831)->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUDNN_DROPOUT_BWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__3204589935015321621 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3204589935015321621{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__3204589935015321621(benchmark::State& state) {
  const auto inputs = input_args__3204589935015321621;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__6427561320090618240 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6427561320090618240{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__6427561320090618240(benchmark::State& state) {
  const auto inputs = input_args__6427561320090618240;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__6427561320090618240(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__6427561320090618240(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__6427561320090618240);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__6427561320090618240
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__3564279698469891124 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      0 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__3564279698469891124{{
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
      {"batch_size", 0} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__3564279698469891124(benchmark::State& state) {
  const auto inputs = input_args__3564279698469891124;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__3564279698469891124(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__3564279698469891124(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__3564279698469891124);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__3564279698469891124
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1506774461810377604 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1506774461810377604{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1506774461810377604(benchmark::State& state) {
  const auto inputs = input_args__1506774461810377604;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__4782863391492528584 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__4782863391492528584{{
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
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__4782863391492528584(benchmark::State& state) {
  const auto inputs = input_args__4782863391492528584;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__4782863391492528584(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__4782863391492528584(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__4782863391492528584);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__4782863391492528584
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__13360675469753765680 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      256 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13360675469753765680{{
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
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 256} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__13360675469753765680(benchmark::State& state) {
  const auto inputs = input_args__13360675469753765680;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__13360675469753765680(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__13360675469753765680(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__13360675469753765680);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__13360675469753765680
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__12906977380562457448 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__12906977380562457448{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__12906977380562457448(benchmark::State& state) {
  const auto inputs = input_args__12906977380562457448;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__12906977380562457448(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__12906977380562457448(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__12906977380562457448);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__12906977380562457448
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__12777390182010418768 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__12777390182010418768{{
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
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__12777390182010418768(benchmark::State& state) {
  const auto inputs = input_args__12777390182010418768;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__12777390182010418768(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__12777390182010418768(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__12777390182010418768);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__12777390182010418768
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__11309899006365680528 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      384 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11309899006365680528{{
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
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 384} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__11309899006365680528(benchmark::State& state) {
  const auto inputs = input_args__11309899006365680528;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__11309899006365680528(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__11309899006365680528(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__11309899006365680528);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__11309899006365680528
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__4624220238853438704 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__4624220238853438704{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__4624220238853438704(benchmark::State& state) {
  const auto inputs = input_args__4624220238853438704;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__4624220238853438704(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__4624220238853438704(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__4624220238853438704);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__4624220238853438704
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__12963095838654688294 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__12963095838654688294{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__12963095838654688294(benchmark::State& state) {
  const auto inputs = input_args__12963095838654688294;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__12963095838654688294(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__12963095838654688294(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__12963095838654688294);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__12963095838654688294
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__6678068065087654111 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeData /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__6678068065087654111{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeData} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__6678068065087654111(benchmark::State& state) {
  const auto inputs = input_args__6678068065087654111;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__6678068065087654111(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__6678068065087654111(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__6678068065087654111);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__6678068065087654111
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__8400110516968425321 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeFilter /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__8400110516968425321{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeFilter} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__8400110516968425321(benchmark::State& state) {
  const auto inputs = input_args__8400110516968425321;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__8400110516968425321(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__8400110516968425321(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_3)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__8400110516968425321);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__8400110516968425321
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__13549352985067395497 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeBias /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13549352985067395497{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeBias} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__13549352985067395497(benchmark::State& state) {
  const auto inputs = input_args__13549352985067395497;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__13549352985067395497(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__13549352985067395497(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__13549352985067395497);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__13549352985067395497
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__14629541004432344299 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14629541004432344299{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__14629541004432344299(benchmark::State& state) {
  const auto inputs = input_args__14629541004432344299;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__14629541004432344299(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__14629541004432344299(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__14629541004432344299);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__14629541004432344299
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__6561035122776094541 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__6561035122776094541{{
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
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__6561035122776094541(benchmark::State& state) {
  const auto inputs = input_args__6561035122776094541;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__6561035122776094541(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__6561035122776094541(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__6561035122776094541);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__6561035122776094541
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__1446066615795844749 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      96 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__1446066615795844749{{
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
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 96} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__1446066615795844749(benchmark::State& state) {
  const auto inputs = input_args__1446066615795844749;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__1446066615795844749(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__1446066615795844749(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__1446066615795844749);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__1446066615795844749
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__12282325314266381805 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__12282325314266381805{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__12282325314266381805(benchmark::State& state) {
  const auto inputs = input_args__12282325314266381805;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__12282325314266381805(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__12282325314266381805(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__12282325314266381805);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__12282325314266381805
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_1__1263013196612366791 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1263013196612366791{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__1263013196612366791(benchmark::State& state) {
  const auto inputs = input_args__1263013196612366791;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__13182688699894942146 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeData /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13182688699894942146{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeData} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__13182688699894942146(benchmark::State& state) {
  const auto inputs = input_args__13182688699894942146;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__13182688699894942146(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__13182688699894942146(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__13182688699894942146);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__13182688699894942146
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__11442558139007256180 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeFilter /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11442558139007256180{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeFilter} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__11442558139007256180(benchmark::State& state) {
  const auto inputs = input_args__11442558139007256180;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__11442558139007256180(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__11442558139007256180(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_3)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__11442558139007256180);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__11442558139007256180
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__6221699531259992244 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      3 /* Input1 , idx = 1*/, \
      224 /* Input2 , idx = 2*/, \
      224 /* Input3 , idx = 3*/, \
      96 /* FilterCount , idx = 4*/, \
      11 /* FilterHeight , idx = 5*/, \
      11 /* FilterWidth , idx = 6*/, \
      0 /* PadHeight , idx = 7*/, \
      0 /* PadWidth , idx = 8*/, \
      4 /* StrideHeight , idx = 9*/, \
      4 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeBias /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__6221699531259992244{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeBias} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__6221699531259992244(benchmark::State& state) {
  const auto inputs = input_args__6221699531259992244;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__6221699531259992244(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__6221699531259992244(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__6221699531259992244);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__6221699531259992244
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__5216557022179604397 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      1000 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5216557022179604397{{
      {"input[0]", 1000} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__5216557022179604397(benchmark::State& state) {
  const auto inputs = input_args__5216557022179604397;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__6422083737256113607 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeData /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__6422083737256113607{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeData} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__6422083737256113607(benchmark::State& state) {
  const auto inputs = input_args__6422083737256113607;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__6422083737256113607(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__6422083737256113607(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__6422083737256113607);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__6422083737256113607
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__8151973434209188465 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeFilter /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__8151973434209188465{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeFilter} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__8151973434209188465(benchmark::State& state) {
  const auto inputs = input_args__8151973434209188465;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__8151973434209188465(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__8151973434209188465(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_3)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__8151973434209188465);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__8151973434209188465
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__13383124035530564785 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeBias /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13383124035530564785{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeBias} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__13383124035530564785(benchmark::State& state) {
  const auto inputs = input_args__13383124035530564785;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__13383124035530564785(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__13383124035530564785(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__13383124035530564785);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__13383124035530564785
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__1852230809112299928 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__1852230809112299928{{
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
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__1852230809112299928(benchmark::State& state) {
  const auto inputs = input_args__1852230809112299928;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__1852230809112299928(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__1852230809112299928(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__1852230809112299928);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__1852230809112299928
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__16338762029365944160 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      256 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16338762029365944160{{
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
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 256} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__16338762029365944160(benchmark::State& state) {
  const auto inputs = input_args__16338762029365944160;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__16338762029365944160(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__16338762029365944160(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__16338762029365944160);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__16338762029365944160
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__16774392908003459896 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16774392908003459896{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__16774392908003459896(benchmark::State& state) {
  const auto inputs = input_args__16774392908003459896;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__16774392908003459896(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__16774392908003459896(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__16774392908003459896);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__16774392908003459896
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_1__15402659136871808490 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS() \
  Args({{ \
      4096 /* Input0 , idx = 0*/, \
      9216 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15402659136871808490{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 9216} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_1__15402659136871808490(benchmark::State& state) {
  const auto inputs = input_args__15402659136871808490;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__10239435840569736692 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10239435840569736692{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__10239435840569736692(benchmark::State& state) {
  const auto inputs = input_args__10239435840569736692;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__10239435840569736692(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_1__10239435840569736692(state);
}

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_1__10239435840569736692);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_1__10239435840569736692
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_FWD
namespace LAYER_CUDNN_SOFTMAX_FWD__BatchSize_1__17337716149880998901 {

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17337716149880998901{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_ADD_COUNTERS__BatchSize_1__17337716149880998901(benchmark::State& state) {
  const auto inputs = input_args__17337716149880998901;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_BWD
namespace LAYER_CUDNN_SOFTMAX_BWD__BatchSize_1__17588264238056957910 {

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      1000 /* Input1 , idx = 1*/, \
      -1 /* Input2 , idx = 2*/, \
      -1 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__17588264238056957910{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__BatchSize_1__17588264238056957910(benchmark::State& state) {
  const auto inputs = input_args__17588264238056957910;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__BatchSize_1__17588264238056957910(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<float, softmax_algorithm, softmax_mode>(state);
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__BatchSize_1__17588264238056957910(state);
}

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0(b, SOFTMAX_MODE) \
 BENCHMARK_TEMPLATE(b, SOFTMAX_MODE, CUDNN_SOFTMAX_MODE_INSTANCE)\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES()\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS()\
  ->UseManualTime(); \
 BENCHMARK_TEMPLATE(b, SOFTMAX_MODE, CUDNN_SOFTMAX_MODE_CHANNEL)\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES()\
  ->BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS()\
  ->UseManualTime(); \


#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD(b)                                                                                             \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0(b, CUDNN_SOFTMAX_FAST);                                                                    \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0(b, CUDNN_SOFTMAX_ACCURATE);                                                                    \
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0(b, CUDNN_SOFTMAX_LOG)

BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD(LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__BatchSize_1__17588264238056957910);

#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD
}
#endif // ENABLE_LAYER_CUDNN_SOFTMAX_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_1__14455812820358565627 {

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS() \
  Args({{ \
      1000 /* Input0 , idx = 0*/, \
      4096 /* Input1 , idx = 1*/, \
      1 /* Input2 , idx = 2*/, \
      1 /* Input3 , idx = 3*/, \
      1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      0 /* Input6 , idx = 6*/, \
      0 /* Input7 , idx = 7*/, \
      1 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14455812820358565627{{
      {"input[0]", 1000} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 1} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__14455812820358565627(benchmark::State& state) {
  const auto inputs = input_args__14455812820358565627;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__14455812820358565627(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_1__14455812820358565627(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_1__14455812820358565627)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__11276959645638330634 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      0 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__11276959645638330634{{
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
      {"batch_size", 0} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__11276959645638330634(benchmark::State& state) {
  const auto inputs = input_args__11276959645638330634;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__11276959645638330634(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__11276959645638330634(state);
  }
  
#define BENCHMARK_LAYER_CUDNN_POOLING_BWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_POOLING_MAX_DETERMINISTIC)->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__11276959645638330634);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__11276959645638330634
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__13033690050336115528 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConv /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13033690050336115528{{
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
      {"conv_fwd_type", ConvFwdTypeConv} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__13033690050336115528(benchmark::State& state) {
  const auto inputs = input_args__13033690050336115528;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__13033690050336115528(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_1__13033690050336115528(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_1__13033690050336115528);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_1__13033690050336115528
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__11044591683737026184 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeBias /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      384 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11044591683737026184{{
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
      {"conv_fwd_type", ConvFwdTypeBias} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 384} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__11044591683737026184(benchmark::State& state) {
  const auto inputs = input_args__11044591683737026184;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__11044591683737026184(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_1__11044591683737026184(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_1__11044591683737026184);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_1__11044591683737026184
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__5016472775978598888 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      384 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeConvFusedActivation /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeUndefined /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5016472775978598888{{
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
      {"conv_fwd_type", ConvFwdTypeConvFusedActivation} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeUndefined} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__5016472775978598888(benchmark::State& state) {
  const auto inputs = input_args__5016472775978598888;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__5016472775978598888(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_1__5016472775978598888(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_PRECOMP_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_GEMM, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_DIRECT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_FFT_TILING, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_SIGMOID)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_TANH)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_CLIPPED_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_ELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_RELU)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_FWD_ALGO_WINOGRAD_NONFUSED, CUDNN_ACTIVATION_IDENTITY)->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_1__5016472775978598888);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_1__5016472775978598888
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__12654850796534671175 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeData /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__12654850796534671175{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeData} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__12654850796534671175(benchmark::State& state) {
  const auto inputs = input_args__12654850796534671175;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__12654850796534671175(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__12654850796534671175(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__12654850796534671175);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__12654850796534671175
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__9773229314337646833 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeFilter /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__9773229314337646833{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeFilter} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__9773229314337646833(benchmark::State& state) {
  const auto inputs = input_args__9773229314337646833;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__9773229314337646833(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__9773229314337646833(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_3)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__9773229314337646833);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__9773229314337646833
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__5709073961560094257 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      3 /* FilterHeight , idx = 5*/, \
      3 /* FilterWidth , idx = 6*/, \
      1 /* PadHeight , idx = 7*/, \
      1 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeBias /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5709073961560094257{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeBias} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__5709073961560094257(benchmark::State& state) {
  const auto inputs = input_args__5709073961560094257;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__5709073961560094257(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__5709073961560094257(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__5709073961560094257);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__5709073961560094257
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__17603261643096667927 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeData /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__17603261643096667927{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeData} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__17603261643096667927(benchmark::State& state) {
  const auto inputs = input_args__17603261643096667927;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__17603261643096667927(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_1__17603261643096667927(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_DATA_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_1__17603261643096667927);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_1__17603261643096667927
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__15885650219066079393 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeFilter /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__15885650219066079393{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeFilter} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__15885650219066079393(benchmark::State& state) {
  const auto inputs = input_args__15885650219066079393;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__15885650219066079393(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_1__15885650219066079393(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(b) \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_0)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_1)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_3)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_WINOGRAD_NONFUSED)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
   BENCHMARK_TEMPLATE(b, CUDNN_CONVOLUTION_BWD_FILTER_ALGO_FFT_TILING)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS()->\
    UseManualTime(); \
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_1__15885650219066079393);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_1__15885650219066079393
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__1508391928817067617 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      256 /* FilterCount , idx = 4*/, \
      5 /* FilterHeight , idx = 5*/, \
      5 /* FilterWidth , idx = 6*/, \
      2 /* PadHeight , idx = 7*/, \
      2 /* PadWidth , idx = 8*/, \
      1 /* StrideHeight , idx = 9*/, \
      1 /* StrideWidth , idx = 10*/, \
      1 /* DilationWidth , idx = 11*/, \
      1 /* DilationHeight , idx = 12*/, \
      ConvFwdTypeUndefined /* ConvFwdType , idx = 13*/, \
      ConvBwdTypeBias /* ConvBwdType , idx = 14*/, \
      1 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__1508391928817067617{{
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
      {"conv_fwd_type", ConvFwdTypeUndefined} /* ConvFwdType */, 
      {"conv_bwd_type", ConvBwdTypeBias} /* ConvBwdType */, 
      {"batch_size", 1} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__1508391928817067617(benchmark::State& state) {
  const auto inputs = input_args__1508391928817067617;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__1508391928817067617(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_1__1508391928817067617(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_1__1508391928817067617);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_1__1508391928817067617
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__13364347910319021393 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      1 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__13364347910319021393{{
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
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__13364347910319021393(benchmark::State& state) {
  const auto inputs = input_args__13364347910319021393;
  state.counters.insert(inputs.begin(), inputs.end());
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
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_1__1476794823864465519 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      1 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__1476794823864465519{{
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
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_1__1476794823864465519(benchmark::State& state) {
  const auto inputs = input_args__1476794823864465519;
  state.counters.insert(inputs.begin(), inputs.end());
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

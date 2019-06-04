#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__15488619713118995242 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__15488619713118995242{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__15488619713118995242(benchmark::State& state) {
  const auto inputs = input_args__15488619713118995242;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__15488619713118995242(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__15488619713118995242(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__15488619713118995242);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__15488619713118995242
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_2__1899783961886106634 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1899783961886106634{{
      {"input[0]", 1000} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__1899783961886106634(benchmark::State& state) {
  const auto inputs = input_args__1899783961886106634;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__1899783961886106634(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__1899783961886106634(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__1899783961886106634)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__8914396678609051737 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__8914396678609051737{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__8914396678609051737(benchmark::State& state) {
  const auto inputs = input_args__8914396678609051737;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__8914396678609051737(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__8914396678609051737(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__8914396678609051737);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__8914396678609051737
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3826760225477232124 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3826760225477232124{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3826760225477232124(benchmark::State& state) {
  const auto inputs = input_args__3826760225477232124;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__3826760225477232124(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__3826760225477232124(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__3826760225477232124);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__3826760225477232124
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_2__9750455696415023279 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9750455696415023279{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 9216} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__9750455696415023279(benchmark::State& state) {
  const auto inputs = input_args__9750455696415023279;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__9750455696415023279(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__9750455696415023279(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__9750455696415023279)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__16657804228006183202 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      1 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      2 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__16657804228006183202{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 1} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__16657804228006183202(benchmark::State& state) {
  const auto inputs = input_args__16657804228006183202;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__16657804228006183202(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__16657804228006183202(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__16657804228006183202);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__16657804228006183202
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_DROPOUT_FWD
namespace LAYER_CUDNN_DROPOUT_FWD__BatchSize_2__1118422203442273626 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1118422203442273626{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__BatchSize_2__1118422203442273626(benchmark::State& state) {
  const auto inputs = input_args__1118422203442273626;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_DROPOUT_FWD_FLOAT32__BatchSize_2__1118422203442273626(benchmark::State& state) {
  LAYER_CUDNN_DROPOUT_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__BatchSize_2__1118422203442273626(state);
}




BENCHMARK(LAYER_CUDNN_DROPOUT_FWD_FLOAT32__BatchSize_2__1118422203442273626)->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUDNN_DROPOUT_FWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__3767272796165649902 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__3767272796165649902{{
      {"input[0]", 2} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__3767272796165649902(benchmark::State& state) {
  const auto inputs = input_args__3767272796165649902;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__3767272796165649902(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__3767272796165649902(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__3767272796165649902);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__3767272796165649902
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_FWD
namespace LAYER_CUDNN_SOFTMAX_FWD__BatchSize_2__520896048550294790 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__520896048550294790{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_ADD_COUNTERS__BatchSize_2__520896048550294790(benchmark::State& state) {
  const auto inputs = input_args__520896048550294790;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_FWD_FLOAT32__BatchSize_2__520896048550294790(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_FWD_Impl<float, softmax_algorithm, softmax_mode>(state);
  BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_ADD_COUNTERS__BatchSize_2__520896048550294790(state);
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

BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD(LAYER_CUDNN_SOFTMAX_FWD_FLOAT32__BatchSize_2__520896048550294790);

#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD0
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_FWD
}
#endif // ENABLE_LAYER_CUDNN_SOFTMAX_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_2__3161367659739610643 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__3161367659739610643{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__3161367659739610643(benchmark::State& state) {
  const auto inputs = input_args__3161367659739610643;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__3161367659739610643(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__3161367659739610643(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__3161367659739610643)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_2__6934874432368006581 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6934874432368006581{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 9216} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__6934874432368006581(benchmark::State& state) {
  const auto inputs = input_args__6934874432368006581;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__6934874432368006581(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__6934874432368006581(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__6934874432368006581)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__5342810934812353564 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      2 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__5342810934812353564{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__5342810934812353564(benchmark::State& state) {
  const auto inputs = input_args__5342810934812353564;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__5342810934812353564(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__5342810934812353564(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__5342810934812353564);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__5342810934812353564
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__16331172876239310523 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__16331172876239310523{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__16331172876239310523(benchmark::State& state) {
  const auto inputs = input_args__16331172876239310523;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__16331172876239310523(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__16331172876239310523(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__16331172876239310523);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__16331172876239310523
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_FWD
namespace LAYER_CUBLAS_GEMV_FWD__BatchSize_2__14749961015086304009 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__14749961015086304009{{
      {"input[0]", 4096} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__14749961015086304009(benchmark::State& state) {
  const auto inputs = input_args__14749961015086304009;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__14749961015086304009(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_ADD_COUNTERS__BatchSize_2__14749961015086304009(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_FWD_FLOAT32__BatchSize_2__14749961015086304009)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__2947790683476218943 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__2947790683476218943{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__2947790683476218943(benchmark::State& state) {
  const auto inputs = input_args__2947790683476218943;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__2947790683476218943(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__2947790683476218943(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__2947790683476218943);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__2947790683476218943
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__902479011617325688 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__902479011617325688{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__902479011617325688(benchmark::State& state) {
  const auto inputs = input_args__902479011617325688;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__902479011617325688(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__902479011617325688(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__902479011617325688);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__902479011617325688
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_BWD
namespace LAYER_CUDNN_SOFTMAX_BWD__BatchSize_2__6591036896427515845 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__6591036896427515845{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__BatchSize_2__6591036896427515845(benchmark::State& state) {
  const auto inputs = input_args__6591036896427515845;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__BatchSize_2__6591036896427515845(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<float, softmax_algorithm, softmax_mode>(state);
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__BatchSize_2__6591036896427515845(state);
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

BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD(LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__BatchSize_2__6591036896427515845);

#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD
}
#endif // ENABLE_LAYER_CUDNN_SOFTMAX_BWD
#ifdef ENABLE_LAYER_CUDNN_DROPOUT_BWD
namespace LAYER_CUDNN_DROPOUT_BWD__BatchSize_2__1497086697809349256 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__1497086697809349256{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_ADD_COUNTERS__BatchSize_2__1497086697809349256(benchmark::State& state) {
  const auto inputs = input_args__1497086697809349256;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_DROPOUT_BWD_FLOAT32__BatchSize_2__1497086697809349256(benchmark::State& state) {
  LAYER_CUDNN_DROPOUT_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_ADD_COUNTERS__BatchSize_2__1497086697809349256(state);
}




BENCHMARK(LAYER_CUDNN_DROPOUT_BWD_FLOAT32__BatchSize_2__1497086697809349256)->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_DROPOUT_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUDNN_DROPOUT_BWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_FWD
namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__9632149703998469964 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__9632149703998469964{{
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__9632149703998469964(benchmark::State& state) {
  const auto inputs = input_args__9632149703998469964;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__9632149703998469964(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_FWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__9632149703998469964(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD(LAYER_CUDNN_ACTIVATION_FWD_FLOAT32__BatchSize_2__9632149703998469964);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_ACTIVATION_FWD__BatchSize_2__9632149703998469964
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__712194970555329814 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__712194970555329814{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__712194970555329814(benchmark::State& state) {
  const auto inputs = input_args__712194970555329814;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__712194970555329814(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__712194970555329814(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__712194970555329814);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__712194970555329814
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__2065011526774911316 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__2065011526774911316{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__2065011526774911316(benchmark::State& state) {
  const auto inputs = input_args__2065011526774911316;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__2065011526774911316(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__2065011526774911316(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__2065011526774911316);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__2065011526774911316
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__6288355434160264072 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__6288355434160264072{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__6288355434160264072(benchmark::State& state) {
  const auto inputs = input_args__6288355434160264072;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__6288355434160264072(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__6288355434160264072(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__6288355434160264072);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__6288355434160264072
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__12767907712125621840 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__12767907712125621840{{
      {"input[0]", 2} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__12767907712125621840(benchmark::State& state) {
  const auto inputs = input_args__12767907712125621840;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__12767907712125621840(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__12767907712125621840(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__12767907712125621840);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__12767907712125621840
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__5471324100380755329 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5471324100380755329{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__5471324100380755329(benchmark::State& state) {
  const auto inputs = input_args__5471324100380755329;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__5471324100380755329(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__5471324100380755329(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__5471324100380755329);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__5471324100380755329
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__9429023210037406453 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      256 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__9429023210037406453{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 256} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__9429023210037406453(benchmark::State& state) {
  const auto inputs = input_args__9429023210037406453;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__9429023210037406453(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__9429023210037406453(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__9429023210037406453);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__9429023210037406453
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__16178373622993657593 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16178373622993657593{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__16178373622993657593(benchmark::State& state) {
  const auto inputs = input_args__16178373622993657593;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__16178373622993657593(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__16178373622993657593(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__16178373622993657593);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__16178373622993657593
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__5757595014222130632 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      384 /* Input1 , idx = 1*/, \
      12 /* Input2 , idx = 2*/, \
      12 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__5757595014222130632{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 384} /* Input1 */, 
      {"input[2]", 12} /* Input2 */, 
      {"input[3]", 12} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__5757595014222130632(benchmark::State& state) {
  const auto inputs = input_args__5757595014222130632;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__5757595014222130632(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__5757595014222130632(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__5757595014222130632);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__5757595014222130632
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_BWD
namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__2033844612122604398 {

#define BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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


static const std::map<std::string, double> input_args__2033844612122604398{{
      {"input[0]", 2} /* Input0 */, 
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

static void BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__2033844612122604398(benchmark::State& state) {
  const auto inputs = input_args__2033844612122604398;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__2033844612122604398(benchmark::State& state) {
    LAYER_CUDNN_POOLING_BWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_BWD_ADD_COUNTERS__BatchSize_0__2033844612122604398(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_BWD(LAYER_CUDNN_POOLING_BWD_FLOAT32__BatchSize_0__2033844612122604398);

#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_BWD
} // end namespace LAYER_CUDNN_POOLING_BWD__BatchSize_0__2033844612122604398
#endif // ENABLE_LAYER_CUDNN_POOLING_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMV_BWD
namespace LAYER_CUBLAS_GEMV_BWD__BatchSize_2__18244204362527084816 {

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
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__18244204362527084816{{
      {"input[0]", 1000} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 1} /* Input2 */, 
      {"input[3]", 1} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", 0} /* Input6 */, 
      {"input[7]", 0} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__18244204362527084816(benchmark::State& state) {
  const auto inputs = input_args__18244204362527084816;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__18244204362527084816(benchmark::State& state) {
  LAYER_CUBLAS_GEMV_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_ADD_COUNTERS__BatchSize_2__18244204362527084816(state);
}




BENCHMARK(LAYER_CUBLAS_GEMV_BWD_FLOAT32__BatchSize_2__18244204362527084816)->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMV_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMV_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__887395127522070542 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__887395127522070542{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__887395127522070542(benchmark::State& state) {
  const auto inputs = input_args__887395127522070542;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__887395127522070542(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__887395127522070542(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__887395127522070542);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__887395127522070542
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__1809028324779478092 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__1809028324779478092{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__1809028324779478092(benchmark::State& state) {
  const auto inputs = input_args__1809028324779478092;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__1809028324779478092(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__1809028324779478092(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__1809028324779478092);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__1809028324779478092
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__5978010998603099792 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5978010998603099792{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__5978010998603099792(benchmark::State& state) {
  const auto inputs = input_args__5978010998603099792;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__5978010998603099792(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__5978010998603099792(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__5978010998603099792);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__5978010998603099792
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__11656110766474027275 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__11656110766474027275{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__11656110766474027275(benchmark::State& state) {
  const auto inputs = input_args__11656110766474027275;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__11656110766474027275(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__11656110766474027275(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__11656110766474027275);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__11656110766474027275
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__1169346788406531537 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__1169346788406531537{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__1169346788406531537(benchmark::State& state) {
  const auto inputs = input_args__1169346788406531537;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__1169346788406531537(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__1169346788406531537(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__1169346788406531537);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__1169346788406531537
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__15640658825671670437 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      256 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__15640658825671670437{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 256} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__15640658825671670437(benchmark::State& state) {
  const auto inputs = input_args__15640658825671670437;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__15640658825671670437(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__15640658825671670437(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__15640658825671670437);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__15640658825671670437
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__13497701385283276457 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13497701385283276457{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__13497701385283276457(benchmark::State& state) {
  const auto inputs = input_args__13497701385283276457;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__13497701385283276457(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__13497701385283276457(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__13497701385283276457);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__13497701385283276457
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_ACTIVATION_BWD
namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__10979651900165727887 {

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      256 /* Input1 , idx = 1*/, \
      26 /* Input2 , idx = 2*/, \
      26 /* Input3 , idx = 3*/, \
      -1 /* Input4 , idx = 4*/, \
      -1 /* Input5 , idx = 5*/, \
      -1 /* Input6 , idx = 6*/, \
      -1 /* Input7 , idx = 7*/, \
      2 /* BatchSize , idx = 8*/, \
  }})


static const std::map<std::string, double> input_args__10979651900165727887{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 26} /* Input2 */, 
      {"input[3]", 26} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__10979651900165727887(benchmark::State& state) {
  const auto inputs = input_args__10979651900165727887;
  state.counters.insert(inputs.begin(), inputs.end());
}


template <cudnnActivationMode_t activation_mode>
static void LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__10979651900165727887(benchmark::State& state) {
  LAYER_CUDNN_ACTIVATION_BWD_Impl<float, activation_mode>(state);
  BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_ADD_COUNTERS__BatchSize_2__10979651900165727887(state);
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
  


BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD(LAYER_CUDNN_ACTIVATION_BWD_FLOAT32__BatchSize_2__10979651900165727887);

#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ACTIVATION_BWD
} // end namespace LAYER_CUDNN_ACTIVATION_BWD__BatchSize_2__10979651900165727887
#endif // ENABLE_LAYER_CUDNN_ACTIVATION_BWD
#ifdef ENABLE_LAYER_CUDNN_POOLING_FWD
namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__7085528352975151772 {

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
      96 /* Input1 , idx = 1*/, \
      54 /* Input2 , idx = 2*/, \
      54 /* Input3 , idx = 3*/, \
      3 /* FilterHeight , idx = 4*/, \
      3 /* FilterWidth , idx = 5*/, \
      0 /* PadHeight , idx = 6*/, \
      0 /* PadWidth , idx = 7*/, \
      2 /* StrideHeight , idx = 8*/, \
      2 /* StrideWidth , idx = 9*/, \
      2 /* BatchSize , idx = 10*/, \
  }})


static const std::map<std::string, double> input_args__7085528352975151772{{
      {"input[0]", 2} /* Input0 */, 
      {"input[1]", 96} /* Input1 */, 
      {"input[2]", 54} /* Input2 */, 
      {"input[3]", 54} /* Input3 */, 
      {"filter_height", 3} /* FilterHeight */, 
      {"filter_width", 3} /* FilterWidth */, 
      {"pad_height", 0} /* PadHeight */, 
      {"pad_width", 0} /* PadWidth */, 
      {"stride_height", 2} /* StrideHeight */, 
      {"stride_width", 2} /* StrideWidth */, 
      {"batch_size", 2} /* BatchSize */, 
}};

#define BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "batch_size"})

static void BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__7085528352975151772(benchmark::State& state) {
  const auto inputs = input_args__7085528352975151772;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnPoolingMode_t pooling_mode>
  static void LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__7085528352975151772(benchmark::State& state) {
    LAYER_CUDNN_POOLING_FWD_Impl<float, pooling_mode>(state);
    BENCHMARK_LAYER_CUDNN_POOLING_FWD_ADD_COUNTERS__BatchSize_2__7085528352975151772(state);
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
  


BENCHMARK_LAYER_CUDNN_POOLING_FWD(LAYER_CUDNN_POOLING_FWD_FLOAT32__BatchSize_2__7085528352975151772);

#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_POOLING_FWD
} // end namespace LAYER_CUDNN_POOLING_FWD__BatchSize_2__7085528352975151772
#endif // ENABLE_LAYER_CUDNN_POOLING_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__673012107800279892 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__673012107800279892{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__673012107800279892(benchmark::State& state) {
  const auto inputs = input_args__673012107800279892;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__673012107800279892(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__673012107800279892(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__673012107800279892);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__673012107800279892
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__8391642291933950744 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      96 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__8391642291933950744{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 96} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__8391642291933950744(benchmark::State& state) {
  const auto inputs = input_args__8391642291933950744;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__8391642291933950744(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__8391642291933950744(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__8391642291933950744);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__8391642291933950744
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__11690264509495402540 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11690264509495402540{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__11690264509495402540(benchmark::State& state) {
  const auto inputs = input_args__11690264509495402540;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__11690264509495402540(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__11690264509495402540(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__11690264509495402540);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__11690264509495402540
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__11868871357141528518 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11868871357141528518{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__11868871357141528518(benchmark::State& state) {
  const auto inputs = input_args__11868871357141528518;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__11868871357141528518(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__11868871357141528518(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__11868871357141528518);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__11868871357141528518
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__12825388734052496260 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__12825388734052496260{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__12825388734052496260(benchmark::State& state) {
  const auto inputs = input_args__12825388734052496260;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__12825388734052496260(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__12825388734052496260(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__12825388734052496260);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__12825388734052496260
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__18018959161902666072 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__18018959161902666072{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__18018959161902666072(benchmark::State& state) {
  const auto inputs = input_args__18018959161902666072;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__18018959161902666072(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__18018959161902666072(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__18018959161902666072);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__18018959161902666072
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__18402523292548677526 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__18402523292548677526{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__18402523292548677526(benchmark::State& state) {
  const auto inputs = input_args__18402523292548677526;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__18402523292548677526(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__18402523292548677526(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__18402523292548677526);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__18402523292548677526
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__16872940412299600852 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16872940412299600852{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__16872940412299600852(benchmark::State& state) {
  const auto inputs = input_args__16872940412299600852;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__16872940412299600852(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__16872940412299600852(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__16872940412299600852);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__16872940412299600852
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__11656552859959755016 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__11656552859959755016{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__11656552859959755016(benchmark::State& state) {
  const auto inputs = input_args__11656552859959755016;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__11656552859959755016(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__11656552859959755016(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__11656552859959755016);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__11656552859959755016
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_DATA
namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__16577674535323095315 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16577674535323095315{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__16577674535323095315(benchmark::State& state) {
  const auto inputs = input_args__16577674535323095315;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdDataAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__16577674535323095315(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_DATA_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_ADD_COUNTERS__BatchSize_2__16577674535323095315(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA(LAYER_CUDNN_CONV_BWD_DATA_FLOAT32__BatchSize_2__16577674535323095315);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_DATA
} // end namespace LAYER_CUDNN_CONV_BWD_DATA__BatchSize_2__16577674535323095315
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_DATA

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_FILTER
namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__17529671867168492881 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__17529671867168492881{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__17529671867168492881(benchmark::State& state) {
  const auto inputs = input_args__17529671867168492881;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template < cudnnConvolutionBwdFilterAlgo_t  convolution_algorithm>
  static void LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__17529671867168492881(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_FILTER_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_ADD_COUNTERS__BatchSize_2__17529671867168492881(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER(LAYER_CUDNN_CONV_BWD_FILTER_FLOAT32__BatchSize_2__17529671867168492881);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_FILTER
} // end namespace LAYER_CUDNN_CONV_BWD_FILTER__BatchSize_2__17529671867168492881
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_FILTER

#ifdef ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__13306231816537567117 {

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__13306231816537567117{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__13306231816537567117(benchmark::State& state) {
  const auto inputs = input_args__13306231816537567117;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  static void LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__13306231816537567117(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BWD_BIAS_Impl<float>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_ADD_COUNTERS__BatchSize_2__13306231816537567117(state);
  }
  

#define BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS(LAYER_CUDNN_CONV_BWD_BIAS_FLOAT32__BatchSize_2__13306231816537567117);

#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BWD_BIAS
} // end namespace LAYER_CUDNN_CONV_BWD_BIAS__BatchSize_2__13306231816537567117
#endif // ENABLE_LAYER_CUDNN_CONV_BWD_BIAS
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__16625748682876454737 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16625748682876454737{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__16625748682876454737(benchmark::State& state) {
  const auto inputs = input_args__16625748682876454737;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__16625748682876454737(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__16625748682876454737(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__16625748682876454737);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__16625748682876454737
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__17951957546242591517 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      384 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__17951957546242591517{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 384} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__17951957546242591517(benchmark::State& state) {
  const auto inputs = input_args__17951957546242591517;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__17951957546242591517(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__17951957546242591517(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__17951957546242591517);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__17951957546242591517
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__5607451057805958185 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5607451057805958185{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5607451057805958185(benchmark::State& state) {
  const auto inputs = input_args__5607451057805958185;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__5607451057805958185(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5607451057805958185(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__5607451057805958185);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__5607451057805958185
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
#ifdef ENABLE_LAYER_CUDNN_CONV_FWD
namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__16359350870201973321 {

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__16359350870201973321{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__16359350870201973321(benchmark::State& state) {
  const auto inputs = input_args__16359350870201973321;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm>
  static void LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__16359350870201973321(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_FWD_Impl<float, convolution_algorithm>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_FWD_ADD_COUNTERS__BatchSize_2__16359350870201973321(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_FWD(LAYER_CUDNN_CONV_FWD_FLOAT32__BatchSize_2__16359350870201973321);

#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_FWD
} // end namespace LAYER_CUDNN_CONV_FWD__BatchSize_2__16359350870201973321
#endif // ENABLE_LAYER_CUDNN_CONV_FWD

#ifdef ENABLE_LAYER_CUDNN_ADD_TENSOR
namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__18199251572003075589 {

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      384 /* BiasDim , idx = 16*/, \
      1 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__18199251572003075589{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 384} /* BiasDim */, 
      {"alpha", 1} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__18199251572003075589(benchmark::State& state) {
  const auto inputs = input_args__18199251572003075589;
  state.counters.insert(inputs.begin(), inputs.end());
}


static void LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__18199251572003075589(benchmark::State& state) {
  LAYER_CUDNN_ADD_TENSOR_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_ADD_TENSOR_ADD_COUNTERS__BatchSize_2__18199251572003075589(state);
}

#define BENCHMARK_LAYER_CUDNN_ADD_TENSOR(b) \
  BENCHMARK(b)->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES()->\
    BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS()->\
    UseManualTime(); \


BENCHMARK_LAYER_CUDNN_ADD_TENSOR(LAYER_CUDNN_ADD_TENSOR_FLOAT32__BatchSize_2__18199251572003075589);

#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_ADD_TENSOR
} // end namespace LAYER_CUDNN_ADD_TENSOR__BatchSize_2__18199251572003075589
#endif // ENABLE_LAYER_CUDNN_ADD_TENSOR

#ifdef ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__5216078355470819633 {

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS() \
  Args({{ \
      2 /* Input0 , idx = 0*/, \
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
      2 /* BatchSize , idx = 15*/, \
      0 /* BiasDim , idx = 16*/, \
      0 /* Alpha , idx = 17*/, \
      0 /* Beta , idx = 18*/, \
  }})


static const std::map<std::string, double> input_args__5216078355470819633{{
      {"input[0]", 2} /* Input0 */, 
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
      {"batch_size", 2} /* BatchSize */, 
      {"bias_dim", 0} /* BiasDim */, 
      {"alpha", 0} /* Alpha */, 
      {"beta", 0} /* Beta */, 
}};

#define BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "filter_count", "filter_height", "filter_width", "pad_height", "pad_width", "stride_height", "stride_width", "dilation_height", "dilation_width", "conv_fwd_type", "conv_bwd_type", "batch_size", "bias_dim", "alpha", "beta"})

static void BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5216078355470819633(benchmark::State& state) {
  const auto inputs = input_args__5216078355470819633;
  state.counters.insert(inputs.begin(), inputs.end());
}

  
  template <cudnnConvolutionFwdAlgo_t convolution_algorithm, cudnnActivationMode_t activation_mode>
  static void LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__5216078355470819633(benchmark::State& state) {
    
      LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_Impl<float, convolution_algorithm, activation_mode>(state);
    
    BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_ADD_COUNTERS__BatchSize_2__5216078355470819633(state);
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
  


BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD(LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_FLOAT32__BatchSize_2__5216078355470819633);

#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD
} // end namespace LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD__BatchSize_2__5216078355470819633
#endif // ENABLE_LAYER_CUDNN_CONV_BIAS_ACTIVATION_FWD

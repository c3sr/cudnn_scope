#ifdef ENABLE_LAYER_CUDNN_DROPOUT_FWD
namespace LAYER_CUDNN_DROPOUT_FWD__9861880528970990363 {

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
  }})

#define BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__9861880528970990363(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUDNN_DROPOUT_FWD_FLOAT32__9861880528970990363(benchmark::State& state) {
  LAYER_CUDNN_DROPOUT_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_ADD_COUNTERS__9861880528970990363(state);
}




BENCHMARK(LAYER_CUDNN_DROPOUT_FWD_FLOAT32__9861880528970990363)->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_DROPOUT_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUDNN_DROPOUT_FWD
#ifdef ENABLE_LAYER_CUDNN_SOFTMAX_BWD
namespace LAYER_CUDNN_SOFTMAX_BWD__9463127343686237436 {

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      1000 /* Input1 */, \
      -1 /* Input2 */, \
      -1 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__9463127343686237436(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", -1} /* Input2 */, 
      {"input[3]", -1} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnSoftmaxAlgorithm_t softmax_algorithm, cudnnSoftmaxMode_t softmax_mode>
static void LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__9463127343686237436(benchmark::State& state) {
  LAYER_CUDNN_SOFTMAX_BWD_Impl<float, softmax_algorithm, softmax_mode>(state);
  BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_ADD_COUNTERS__9463127343686237436(state);
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

BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD(LAYER_CUDNN_SOFTMAX_BWD_FLOAT32__9463127343686237436);

#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD0
#undef BENCHMARK_LAYER_CUDNN_SOFTMAX_BWD
}
#endif // ENABLE_LAYER_CUDNN_SOFTMAX_BWD

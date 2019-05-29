#ifdef ENABLE_LAYER_CUBLAS_GEMM_BWD
namespace LAYER_CUBLAS_GEMM_BWD__3989817032888435931 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      9216 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__3989817032888435931(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 9216} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_BWD_FLOAT32__3989817032888435931(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__3989817032888435931(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_BWD_FLOAT32__3989817032888435931)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__6764964542696027067 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      1000 /* Input1 */, \
      4096 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__6764964542696027067(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 4096} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_FWD_FLOAT32__6764964542696027067(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__6764964542696027067(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_FWD_FLOAT32__6764964542696027067)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_BWD
namespace LAYER_CUBLAS_GEMM_BWD__2301657542518507937 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      1000 /* Input1 */, \
      4096 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__2301657542518507937(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1000} /* Input1 */, 
      {"input[2]", 4096} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_BWD_FLOAT32__2301657542518507937(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__2301657542518507937(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_BWD_FLOAT32__2301657542518507937)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_BWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__4312031728406679552 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      4096 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__4312031728406679552(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 4096} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_FWD_FLOAT32__4312031728406679552(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__4312031728406679552(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_FWD_FLOAT32__4312031728406679552)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_FWD
namespace LAYER_CUBLAS_GEMM_FWD__8452824719089352385 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      9216 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__8452824719089352385(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 9216} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_FWD_FLOAT32__8452824719089352385(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_FWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_ADD_COUNTERS__8452824719089352385(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_FWD_FLOAT32__8452824719089352385)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_FWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_FWD
#ifdef ENABLE_LAYER_CUBLAS_GEMM_BWD
namespace LAYER_CUBLAS_GEMM_BWD__8775176175431232026 {

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      4096 /* Input1 */, \
      4096 /* Input2 */, \
      0 /* Input3 */, \
      1 /* Input4 */, \
      1 /* Input5 */, \
      1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__8775176175431232026(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 4096} /* Input1 */, 
      {"input[2]", 4096} /* Input2 */, 
      {"input[3]", 0} /* Input3 */, 
      {"input[4]", 1} /* Input4 */, 
      {"input[5]", 1} /* Input5 */, 
      {"input[6]", 1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


static void LAYER_CUBLAS_GEMM_BWD_FLOAT32__8775176175431232026(benchmark::State& state) {
  LAYER_CUBLAS_GEMM_BWD_Impl<float>(state);
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_ADD_COUNTERS__8775176175431232026(state);
}




BENCHMARK(LAYER_CUBLAS_GEMM_BWD_FLOAT32__8775176175431232026)->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS()->\
  UseManualTime();

#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUBLAS_GEMM_BWD_INPUT_ARG_NAMES
}
#endif // ENABLE_LAYER_CUBLAS_GEMM_BWD

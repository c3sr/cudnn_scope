#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__8909419657822208713 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      1024 /* Input1 */, \
      14 /* Input2 */, \
      14 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__8909419657822208713(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 1024} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__8909419657822208713(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__8909419657822208713(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__8909419657822208713);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__18013919317735716173 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      64 /* Input1 */, \
      56 /* Input2 */, \
      56 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__18013919317735716173(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__18013919317735716173(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__18013919317735716173(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__18013919317735716173);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__17089748412359983517 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      14 /* Input2 */, \
      14 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__17089748412359983517(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 14} /* Input2 */, 
      {"input[3]", 14} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__17089748412359983517(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__17089748412359983517(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__17089748412359983517);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__2102519391396675566 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      128 /* Input1 */, \
      28 /* Input2 */, \
      28 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__2102519391396675566(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 128} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__2102519391396675566(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__2102519391396675566(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__2102519391396675566);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__12239482591874032889 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      512 /* Input1 */, \
      7 /* Input2 */, \
      7 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__12239482591874032889(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__12239482591874032889(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__12239482591874032889(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__12239482591874032889);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__1222539087477301321 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      64 /* Input1 */, \
      112 /* Input2 */, \
      112 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__1222539087477301321(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 64} /* Input1 */, 
      {"input[2]", 112} /* Input2 */, 
      {"input[3]", 112} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__1222539087477301321(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__1222539087477301321(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__1222539087477301321);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__17079378227749565905 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      512 /* Input1 */, \
      28 /* Input2 */, \
      28 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__17079378227749565905(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 512} /* Input1 */, 
      {"input[2]", 28} /* Input2 */, 
      {"input[3]", 28} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__17079378227749565905(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__17079378227749565905(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__17079378227749565905);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__7450988730865291354 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      2048 /* Input1 */, \
      7 /* Input2 */, \
      7 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__7450988730865291354(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 2048} /* Input1 */, 
      {"input[2]", 7} /* Input2 */, 
      {"input[3]", 7} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__7450988730865291354(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__7450988730865291354(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__7450988730865291354);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD
#ifdef ENABLE_LAYER_CUDNN_BATCHNORM_BWD
namespace LAYER_CUDNN_BATCHNORM_BWD__7895592651900508641 {

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS() \
  Args({{ \
      1 /* Input0 */, \
      256 /* Input1 */, \
      56 /* Input2 */, \
      56 /* Input3 */, \
      -1 /* Input4 */, \
      -1 /* Input5 */, \
      -1 /* Input6 */, \
      -1 /* Input7 */, \
  }})

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES() \
  ArgNames({"input[0]", "input[1]", "input[2]", "input[3]", "input[4]", "input[5]", "input[6]", "input[7]"})

static void BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__7895592651900508641(benchmark::State& state) {
  state.counters.insert({
      {"input[0]", 1} /* Input0 */, 
      {"input[1]", 256} /* Input1 */, 
      {"input[2]", 56} /* Input2 */, 
      {"input[3]", 56} /* Input3 */, 
      {"input[4]", -1} /* Input4 */, 
      {"input[5]", -1} /* Input5 */, 
      {"input[6]", -1} /* Input6 */, 
      {"input[7]", -1} /* Input7 */, 
  });
}


template <cudnnBatchNormMode_t batchnorm_mode>
static void LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__7895592651900508641(benchmark::State& state) {
  LAYER_CUDNN_BATCHNORM_BWD_Impl<float, batchnorm_mode>(state);
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_ADD_COUNTERS__7895592651900508641(state);
}

#define BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(b) \
 BENCHMARK_TEMPLATE(b, CUDNN_BATCHNORM_PER_ACTIVATION)-> \
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES()->\
  BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS()->\
  UseManualTime(); \


BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD(LAYER_CUDNN_BATCHNORM_BWD_FLOAT32__7895592651900508641);

#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARGS
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD_INPUT_ARG_NAMES
#undef BENCHMARK_LAYER_CUDNN_BATCHNORM_BWD
}
#endif // ENABLE_LAYER_CUDNN_BATCHNORM_BWD

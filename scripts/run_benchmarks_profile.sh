#!/bin/bash

SCOPE_TOP_DIR=../..
HOST_NAME=$(hostname)
GPU_NAME=$(nvidia-smi --query-gpu="name" --format=csv | sed -n 2p | tr -s ' ' | tr ' ' '_')
RESULTS_DIR=$(pwd)/results/profile/${GPU_NAME}

pushd ${SCOPE_TOP_DIR}


# CUPTI_METRICS="flop_count_sp,flop_count_dp,flop_count_sp_add,dram_read_bytes,dram_write_bytes,flop_count_sp_add,flop_count_sp_fma,flop_count_sp_mul,flop_count_sp_special,inst_executed,inst_issued,inst_fp_32,inst_fp_64,inst_integer,inst_bit_convert,inst_control,ipc"
CUPTI_METRICS="flop_count_sp,flop_count_dp,dram_read_bytes,dram_write_bytes"
CMAKE_OPTIONS="-DENABLE_CUDNN=ON -DENABLE_CUDNN_DLPERF=ON -DENABLE_COMM=OFF -DENABLE_EXAMPLE=OFF -DCMAKE_BUILD_TYPE=Release -DENABLE_CUDNN_CUPTI=ON -DCUDNN_CUPTI_NUM_ITERS=10"

rm -fr ${RESULTS_DIR}
mkdir -p ${RESULTS_DIR}
nvidia-smi -x -q -a > ${RESULTS_DIR}/nvidia_smi.xml
echo ${CUPTI_METRICS} > ${RESULTS_DIR}/cupti_metrics.csv

for BATCH_SIZE in 1 2 4 8 16
do
  rm -fr build && mkdir build
  pushd build
  cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=${BATCH_SIZE}
  make -j $(nproc)
  ./scope --benchmark_out_format=json --benchmark_out=${RESULTS_DIR}/${BATCH_SIZE}.json --metrics=${CUPTI_METRICS}
  popd
done

popd

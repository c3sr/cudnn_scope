#!/bin/bash

SCOPE_TOP_DIR=../..
HOST_NAME=$(hostname)
GPU_NAME=$(nvidia-smi --query-gpu="name" --format=csv | sed -n 2p | tr -s ' ' | tr ' ' '_')
RESULTS_DIR=$(pwd)/results/resnet50/${GPU_NAME}

pushd ${SCOPE_TOP_DIR}


CMAKE_OPTIONS="-DRESNET50_ONLY=ON -DENABLE_CUDNN=ON -DENABLE_CUDNN_DLPERF=ON -DENABLE_COMM=OFF -DENABLE_EXAMPLE=OFF -DCMAKE_BUILD_TYPE=Release -DENABLE_CUDNN_CUPTI=OFF"

rm -fr ${RESULTS_DIR}
mkdir -p ${RESULTS_DIR}
nvidia-smi -x -q -a > ${RESULTS_DIR}/nvidia_smi.xml


declare -a batch_sizes=(
  # 1 \
  # 2 \
  # 4 \
  # 8 \
  # 16 \
  # 32 \
  64 \
  128 \
  256 \
  512 \
  1024
)

for BATCH_SIZE in "${batch_sizes[@]}"
do
  rm -fr build && mkdir build
  pushd build
  cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=${BATCH_SIZE}
  make VERBOSE=1 -j4
  ./scope --benchmark_out_format=json --benchmark_out=${RESULTS_DIR}/${BATCH_SIZE}.json
  popd
done

popd

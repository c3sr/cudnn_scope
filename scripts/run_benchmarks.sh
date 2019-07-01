#!/bin/sh

SCOPE_TOP_DIR=../..

pushd ${SCOPE_TOP_DIR}/build

rm -fr results

mkdir -p results

CMAKE_OPTIONS=-DENABLE_CUDNN=ON -DENABLE_CUDNN_DLPERF=ON -DENABLE_COMM=OFF -DENABLE_EXAMPLE=OFF -DCMAKE_BUILD_TYPE=Release -DENABLE_CUDNN_CUPTI=OFF

nvidia-smi -x -q -a > results/nvidia_smi.xml

rm -fr scope
cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=1
make -j $(nproc)
./scope --benchmark_out_format=json --benchmark_out=results/1.json

rm -fr scope
cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=2
make -j $(nproc)
./scope --benchmark_out_format=json --benchmark_out=results/2.json

rm -fr scope
cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=4
make -j $(nproc)
./scope --benchmark_out_format=json --benchmark_out=results/4.json

rm -fr scope
cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=8
make -j $(nproc)
./scope --benchmark_out_format=json --benchmark_out=results/8.json

rm -fr scope
cmake .. ${CMAKE_OPTIONS} -DCUDNN_BATCH_SIZE=16
make -j $(nproc)
./scope --benchmark_out_format=json --benchmark_out=results/16.json


popd

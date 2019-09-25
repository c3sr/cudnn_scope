#!/bin/bash


DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"

sudo ${DIR}/../setup.sh

rm -fr results 

${DIR}/run_benchmarks.sh
${DIR}/run_resnet50_benchmarks.sh
${DIR}/run_mobilenetv2_benchmarks.sh
${DIR}/run_benchmark_profile.sh

unalias cp
cp -r results $GOPATH/src/github.com/rai-project/dlperf
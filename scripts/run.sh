#!/bin/bash


DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"

sudo bash -c ${DIR}/../setup/setup.sh

rm -fr ${DIR}/../results

${DIR}/run_benchmarks.sh
${DIR}/run_resnet50_benchmarks.sh
${DIR}/run_mobilenetv2_benchmarks.sh
${DIR}/run_benchmark_profile.sh

unalias cp
cp -r ${DIR}/../results $GOPATH/src/github.com/rai-project/dlperf

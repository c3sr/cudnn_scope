#!/bin/bash


DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"

sudo bash -c ${DIR}/../setup/setup.sh

rm -fr ${DIR}/../results

${DIR}/run_benchmarks_low_prec.sh
${DIR}/run_benchmarks_low_prec_nhwc_layout.sh
${DIR}/run_benchmarks_low_prec_padded.sh
${DIR}/run_benchmarks_low_prec_padded_nhwc_layout.sh
# ${DIR}/run_benchmarks_low_prec_profile.sh


# cp -r ${DIR}/../results $GOPATH/src/github.com/rai-project/dlperf

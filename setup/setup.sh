#!/usr/bin/env bash


DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" >/dev/null 2>&1 && pwd)"

${DIR}/disable_hyper_threading.sh
${DIR}/disable_turbo_boost.sh
${DIR}/drop_caches.sh
${DIR}/gpu_boost.sh
${DIR}/randomize_va_space.sh
${DIR}/scaling_governor.sh
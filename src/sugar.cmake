# This file generated automatically by:
#   generate_sugar_files.py
# see wiki for more info:
#   https://github.com/ruslo/sugar/wiki/Collecting-sources

if(DEFINED EXAMPLE_SCOPE_SRC_SUGAR_CMAKE_)
  return()
else()
  set(EXAMPLE_SCOPE_SRC_SUGAR_CMAKE_ 1)
endif()

include(sugar_include)

sugar_include(example)

sugar_files(
  example_HEADERS
  config.hpp.in
)


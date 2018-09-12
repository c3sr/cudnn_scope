# This file generated automatically by:
#   generate_sugar_files.py
# see wiki for more info:
#   https://github.com/ruslo/sugar/wiki/Collecting-sources

if(DEFINED EXAMPLE_SCOPE_SRC_EXAMPLE_SUGAR_CMAKE_)
  return()
else()
  set(EXAMPLE_SCOPE_SRC_EXAMPLE_SUGAR_CMAKE_ 1)
endif()

include(sugar_files)

sugar_files(
    example_SOURCES
    example.cpp
    init.cpp
)


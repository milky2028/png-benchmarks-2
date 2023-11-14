cmake_minimum_required(VERSION 3.10)

project(PNGBenchMarks)

set(PNG_LIBRARY deps/lib)
set(PNG_PNG_INCLUDE_DIR deps/include)

find_package(PNG REQUIRED)

add_executable(PNGBenchMarks src/main.cpp)


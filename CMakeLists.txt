cmake_minimum_required(VERSION 3.10)

project(PNGBenchMarks)

find_package(fmt CONFIG REQUIRED)

add_executable(PNGBenchMarks src/main.cpp)

target_link_libraries(PNGBenchMarks PRIVATE fmt::fmt)

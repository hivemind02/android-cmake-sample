cmake_minimum_required(VERSION 3.4)

file(GLOB sample_src "${CMAKE_CURRENT_SOURCE_DIR}/../native/*.cpp")
add_library(sample SHARED ${sample_src})
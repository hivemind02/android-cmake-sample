cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Werror -fstack-protector-strong -fno-integrated-as -fomit-frame-pointer -fstrict-aliasing -v" )
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -target armv7-none-linux-androideabi -march=armv7-a -no-canonical-prefixes -Wl,--warn-shared-textrel -Wl,--fatal-warnings -v")

file(GLOB sample_src "${CMAKE_CURRENT_SOURCE_DIR}/../native/*.cpp")
add_library(sample SHARED ${sample_src})
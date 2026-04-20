cmake_minimum_required(VERSION 3.14)
project(Hadeel)

set(CMAKE_CXX_STANDARD 17)

# Hent Google Test automatisk
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Test executable
add_executable(tests tests/GennemsnitsTest.cpp)
target_link_libraries(tests gtest_main)

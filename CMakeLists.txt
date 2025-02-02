cmake_minimum_required(VERSION 3.10)
project(MathLib)

set(CMAKE_CXX_STANDARD 14)

# Google Test requires at least C++14
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Main library
add_library(mathlib
        MyMathLib.h
        BasicMathOps.h
        AdvancedMathOpsTest.h
)
set_target_properties(mathlib PROPERTIES LINKER_LANGUAGE CXX)

# Main executable
add_executable(MathLib main.cpp)
target_link_libraries(MathLib mathlib)

# Enable testing
enable_testing()

# Test executables
add_executable(basic_math_test tests/BasicMathOpsTest.cpp)
target_link_libraries(basic_math_test GTest::gtest_main mathlib)

add_executable(advanced_math_test tests/AdvancedMathOpsTest.cpp)
target_link_libraries(advanced_math_test GTest::gtest_main mathlib)

# Register tests
include(GoogleTest)
gtest_discover_tests(basic_math_test)
gtest_discover_tests(advanced_math_test)
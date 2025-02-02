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

# Create library target
add_library(mathlib INTERFACE)
target_include_directories(mathlib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

# Main executable
add_executable(MathLib main.cpp)
target_link_libraries(MathLib PRIVATE mathlib)

# Enable testing
enable_testing()

# Test executables
add_executable(basic_math_test tests/BasicMathOpsTest.cpp)
target_link_libraries(basic_math_test PRIVATE GTest::gtest_main mathlib)

add_executable(advanced_math_test tests/AdvancedMathOpsTest.cpp)
target_link_libraries(advanced_math_test PRIVATE GTest::gtest_main mathlib)

# Register tests
include(GoogleTest)
gtest_discover_tests(basic_math_test)
gtest_discover_tests(advanced_math_test)
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

# Add source files
set(SOURCE_FILES
        MyMathLib.h
        BasicMathOps.h
        AdvancedMathOps.h
        main.cpp
)

# Main executable
add_executable(MathLib ${SOURCE_FILES})

# Enable testing
enable_testing()

# Test executables
add_executable(basic_math_test tests/BasicMathOpsTest.cpp)
target_link_libraries(basic_math_test GTest::gtest_main)

add_executable(advanced_math_test tests/AdvancedMathOpsTest.cpp)
target_link_libraries(advanced_math_test GTest::gtest_main)

# Register tests
include(GoogleTest)
gtest_discover_tests(basic_math_test)
gtest_discover_tests(advanced_math_test)
#include <gtest/gtest.h>
#include "../AdvancedMathOpsTest.h"

TEST(AdvancedMathOpsTest, Factorial) {
    EXPECT_EQ(AdvancedMathOpsTest::factorial(0), 1);
    EXPECT_EQ(AdvancedMathOpsTest::factorial(1), 1);
    EXPECT_EQ(AdvancedMathOpsTest::factorial(5), 120);
    EXPECT_THROW(AdvancedMathOpsTest::factorial(-1), std::invalid_argument);
}

TEST(AdvancedMathOpsTest, Combination) {
    EXPECT_EQ(AdvancedMathOpsTest::combination(5, 2), 10);
    EXPECT_EQ(AdvancedMathOpsTest::combination(4, 2), 6);
    EXPECT_EQ(AdvancedMathOpsTest::combination(3, 0), 1);
    EXPECT_THROW(AdvancedMathOpsTest::combination(2, 3), std::invalid_argument);
    EXPECT_THROW(AdvancedMathOpsTest::combination(-1, 2), std::invalid_argument);
}
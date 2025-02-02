#include <gtest/gtest.h>
#include "../BasicMathOps.h"

TEST(BasicMathOpsTest, Addition) {
    EXPECT_DOUBLE_EQ(BasicMathOps::add(2.0, 3.0), 5.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::add(-2.0, 3.0), 1.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::add(0.0, 0.0), 0.0);
}

TEST(BasicMathOpsTest, Subtraction) {
    EXPECT_DOUBLE_EQ(BasicMathOps::subtract(5.0, 3.0), 2.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::subtract(3.0, 5.0), -2.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::subtract(0.0, 0.0), 0.0);
}

TEST(BasicMathOpsTest, Multiplication) {
    EXPECT_DOUBLE_EQ(BasicMathOps::multiply(2.0, 3.0), 6.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::multiply(-2.0, 3.0), -6.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::multiply(0.0, 5.0), 0.0);
}

TEST(BasicMathOpsTest, Division) {
    EXPECT_DOUBLE_EQ(BasicMathOps::divide(6.0, 2.0), 3.0);
    EXPECT_DOUBLE_EQ(BasicMathOps::divide(-6.0, 2.0), -3.0);
    EXPECT_THROW(BasicMathOps::divide(5.0, 0.0), std::invalid_argument);
}
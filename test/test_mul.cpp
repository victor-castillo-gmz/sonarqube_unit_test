// test/test_mul.cpp
#include "gtest/gtest.h"
#include "mul.h" // Include your multiplication header

// Test case for the mul function
TEST(MulTest, BasicMultiplication) {
    ASSERT_EQ(mul(2, 3), 6.0);
    ASSERT_EQ(mul(5, 0), 0.0);
    ASSERT_EQ(mul(-4, 2), -8.0);
    ASSERT_EQ(mul(-5, -5), 25.0);
    ASSERT_EQ(mul(10, 10), 100.0);
}

// You can add more test cases for edge cases or specific scenarios if needed
TEST(MulTest, MultiplyByOne) {
    ASSERT_EQ(mul(7, 1), 7.0);
    ASSERT_EQ(mul(1, -9), -9.0);
}
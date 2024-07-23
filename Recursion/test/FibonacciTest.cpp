#include <gtest/gtest.h>
#include "Fibonacci.h"

using namespace Fibonacci;

TEST(FibonacciTest, FibonacciZero) {
    EXPECT_EQ(Solution::fibonacci(0), 0);
}

TEST(FibonacciTest, FibonacciOne) {
    EXPECT_EQ(Solution::fibonacci(1), 1);
}

TEST(FibonacciTest, FibonacciPositiveNumbers) {
    EXPECT_EQ(Solution::fibonacci(2), 1);
    EXPECT_EQ(Solution::fibonacci(3), 2);
    EXPECT_EQ(Solution::fibonacci(4), 3);
    EXPECT_EQ(Solution::fibonacci(5), 5);
    EXPECT_EQ(Solution::fibonacci(6), 8);
    EXPECT_EQ(Solution::fibonacci(7), 13);
    EXPECT_EQ(Solution::fibonacci(8), 21);
    EXPECT_EQ(Solution::fibonacci(9), 34);
    EXPECT_EQ(Solution::fibonacci(10), 55);
}

TEST(FibonacciTest, FibonacciLargerNumbers) {
    EXPECT_EQ(Solution::fibonacci(12), 144);
    EXPECT_EQ(Solution::fibonacci(13), 233);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

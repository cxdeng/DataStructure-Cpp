#include <gtest/gtest.h>
#include "Factorial.h"

using namespace Factorial;

TEST(FactorialTest, FactorialOfZero)
{
    EXPECT_EQ(Solution::factorial(0), 1);
}

TEST(FactorialTest, FactorialOfOne)
{
    EXPECT_EQ(Solution::factorial(1), 1);
}

TEST(FactorialTest, FactorialOfPositiveNumber)
{
    EXPECT_EQ(Solution::factorial(5), 120);
    EXPECT_EQ(Solution::factorial(6), 720);
    EXPECT_EQ(Solution::factorial(10), 3628800);
}

TEST(FactorialTest, FactorialOfLargeNumber)
{
    EXPECT_EQ(Solution::factorial(12), 479001600);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
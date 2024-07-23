#include <gtest/gtest.h>
#include "BubbleSort.h"
#include <vector>

using namespace std;
using namespace BubbleSort;

TEST(BubbleSortTest, NonRecursiveSortEmptyArray)
{
    vector<int> arr = {};
    Solution::bubbleSortNonRecur(arr);
    vector<int> expected = {};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, NonRecursiveSortAlreadySortedArray)
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution::bubbleSortNonRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, NonRecursiveSortReverseArray)
{
    vector<int> arr = {5, 4, 3, 2, 1};
    Solution::bubbleSortNonRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, NonRecursiveSortWithDuplicates)
{
    vector<int> arr = {4, 2, 3, 1, 2, 4, 3};
    Solution::bubbleSortNonRecur(arr);
    vector<int> expected = {1, 2, 2, 3, 3, 4, 4};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, RecursiveSortEmptyArray)
{
    vector<int> arr = {};
    Solution::bubbleSortRecur(arr);
    vector<int> expected = {};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, RecursiveSortAlreadySortedArray)
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution::bubbleSortRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, RecursiveSortReverseArray)
{
    vector<int> arr = {5, 4, 3, 2, 1};
    Solution::bubbleSortRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, RecursiveSortWithDuplicates)
{
    vector<int> arr = {4, 2, 3, 1, 2, 4, 3};
    Solution::bubbleSortRecur(arr);
    vector<int> expected = {1, 2, 2, 3, 3, 4, 4};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, RecursiveSortRandomArray)
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution::bubbleSortRecur(arr);
    vector<int> expected = {11, 12, 22, 25, 34, 64, 90};
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, NonRecursiveSortRandomArray)
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution::bubbleSortNonRecur(arr);
    vector<int> expected = {11, 12, 22, 25, 34, 64, 90};
    EXPECT_EQ(arr, expected);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

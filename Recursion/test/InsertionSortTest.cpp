#include <gtest/gtest.h>
#include "InsertionSort.h"
#include <vector>

using namespace std;
using namespace InsertionSort;

TEST(InsertionSortTest, NonRecursiveSortEmptyArray)
{
    vector<int> arr = {};
    Solution::insertionSortNonRecur(arr);
    vector<int> expected = {};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, NonRecursiveSortAlreadySortedArray)
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution::insertionSortNonRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, NonRecursiveSortReverseArray)
{
    vector<int> arr = {5, 4, 3, 2, 1};
    Solution::insertionSortNonRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, NonRecursiveSortWithDuplicates)
{
    vector<int> arr = {4, 2, 3, 1, 2, 4, 3};
    Solution::insertionSortNonRecur(arr);
    vector<int> expected = {1, 2, 2, 3, 3, 4, 4};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, NonRecursiveSortRandomArray)
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution::insertionSortNonRecur(arr);
    vector<int> expected = {11, 12, 22, 25, 34, 64, 90};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, RecursiveSortEmptyArray)
{
    vector<int> arr = {};
    Solution::insertionSortRecur(arr);
    vector<int> expected = {};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, RecursiveSortAlreadySortedArray)
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution::insertionSortRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, RecursiveSortReverseArray)
{
    vector<int> arr = {5, 4, 3, 2, 1};
    Solution::insertionSortRecur(arr);
    vector<int> expected = {1, 2, 3, 4, 5};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, RecursiveSortWithDuplicates)
{
    vector<int> arr = {4, 2, 3, 1, 2, 4, 3};
    Solution::insertionSortRecur(arr);
    vector<int> expected = {1, 2, 2, 3, 3, 4, 4};
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, RecursiveSortRandomArray)
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    Solution::insertionSortRecur(arr);
    vector<int> expected = {11, 12, 22, 25, 34, 64, 90};
    EXPECT_EQ(arr, expected);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

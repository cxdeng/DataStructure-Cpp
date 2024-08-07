#include <gtest/gtest.h>
#include "BinarySearch.h"

vector<int> arr = {7, 13, 21, 30, 38, 44, 52, 53};

vector<int> theMostArr = {1, 2, 4, 4, 4, 5, 6, 6, 7};

TEST(BinarySearchTest, binarySearchBasic_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 7), 0);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 13), 1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 21), 2);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 30), 3);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 38), 4);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 44), 5);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 52), 6);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 53), 7);
}

TEST(BinarySearchTest, binarySearchBasic_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 15), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 60), -1);
}

TEST(BinarySearchTest, binarySearchAlternative_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 7), 0);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 13), 1);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 21), 2);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 30), 3);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 38), 4);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 44), 5);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 52), 6);
    EXPECT_EQ(BinarySearch::binarySearchAlternative(arr, 53), 7);
}

TEST(BinarySearchTest, binarySearchAlternative_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 15), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 60), -1);
}

TEST(BinarySearchTest, binarySearchBalance_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 7), 0);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 13), 1);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 21), 2);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 30), 3);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 38), 4);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 44), 5);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 52), 6);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 53), 7);
}

TEST(BinarySearchTest, binarySearchBalance_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 15), -1);
    EXPECT_EQ(BinarySearch::binarySearchBalance(arr, 60), -1);
}

TEST(BinarySearchTest, binarySearchJava_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 7), 0);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 13), 1);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 21), 2);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 30), 3);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 38), 4);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 44), 5);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 52), 6);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 53), 7);
}

TEST(BinarySearchTest, binarySearchJava_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 15), -3);
    EXPECT_EQ(BinarySearch::binarySearchJava(arr, 60), -9);
}

TEST(BinarySearchTest, binarySearchLeftMost_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 1), 0);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 2), 1);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 4), 2);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 5), 5);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 6), 6);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 7), 8);
}

TEST(BinarySearchTest, binarySearchLeftMost_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 3), -1);
    EXPECT_EQ(BinarySearch::binarySearchLeftMost(theMostArr, 8), -1);
}

TEST(BinarySearchTest, binarySearchRightMost_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 1), 0);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 2), 1);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 4), 4);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 5), 5);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 6), 7);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 7), 8);
}

TEST(BinarySearchTest, binarySearchRightMost_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 3), -1);
    EXPECT_EQ(BinarySearch::binarySearchRightMost(theMostArr, 8), -1);
}

TEST(BinarySearchTest, binarySearchLeftMost_Advanced_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 1), 0);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 2), 1);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 4), 2);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 5), 5);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 6), 6);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 7), 8);
}

TEST(BinarySearchTest, binarySearchLeftMost_Advanced_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 0), 0);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 3), 2);
    EXPECT_EQ(BinarySearch::binarySearchLeftMostAdvanced(theMostArr, 8), 9);
}

TEST(BinarySearchTest, binarySearchRightMost_Advanced_Found)
{
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 1), 0);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 2), 1);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 4), 4);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 5), 5);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 6), 7);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 7), 8);
}

TEST(BinarySearchTest, binarySearchRightMost_Advanced_NotFound)
{
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 3), 1);
    EXPECT_EQ(BinarySearch::binarySearchRightMostAdvanced(theMostArr, 8), 8);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

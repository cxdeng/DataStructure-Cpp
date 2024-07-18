#include <gtest/gtest.h>
#include "BinarySearch.h"

vector<int> arr = {7, 13, 21, 30, 38, 44, 52, 53};

TEST(BinarySearchTest, binarySearchBasic_Found) {
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 7), 0);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 13), 1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 21), 2);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 30), 3);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 38), 4);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 44), 5);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 52), 6);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 53), 7);
}

TEST(BinarySearchTest, binarySearchBasic_NotFound) {
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 0), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 15), -1);
    EXPECT_EQ(BinarySearch::binarySearchBasic(arr, 60), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

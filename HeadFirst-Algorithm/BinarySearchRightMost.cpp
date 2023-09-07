#include <vector>

int binarySearchRightMost(const std::vector<int> &arr, int target);

/**
 * @param arr    待查找的升序数组
 * @param target 待查找的目标值
 * @return 找到则返回最右的索引
 * 找不到则返回 -1
 */
int binarySearchRightMost(const std::vector<int> &arr, int target)
{
    if (arr.empty()) return -1;  // Handle empty vector.

    std::vector<int>::size_type left = 0;
    std::vector<int>::size_type right = arr.size() - 1;

    std::vector<int>::size_type candidate = -1;
    while (left <= right)
    {
        std::vector<int>::size_type mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid - 1;
        } else if (target > arr[mid])
        {
            left = mid + 1;
        } else
        {
            candidate = mid;
            left = mid + 1;
        }
    }

    return static_cast<int>(candidate);
}


/**
 * @param arr    待查找的升序数组
 * @param target 待查找的目标值
 * @return 返回  <= target的最右索引
 */
int binarySearchRightMostOptimization(const std::vector<int> &arr, int target)
{
    if (arr.empty()) return -1;  // Handle empty vector.

    std::vector<int>::size_type left = 0;
    std::vector<int>::size_type right = arr.size() - 1;

    while (left <= right)
    {
        std::vector<int>::size_type mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid - 1;
        } else
        {
            left = mid + 1;
        }
    }

    return static_cast<int>(left - 1);
}
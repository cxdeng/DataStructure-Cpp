#include <iostream>
#include <vector>

using namespace std;

int binarySearchJava(const std::vector<int> &arr, int target);

/**
 *
 * @param arr 待查找的升序数组
 * @param target 待查找的目标值
 * @return 找到则返回索引
 *         找不到返回 -(insertion + 1)
 */
int binarySearchJava(const std::vector<int> &arr, int target)
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
        } else if (target > arr[mid])
        {
            left = mid + 1;
        } else
        {
            return static_cast<int>(mid);  // Safe conversion because mid will always be non-negative.
        }
    }

    return static_cast<int>(-(left + 1));
}
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int x = leftMost(nums, target);
        if (x == -1)
            return {-1, -1};
        else
            return {x, rightMost(nums, target)};
    }

    int leftMost(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int candidate = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target < nums[mid])
                right = mid - 1;
            else if (target > nums[mid])
                left = mid + 1;
            else
            {
                candidate = mid;
                right = mid - 1;
            }
        }
        return candidate;
    }

    int rightMost(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;
        int candidate = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (target < nums[mid])
                right = mid - 1;
            else if (target > nums[mid])
                left = mid + 1;
            else
            {
                candidate = mid;
                left = mid + 1;
            }
        }
        return candidate;
    }
};
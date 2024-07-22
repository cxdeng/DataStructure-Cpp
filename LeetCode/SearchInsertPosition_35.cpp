#include <vector>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &arr, int target)
    {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right)
        {

            int mid = left + (right - left) / 2;

            if (target <= arr[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};
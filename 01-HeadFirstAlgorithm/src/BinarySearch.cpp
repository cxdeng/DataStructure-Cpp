#include <BinarySearch.h>

int BinarySearch::binarySearchBasic(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid - 1;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}


int BinarySearch::binarySearchAlternative(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}
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

int BinarySearch::binarySearchBalance(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size();

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;
        if (target < arr[mid])
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    if (target == arr[left])
    {
        return left;
    }

    return -1;
}

int BinarySearch::binarySearchJava(const vector<int> &arr, int target)
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

    return -(left + 1);
}

int BinarySearch::binarySearchLeftMost(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int candidate = -1;

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
            candidate = mid;
            right = mid - 1;
        }
    }

    return candidate;
}

int BinarySearch::binarySearchRightMost(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int candidate = -1;

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
            candidate = mid;
            left = mid + 1;
        }
    }

    return candidate;
}

int BinarySearch::binarySearchLeftMostAdvanced(const vector<int> &arr, int target)
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

int BinarySearch::binarySearchRightMostAdvanced(const vector<int> &arr, int target)
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
        else
        {
            left = mid + 1;
        }
    }

    return left - 1;
}
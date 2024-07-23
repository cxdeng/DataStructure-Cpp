#include "InsertionSort.h"

using namespace InsertionSort;
using namespace std;

void Solution::insertionSortNonRecur(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void Solution::insertionSortRecur(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return;
    }

    insertRecur(arr, 1);
}

void Solution::insertRecur(vector<int> &arr, int low)
{
    if (low == arr.size())
    {
        return;
    }

    int key = arr[low];

    // The pointer of the sorted region
    int i = low - 1;

    while (i >= 0 && key < arr[i])
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = key;

    // low is the lower bound of the unsorted region
    insertRecur(arr, low + 1);
}
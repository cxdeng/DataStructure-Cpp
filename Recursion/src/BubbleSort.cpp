#include <BubbleSort.h>

using namespace BubbleSort;

using namespace std;

void Solution::bubbleSortNonRecur(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return; // If the array is empty or has one element, no need to sort
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Solution::bubbleSortRecur(vector<int> &arr)
{
    if (arr.size() <= 1)
    {
        return;
    }

    sortRecur(arr, arr.size() - 1);
}

void Solution::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Solution::sortRecur(vector<int> &arr, int right)
{
    if (right == 0)
    {
        return;
    }

    for (int i = 0; i < right; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    sortRecur(arr, right - 1);
}

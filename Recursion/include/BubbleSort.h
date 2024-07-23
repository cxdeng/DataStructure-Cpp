#include <vector>

using namespace std;

namespace BubbleSort
{
    class Solution
    {
    private:
        static void sortRecur(vector<int> &arr, int right);

        static void swap(int *x, int *y);

    public:
        static void bubbleSortNonRecur(vector<int> &arr);

        static void bubbleSortRecur(vector<int> &arr);
    };
}
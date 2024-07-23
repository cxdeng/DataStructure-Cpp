#include <vector>

using namespace std;

namespace InsertionSort
{
    class Solution
    {
    private:
        static void insertRecur(vector<int> &arr, int low);

    public:
        static void insertionSortNonRecur(vector<int> &arr);

        static void insertionSortRecur(vector<int> &arr);
    };
}
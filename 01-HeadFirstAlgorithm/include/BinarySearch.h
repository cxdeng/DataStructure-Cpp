#include <vector>
using namespace std;

class BinarySearch
{
public:
    static int binarySearchBasic(const vector<int> &arr, int target);
    static int binarySearchAlternative(const vector<int> &arr, int target);
    static int binarySearchBalance(const vector<int> &arr, int target);
    static int binarySearchJava(const vector<int> &arr, int target);
    static int binarySearchLeftMost(const vector<int> &arr, int target);
    static int binarySearchRightMost(const vector<int> &arr, int target);
    static int binarySearchLeftMostAdvanced(const vector<int> &arr, int target);
    static int binarySearchRightMostAdvanced(const vector<int> &arr, int target);
};
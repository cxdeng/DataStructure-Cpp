#include "Factorial.h"

using namespace Factorial;

using namespace std;

int Solution::factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}
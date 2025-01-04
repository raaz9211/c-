// C++ contains a feature that is related to the pointer called a reference
// There are three ways that a reference can be used: as a function parameter, as a function return value, or as a stand-alone reference

// Manually create a call-by-reference using a pointer.
#include <iostream>
using namespace std;

void neg(int *i)
{
    *i = -*i;
}

int main()
{
    int x;
    x = 10;
    cout << x << " negated is ";
    neg(&x);
    cout << x << "\n";
    return 0;
}

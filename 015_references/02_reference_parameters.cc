// Use a reference parameter.
// There is no need to apply the & operator to an argument
// reference parameter is used directly without the need to apply the * operator.

#include <iostream>
using namespace std;

void neg(int &i)
{
    i = -i;
}

int main()
{
    int x;
    x = 10;
    cout << x << " negated is ";
    neg(x);
    cout << x << "\n";
    return 0;
}

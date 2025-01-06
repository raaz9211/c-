// Each redefinition of the function must use either different types of parameters or a different number of parameters.

#include <iostream>
using namespace std;

double myfunc(double i)
{
    return i;
}
int myfunc(int i)
{
    return i;
}

int main()
{
    cout << myfunc(10) << " "; // calls myfunc(int i)
    cout << myfunc(5.4);       // calls myfunc(double i)
    return 0;
}

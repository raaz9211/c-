#include <iostream>
using namespace std;

int myfunc(int i)
{
    return i;
}
int myfunc(int i, int j)
{
    return i * j;
}

int main()
{
    cout << myfunc(10) << " "; // calls myfunc(int i)
    cout << myfunc(4, 5);      // calls myfunc(int i, int j)
    return 0;
}

// Two functions differing only in their return types cannot be overloaded
// ||EXAMPLE||
// int myfunc(int i); // Error: differing return types are
// float myfunc(int i); // insufficient when overloading.

// void f(int *p);
// void f(int p[]); // error, *p is same as p[
#include <iostream>
using namespace std;

int my_function(int i)
{
    return i;
}

int my_function(int i, int j = 1)
{
    return i * j;
}

int main()
{
    cout << my_function(4, 5) << " "; // unambiguous
    cout << my_function(10);          // ambiguous
    return 0;
}
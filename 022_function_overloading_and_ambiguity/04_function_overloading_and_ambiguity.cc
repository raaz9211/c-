#include <iostream>
using namespace std;

void f(int x)
{
    cout << "In f(int)\n";
}

void f(int &x)
{
    cout << "In f(int &)\n";
}
int my_function(int i, int j = 1)
{
    return i * j;
}

int main()
{
    int a = 5;
    f(5); // no error, as it will call the function by value. 
    // f(a); // error, which f()? [ambiguous]
    return 0;
}
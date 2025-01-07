#include <iostream>
using namespace std;

void myfunc(char c)
{
    cout << c << " char";
}

void myfunc(double i)
{
    cout << i << " double";
}

int main()
{
    myfunc('c'); // Here priority will be "char" 1st, if "char" will not be there then it will run via "double" with no error as type conversion applied.
    return 0;
}

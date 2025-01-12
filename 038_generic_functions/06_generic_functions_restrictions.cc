// When functions are overloaded, you may have different actions performed
// within the body of each function. But a generic function must perform the same general
// action for all versions—only the type of data can differ

#include <iostream>
#include <cmath>
using namespace std;

void myfunc(int i)
{
    cout << "value is: " << i << "\n";
}

void myfunc(double d)
{
    double intpart;
    double fracpart;
    fracpart = modf(d, &intpart);
    cout << "Fractional part: " << fracpart;
    cout << "\n";
    cout << "Integer part: " << intpart;
}
int main()
{
    myfunc(1);
    myfunc(12.2);
    return 0;
}
#include <iostream>
using namespace std;

void divide(double a, double b)
{
    try
    {
        if (!b)
            throw b; // check for divide-by-zero
        cout << "Result: " << a / b << endl;
    }
    catch (double b)
    {
        cout << "Can't divide by zero.\n";
    }
}

int main()
{
    double i, j;
    do
    {
        cout << "Enter numerator (0 to stop): ";
        cin >> i;
        cout << "Enter denominator: ";
        cin >> j;
        divide(i, j);
    } while (i != 0);
    return 0;
}

#include <iostream>
using namespace std;

class pwr
{
    double b;
    int e;
    double val;

public:
    pwr(double base, int exp)
    {
        b = base;
        e = exp;
        val = 1;
        if (exp == 0)
            return;
        for (; exp > 0; exp--)
            val = val * b;
    }

    pwr operator+(pwr pwr_obj)
    {

        return *(new pwr(b + pwr_obj.b, e + pwr_obj.e));
    }

    operator double() { return val; } // convert to double
};

int main()
{
    pwr x(4.0, 2);
    double a;

    a = x;             // convert to double
    cout << x + 100.2; // convert x to double and add 100.2
    cout << endl;

    pwr y(3.3, 3), z(0, 0);

    z = x + y; // no conversion, pwr operator+(pwr pwr_obj) will word here.
    
    a = z;

    cout << a;

    return 0;


}
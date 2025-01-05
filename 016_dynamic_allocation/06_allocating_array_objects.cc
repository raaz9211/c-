#include <iostream>
#include <new>
#include <string>
using namespace std;

class balance
{
    double cur_bal;
    string name;

public:

//  if you allocate array, class must contains constructor functions, one will be parameterless
    balance() {}

    balance(double n, char *s)
    {
        cur_bal = n;
        this->name = name;
    }
    void set(double n, string name)
    {
        cur_bal = n;
        this->name = name;
    }
    void get_bal(double &n, string &name)
    {
        n = cur_bal;
        name = this->name;
    }

    ~balance()
    {
        cout << "Destructing ";
        cout << name << "\n";
    }
};

int main()
{
    balance *p;
    string s;
    double n;

    try
    {
        p = new balance[3]; // allocate entire array;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    p[0].set(12387.87, "Ralph Wilson");
    p[1].set(144.00, "A. C. Conners");
    p[2].set(-11.23, "I. M. Overdrawn");

    for (int i = 0; i < 3; i++)
    {
        p[i].get_bal(n, s);

        cout << s << "'s balance is: " << n;
        cout << "\n";
    }

    delete[] p;
    return 0;
}
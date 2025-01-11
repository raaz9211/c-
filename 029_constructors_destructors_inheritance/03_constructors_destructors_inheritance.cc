#include <iostream>
using namespace std;
// base should be constructed before drive construction because derived is dependent on base.
// base destroy after derived destruction as derived is dependent on base.

class base1
{
public:
    base1() { cout << "Constructing base1\n"; }
    ~base1() { cout << "Destructing base1\n"; }
};

class base2
{
public:
    base2() { cout << "Constructing base2\n"; }
    ~base2() { cout << "Destructing base2\n"; }
};

// constructure runs order : base1 -> base2 - > derived
class derived : public base1, public base2
// // constructure runs order : base2 -> base1 - > derived
// class derived : public base2, public base1
{
public:
    derived() { cout << "Constructing derived\n"; }
    ~derived() { cout << "Destructing derived\n"; }
};

int main()
{
    derived d_ob;

    // base b_ob;

    return 0;
}
#include <iostream>
using namespace std;
// base should be constructed before drive construction because derived is dependent on base.
// base destroy after derived destruction as derived is dependent on base.

class base
{
public:
    base() { cout << "Constructing base\n"; }
    ~base() { cout << "Destructing base\n"; }
};

class derived1 : public base
{
public:
    derived1() { cout << "Constructing derived1\n"; }
    ~derived1() { cout << "Destructing derived1\n"; }
};

class derived2 : public derived1
{
public:
    derived2() { cout << "Constructing derived2\n"; }
    ~derived2() { cout << "Destructing derived2\n"; }
};

int main()
{
    derived2 d_ob;

    // base b_ob;

    return 0;
}
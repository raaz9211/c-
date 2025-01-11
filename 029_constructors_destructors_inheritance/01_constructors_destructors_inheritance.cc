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

class derived : public base{
public:
        derived() { cout << "Constructing derived\n"; }
    ~derived() { cout << "Destructing derived\n"; }
};


int main(){
    derived d_ob;

    // base b_ob;

    return 0;
}
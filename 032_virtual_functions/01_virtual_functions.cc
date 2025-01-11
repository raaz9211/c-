#include <iostream>
using namespace std;

class base
{
public:
    virtual void vfunc()
    {
        cout << "This is base's vfunction(). \n";
    }
};

class derived1 : public base
{
public:
    void vfunc()
    {
        cout << "This is derived1's vfunc().\n";
    }
};

class derived2 : public base
{
public:
    void vfunc()
    {
        cout << "This is derived2's vfunc().\n";
    }
};

int main(){
    base *p, b;
    derived1 d1;
    derived2 d2;

    // Point to derived1
    p = &b;
    p->vfunc(); // access base's vfunc()

    // Point to derived1
    p = &d1;
    p->vfunc(); // access derived1's vfunc()

    // Point to derived2
    p = &d2;
    p->vfunc(); // access derived's vfunc()

    return 0;

}

// Note : The key point here is that the kind of object to which p points determines which version of vfunc() is executed

// - Virtual functions must be nonstatic members of the classes
// - They cannot be friends
// - Constructor functions cannot be virtual, but destructor functions can

// d2.vfunc(); // calls derived2's vfunc()
// Although calling a virtual function in this manner is not wrong, it simply does not take
// advantage of the virtual nature of vfunc().
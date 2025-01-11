// - When a function is declared as virtual by a base class, it may be overridden by a derived class. However, the function does not have to be overridden.
// - When derived class fails to override a virtual function, then when an object of that derived class accesses that function

// How not overridden class get the virtual function : current class -> just 1st hierarchy -> just 12nd hierarchy  -> . . .  -> just nth hierarchy.
//                                               e.g : derived2 -> derived1 -> base

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

class derived2 : public derived1
{
public:
// vfunc() not overridden by derived2, base's is used
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

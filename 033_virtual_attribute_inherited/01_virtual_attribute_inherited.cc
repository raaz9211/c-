// When a virtual function is inherited, its virtual nature is also inherited
// Derived class that has inherited a virtual function is itself used as a base class for another derived class
// No matter how many times a virtual function is inherited, it remains virtual

#include <iostream>
using namespace std;

class base{
public:
    virtual void vfunc(){
        cout << "This is base's vfunc().\n";

    }
};


class derived1 : public base{
public:
    virtual void vfunc(){
        cout << "This is derived1's vfunc().\n";
    }
};

// derived2 inherits virtual function vfunc() from derived1.
class derived2 : public derived1{
public:
    virtual void vfunc(){
        cout << "This is derived1's vfunc().\n";
    }
};

int main(){
    base *p, b;
    derived1 d1;
    derived2 d2;

    // point to base
    p = &b;
    p->vfunc(); // access base's vfunc()


    // point to derived1
    p = &d1;
    p->vfunc(); // access derived1's vfunc()

    // point to derived2
    p = &d2;
    p->vfunc(); // access derived2's vfunc()

    return 0;
}
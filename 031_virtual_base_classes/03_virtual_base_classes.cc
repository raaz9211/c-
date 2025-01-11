// An element of ambiguity can be introduced into a C++ program when multiple base classes are inherited
// sol:
    // -  First is to apply the scope resolution operator to i and manually select one i
    // - second solution is achieved using virtual base classes
// using second soln here:

#include <iostream>
using namespace std;
class base
{
public:
    int i;
};

// // derived1 inherits base as virtual.
class derived1 : virtual public base{
public:
    int j;
};


// derived2 inherits base as virtual.
class derived2 : virtual public base{
public:
    int k;
};

// derived3 inherits both derived1 and derived2.
// This time, there is only one copy of base class
class derived3 : public derived1, public derived2{
public:
    int sum;
};

int main(){
    derived3 d_obj;

    d_obj.j = 20;
    d_obj.k = 30;
    d_obj.i = 10; // now unambiguous

    // now unambiguous
    d_obj.sum = d_obj.i + d_obj.j + d_obj.k;

    cout << d_obj.j << " " << d_obj.k << " ";
    cout << d_obj.sum << " ";

    // now unambiguous
    cout << d_obj.i << " ";



// ==================================================================
//  Even though both derived1 and derived2 secify base as virtual, base is still present in objects of either type
// define a class of type derived1
    derived1 myclass;
    myclass.i = 88;

// Note : The only difference between a normal base class and a virtual one is what occurs when
// an object inherits the base more than once
}

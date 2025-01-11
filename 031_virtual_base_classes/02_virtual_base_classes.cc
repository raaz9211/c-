// An element of ambiguity can be introduced into a C++ program when multiple base classes are inherited
// sol:
    // -  First is to apply the scope resolution operator to i and manually select one i
// using first soln here:

#include <iostream>
using namespace std;
class base
{
public:
    int i;
};

// derived1 inherits base.
class derived1 : public base{
public:
    int j;
};


// derived2 inherits base.
class derived2 : public base{
public:
    int k;
};

class derived3 : public derived1, public derived2{
public:
    int sum;
};

int main(){
    derived3 d_obj;

    d_obj.j = 20;
    d_obj.k = 30;
    d_obj.derived1::i = 10; // // scope resolved

    // scope resolved
    d_obj.sum = d_obj.derived1::i + d_obj.j + d_obj.k;

    cout << d_obj.j << " " << d_obj.k << " ";
    cout << d_obj.sum << " ";;

    // scope resolved
    cout << d_obj.derived1::i << " ";
}

// Note : This solution raises a deeper issue: What if only one copy of base is actually required? 
// Is there some way to prevent two copies from being included in derived3?
// solution is achieved using virtual base classes
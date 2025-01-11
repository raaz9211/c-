// An element of ambiguity can be introduced into a C++ program when multiple base classes are inherited

// This program contains an error and will not compile.
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
    d_obj.i = 10; // this is ambiguous, which i???

    // i ambiguous here, too
    d_obj.sum = d_obj.i + d_obj.j + d_obj.k;

    cout << d_obj.j << " " << d_obj.k << " ";
    cout << d_obj.sum;

    // also ambiguous, which i?
    cout << d_obj.i << " ";
}
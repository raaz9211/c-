// - Functions may be declared as 'const', which causes 'this' to be treated as a 'const' pointer
// - 'const' object may not invoke a 'non-const' member function
// - 'const' member function can be called by either 'const' or 'non-const' objects

// class X {
//     int some_var;
//     public:
//     int f1() const; // const member function
// };

//   - declaring a member function as const is to prevent it from modifying the object that invokes


// This program won't compile.
#include <iostream>
using namespace std;

class Demo{
    int i;
public:
    int geti() const{
        return i; // OK
    }
    void seti(int x) const{
        i = x; // error!
    }
};

int main(){
    Demo ob;

    ob.seti(1900);
    cout << ob.geti();

    return 0;
}
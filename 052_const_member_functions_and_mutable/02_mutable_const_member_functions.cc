// - 'mutable' overrides constness
// - 'mutable' member can be modified by a const member function

// Demonstrate mutable.
#include <iostream>
using namespace std;

class Demo
{
    // now i is mutable
    mutable int i;
    int j;

public:
    int geti() const
    {
        return i; // OK
    }
    void seti(int x) const
    {
        i = x; // error!
    }

    // The following function won't compile.
    // void setj(int x) const
    // {
    //     j = x; // Still Wrong!
    // }
};

int main()
{
    Demo ob;

    ob.seti(1900);
    cout << ob.geti();

    return 0;
}
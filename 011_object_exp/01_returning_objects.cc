// Returning objects from a function.
#include <iostream>
using namespace std;

class myclass
{
    int i;

public:
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

myclass f()
{
    myclass x;
    x.set_i(1);
    return x;
}

int main()
{
    myclass o;
    o = f();
    cout << o.get_i();
    return 0;
}

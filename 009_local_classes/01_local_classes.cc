// class may be defined within a function
//  class is declared within a function, it is known only to that function and unknown outside of it
// No static variables may be declared inside a local class
// local class may not use or access local variables of the function, a local class has access to static local variables

#include <iostream>
using namespace std;

void f()
{
    class myClass
    {
        int i;

    public:
        void put_i(int n) { i = n; }
        int get_i() { return i; }
    } ob;

    ob.put_i(10);
    cout << ob.get_i();
}
int main()
{
    f();
    // myClass not know here
    return 0;
}

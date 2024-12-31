// union does not include a type name, and no objects of the union can be declared
// anonymous union tells the compiler that its member variables are to share the same location
// Anonymous unions cannot contain private or protected elements

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // define anonymous union
    union
    {
        unsigned short u;
        unsigned char c[2];
    };
    // now, reference union elements directly
    u = 5555;
    cout << u << " ";
    unsigned char a = c[0];
    c[0] = c[1];
    c[1] = a;
    cout << u;

    return 0;
}

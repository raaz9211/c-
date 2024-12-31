// Like a structure, a union may also be used to define a class.
// In C++, unions may contain both member functions and variables
// all data elements share the same location in memory

// union cannot inherit any other classes of any type.
// A union cannot have virtual member functions.
// No static variables can be members of a union
// Can't overloads the = operator
#include <iostream>
using namespace std;

union swap_byte
{
    void swap();
    void set_byte(unsigned short i);
    void show_word();
    unsigned short u;
    unsigned char c[2];
};

void swap_byte::swap()
{
    unsigned char t;
    t = c[0];
    c[0] = c[1];
    c[1] = t;
}

void swap_byte::show_word()
{
    cout << u;
}

void swap_byte::set_byte(unsigned short i)
{
    u = i;
}

int main()
{
    swap_byte b;
    b.set_byte(49034);
    b.swap();
    b.show_word();
    return 0;
}
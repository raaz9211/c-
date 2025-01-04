#include <iostream>
using namespace std;

class base
{
    int i;

public:
    void set_i(int num) { i = num; }
    int get_i() { return i; }
};

class derived : public base
{
    int j;

public:
    void set_j(int num) { j = num; }
    int get_j() { return j; }
};

int main()
{
    base *bp;
    derived d[2];

    bp = d; // base pointer points to derived object

    // access derived object using base pointer
    d[0].set_i(1);
    d[1].set_i(2);

    cout << bp->get_i() << " ";
    bp++; // relative to base, not derived
    cout << bp->get_i(); // garbage value displayed

}

// Note : remember that pointer arithmetic is relative to the base type, incrementing the pointer does not cause it to point to the next object of the derived
// type
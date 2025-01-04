// pointer of one type cannot point to an object of a different type
// Exception to this rule that relates only to derived classes - base class pointer can also be used as a pointer to an object of any class derived
// , you can access only the members of the derived type that were imported from the base
// (You can cast a base pointer into a derived pointer and gain full access to the entire derived class

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
    derived d;

    bp = &d; // base pointer points to derived object

    // access derived object using base pointer
    bp->set_i(10);
    cout << bp->get_i() << " ";

    /* The following won't work. You can't access element of
        a derived class using a base class pointer.*/
    // ====COMMENTED=====
    // bp->set_j(10);
    // cout <<bp->get_j() << " ";

    // access now allowed because of cast

    ((derived *)bp)->set_j(10);
    cout << ((derived *)bp)->get_j() << " ";
}

// Note : remember that pointer arithmetic is relative to the base type, incrementing the pointer does not cause it to point to the next object of the derived
// type
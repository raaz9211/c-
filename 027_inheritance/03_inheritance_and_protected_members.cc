// If the base class is inherited as public, then the base class' protected members become protected members of the derived class
// By using protected, you can create class members that are private to their class but that can still be inherited and accessed by a derived class

#include <iostream>
using namespace std;

class base
{
protected:
    int i, j; // private to base, but accessible by derived.
public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show() { cout << i << " " << j << "\n"; }
};

class derived : public base
{
    int k;
public:
    // derived may access base's i and j
    void setk() { k = i * j; }
    void showk() { cout << k << endl; }
};

int main()
{
    derived ob;

    ob.set(2, 3); // OK, known to derived
    ob.show();    // OK, known to derived

    ob.setk();
    ob.showk();
    return 0;
}
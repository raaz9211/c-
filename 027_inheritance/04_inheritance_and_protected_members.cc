//  Derived class is used as a base class for another derived class, any protected
// member of the initial base class that is inherited (as public) by the first derived class
// may also be inherited as protected again by a second derived class

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

// i and j inherited as protected.
class derived1 : public base
{
    int k;

public:
    // derived may access base's i and j
    void setk() { k = i * j; }
    void showk() { cout << k << endl; }
};

// i and j inherited indirectly through derived1.
class derived2 : public derived1
{
    int m;

public:
    void setm() { m = i - j; } // legal
    void showm() { cout << m << "\n"; }
};

int main()
{
    derived1 ob;
    ob.set(2, 3); // OK, known to derived
    ob.show();    // OK, known to derived
    ob.setk();
    ob.showk();

    derived2 ob1;
    ob1.set(3, 4);
    ob1.show();
    ob1.setk();
    ob1.showk();
    ob1.setm();
    ob1.showm();
    return 0;
}
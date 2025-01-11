
// This program won't compile.

// base were inherited as private, then all members of base would become
// private members of derived1, which means that they would not be accessible by derived2.

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

// Now, all elements of base are private in derived1.
class derived1 : private base
{
    int k;

public:
    // derived may access base's i and j
    void setk() { k = i * j; }
    void showk() { cout << k << endl; }
};

// Access to i, j, set(), and show() not inherited.
class derived2 : public derived1
{
    int m;

public:
    // illegal because i and j are private to derived1

    void setm() { m = i - j; } // legal
    void showm() { cout << m << "\n"; }
};

int main()
{
    derived1 ob1;
    derived2 ob2;
    ob1.set(1, 2); // error, can't use set()
    ob1.show();    // error, can't use show()
    ob2.set(3, 4); // error, can't use set()
    ob2.show();    // error, can't use show()
    return 0;
}

// Note : Even though base is inherited as private by derived1, derived1 still has access to
// base's public and protected elements. However, it cannot pass along this
// privilege.
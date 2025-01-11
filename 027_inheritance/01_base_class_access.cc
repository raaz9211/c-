#include <iostream>
using namespace std;

class base
{
    int i, j;

public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show() { cout << i << " " << j << "\n"; }
};

// When the access specifier for a base class is public:
// - all public members of the base become public members of the derived class.
// - all protected members of the base become protected members of the derived class.
// - the base's private elements remain private to the base and are not accessible by members of the derived class.
class derived : public base{
    int k;
public:
    derived(int x) {k=x;};
    void showk() { cout << k << "\n"; }

};

int main(){
    derived ob(3);

    ob.set(1, 2);  // access member of base
    ob.show(); // access member of base

    ob.showk();  // uses member of derived class

    return 0;
}
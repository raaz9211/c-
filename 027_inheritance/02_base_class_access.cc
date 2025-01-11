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

// When the base class is inherited by using the private access specifier:
// - all public and protected members of the base class become private members of the derived class
class derived : private base{
    int k;
public:
    derived(int x) {k=x;};
    void showk() { cout << k << "\n"; }

};

int main(){
    derived ob(3);

    ob.set(1, 2);  // error, can't access set()
    ob.show(); // error, can't access show()

    ob.showk();  // uses member of derived class

    return 0;
}
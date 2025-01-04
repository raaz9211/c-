// Only one copy of that variable will exist and that all objects of the class
// individual copies of a static member variable are not made
// All static variables are initialized to zero before the first object is created

#include <iostream>
using namespace std;

class shared
{
    static int a;
    int b;

public:
    void set(int i, int j) { a = i, b = j; }
    void show()
    {
        cout << "This is static a: " << a;
        cout << "\nThis is non-static b: " << b;
        cout << "\n";
    }
};

// integer a is declared both inside shared and outside, this is necessary because the declaration of a inside shared does not allocate storage
// =====As a convenience, older versions of C++ did not require the second declaration====
int shared::a; // define a

int main()
{
    shared x, y;
    x.set(1, 1); // set a to 1
    x.show();
    y.set(2, 2); // change a to 2
    y.show();
    x.show(); /* Here, a has been changed for both x and y
    because a is shared by both objects. */
    return 0;
}
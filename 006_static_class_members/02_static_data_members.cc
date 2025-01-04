#include <iostream>
using namespace std;

class shared
{
public:
    static int a;
};

// integer a is declared both inside shared and outside, this is necessary because the declaration of a inside shared does not allocate storage
// =====As a convenience, older versions of C++ did not require the second declaration====
int shared::a; // define a

int main()
{
    shared::a = 99;

    cout << "This is initial value of a: " << shared::a;
    cout << "\n";
    shared x;
    cout << "This is x.a: " << x.a;
    return 0;
}
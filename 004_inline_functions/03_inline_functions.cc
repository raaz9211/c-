// function is defined inside a class declaration, it is automatically made into an inline function (if possible).
// Constructor and destructor functions may also be inlined
#include <iostream>
using namespace std;

class myClass{
    int a, b;
public:
    // Automatix inline.
    void init(int i, int j) { a = i; b = j; }
    void show() { cout << a << " " << b << endl; }

// ====This formate is also inline====
    // automatic inline
    // void init(int i, int j)
    // {
        // a = i;
        // 306 C++: The Complete Reference
        // b = j;
    // }
};

int main(){
    myClass x;

    x.init(10, 20);
    x.show();
    return 0;
}
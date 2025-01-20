// - any time you have a constructor that requires only one argument, you can use either ob(x) or ob = x to initialize an object
// - The reason for this is that whenever you create a constructor that takes one argument, you are also implicitly
//   creating a conversion from the type of that argument to the type of the class
// - C++ defines the keyword 'explicit' to stop  automatic conversion t
#include <iostream>
using namespace std;

class myclass
{
    int a;

public:
    myclass(int x) { a = x; }
    int geta() { return a; }
};

int main()
{
    myclass ob = 4; // automatically converted into myclass(4)
    cout << ob.geta();
    return 0;
}
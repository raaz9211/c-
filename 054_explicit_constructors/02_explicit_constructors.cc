#include <iostream>
using namespace std;

class myclass
{
    int a;

public:
    explicit myclass(int x) { a = x; }
    int geta() { return a; }
};

int main()
{
    myclass ob(60);
    // myclass ob = 60; // now in error
    cout << ob.geta();
    return 0;
}
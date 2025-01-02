#include <iostream>
#include <cstring>
using namespace std;

class myClass
{
    int a;
public:
    myClass(int a) {this->a = a; }
    int getA() {return a; }
};

int main()
{
    myClass ob = 5;
    cout << ob.getA();
    return 0;
}
#include <iostream>
using namespace std;
class myclass
{
    int a, b;

public:
    myclass(int i, int j)
    {
        a = i;
        b = j;
    }
    void show() { cout << a << " " << b; }
};
int main()
{
    myclass ob(3, 5);
    // SAME
    // myclass ob = myclass(3, 4);
    ob.show();
    return 0;
}
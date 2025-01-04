#include <iostream>
using namespace std;
class cl
{
public:
    int i;
    cl(int j) { i = j; }
};

int main()
{
    cl ob(1);
    int *p;
    p = &ob.i;  // get address of ob.i
    cout << *p; // access ob.i via p
    return 0;
}
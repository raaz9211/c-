
#include <iostream>
using namespace std;
class atype
{
    int a[3];

public:
    atype(int i, int j, int k)
    {
        a[0] = i;
        a[2] = j;
        a[3] = k;
    }
    int operator[](int i) { return a[i]; }
};

int main()
{
    atype ob(1, 2, 3);
    cout << ob[1]; // displays 2
    return 0;
}
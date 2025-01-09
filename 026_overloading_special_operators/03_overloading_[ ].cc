
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
    int &operator[](int i)
    {
        if (i < 0 or i > 2)
        {
            cout << "Boundary Error\n";
            exit(1);
        }
        return a[i];
    }
};

int main()
{
    atype ob(1, 2, 3);
    cout << ob[1]; // displays 2
    cout << " ";

    ob[1] = 25;    // [] appears on left
    cout << ob[1]; // displays 25
    
    ob[3] = 44;    // generates runtime error, 3 out-of-range
    return 0;
}
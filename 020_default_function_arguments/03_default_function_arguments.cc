#include <iostream>
using namespace std;

class cube
{
    int l, b, h;

public:
    cube(int l = 0, int b = 0, int h = 0)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    int volume()
    {
        return l * b * h;
    }
};

int main()
{
    cube a(2, 3, 4), b;
    cout << a.volume() << endl;
    cout << b.volume();
}
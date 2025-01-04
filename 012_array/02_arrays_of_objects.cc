// If a class defines a parameterized constructor, you may initialize each object in an array by specifying an initialization list, just like you do for other types of arrays.

#include <iostream>
using namespace std;

class cl
{
    int i;

public:
    cl(int i){
        this->i = i;
    }
    void set_i(int j) { i = j; }
    int get_i() { return i; }
};

int main()
{
    cl ob[3] = {1, 2, 3};;
    // =====We can do in this way as well.=====
    // cl ob[3] = { cl(1), cl(2), cl(3) };

    int i;
    for (i = 0; i < 3; i++)
        ob[i].set_i(i + 1);
    for (i = 0; i < 3; i++)
        cout << ob[i].get_i() << "\n";
    return 0;
}
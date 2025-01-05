// p_var = new array_type [size];
// delete [ ] p_var;

#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;

    try
    {
        p = new int[15]; // / allocate 10 integer array
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    for (int i = 0; i < 15; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < 15; i++)
    {
        cout << p[i] << " ";
    }
    delete p;
    return 0;
}
// p_var = new var_type (initializer);

#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;

    try
    {
        p = new int(15); // initialize to 15
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    cout << "At " << p << " ";
    cout << "is the value " << *p << "\n";
    delete p;
    return 0;
}
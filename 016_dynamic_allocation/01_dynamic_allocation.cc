#include <iostream>
#include <new>
using namespace std;
int main()
{
    int *p;

    try
    {
        p = new int; // allocate space for an int
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    *p = 100;

    cout << "At " << p << " ";
    cout << "is the value " << *p << "\n";
    delete p;
    return 0;
}

// Although new and delete perform functions similar to malloc() and free(),
// not need to use the sizeof operator.
// don't need to use an explicit type cast
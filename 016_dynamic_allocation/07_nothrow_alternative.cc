// p_var = new(nothrow) type;
// Demonstrate nothrow version of new.

#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;
    // if some how memory can't be allocated then instead of throwing exception wrt new C++, it will thorw error
    p = new (nothrow) int[32]; // use nothrow option

    if (!p)
    {
        cout << "Allocation failure.\n";
        return 1;
    }

    for (int i = 0; i < 32; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < 32; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p; // free the memory
    return 0;
}

// Note : This form of new is most useful when you are compiling older code with a modern C++ compiler
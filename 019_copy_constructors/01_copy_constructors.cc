/* This program creates a "safe" myArray class. Since space
for the myArray is allocated using new, a copy constructor
is provided to allocate memory when one myArray object is
used to initialize another.
*/
#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

class myArray
{
    int *p;
    int size;

public:
    myArray() {}
    myArray(int size)
    {
        try
        {
            p = new int[size];
        }
        catch (bad_alloc xa)
        {
            cout << "Allocation Failure\n";
            exit(EXIT_FAILURE);
        }
        this->size = size;
    }

    // copy constructor
    myArray(myArray &myArray_object)
    {
        try
        {
            p = new int[myArray_object.size];
        }
        catch (bad_alloc xa)
        {
            cout << "Allocation Failure\n";
            exit(EXIT_FAILURE);
        }
        for (int i = 0; i < myArray_object.size; i++)
        {
            p[i] = myArray_object.p[i];
        }
    }

    void put(int i, int j)
    {
        if (i >= 0 && i < size)
            p[i] = j;
    }

    int get(int i)
    {
        return p[i];
    }
    ~myArray() { delete[] p; }
};

int main()
{
    myArray num(10);
    int i;
    for (i = 0; i < 10; i++)
        num.put(i, i);
    for (i = 9; i >= 0; i--)
        cout << num.get(i) << " ";
    cout << "\n";
    // create another myArray and initialize with num
    myArray x(num); // invokes copy constructor
    // myArray x = num; // does not call copy constructor

    for (i = 0; i < 10; i++)
        cout << x.get(i) << " ";
}

// Note : "num.p" and "x.p" do not point to the same piece of memory

// x = num; performs the assignment operation. If = is not overloaded (as it is not here), a bitwise copy will be made.
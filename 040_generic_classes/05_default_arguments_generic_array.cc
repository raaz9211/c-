// A generic safe array example.
#include <iostream>
#include <cstdlib>
using namespace std;

template <class AType = int, int size = 10>
class atype
{
    AType *arr = arr = new AType[size];

public:
    AType &operator[](int i)
    {
        if (i < 0 || i >= size)
        {
            cout << "\nIndex value of ";
            cout << i << " is out-of-bounds.\n";
            exit(1);
        }
        return arr[i];
    }
};

int main()
{
    atype<int, 100> intarray;  // integer array, size 100
    atype<double> doublearray; // double array, default size
    atype<> defarray;          // default to int array of size 10
    int i;

    cout << "int array: ";
    for (i = 0; i < 100; i++)
        intarray[i] = i;
    for (i = 0; i < 100; i++)
        cout << intarray[i] << " ";
    cout << '\n';

    cout << "double array: ";
    for (i = 0; i < 10; i++)
        doublearray[i] = (double)i / 3;
    for (i = 0; i < 10; i++)
        cout << doublearray[i] << " ";
    cout << '\n';

    cout << "defarray array: ";
    for (i = 0; i < 10; i++)
        defarray[i] = i;
    for (i = 0; i < 10; i++)
        cout << defarray[i] << " ";
    cout << '\n';
    return 0;
}

// ■ explicitly specifying both the type and size of the array
// ■ explicitly specifying the type, but letting the size default to 10
// ■ letting the type default to int and the size default to 10
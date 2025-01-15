// A generic safe array example.
#include <iostream>
#include <cstdlib>
using namespace std;

template <class AType>
class atype
{
    AType *arr;
    int size;

public:
    atype(int size)
    {
        arr = new AType[size];
        this->size = size;
    }

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
    atype<int> intob(10);       // integer array
    atype<double> doubleob(10); // double array
    int i;
    
    cout << "Integer array: ";
    for (i = 0; i < 10; i++)
        intob[i] = i;
    for (i = 0; i < 10; i++)
        cout << intob[i] << " ";
    cout << '\n';
    
    cout << "Double array: ";
    for (i = 0; i < 10; i++)
        doubleob[i] = (double)i / 3;
    for (i = 0; i < 10; i++)
        cout << doubleob[i] << " ";
    cout << '\n';
    intob[12] = 100; // generates runtime error
    return 0;
}
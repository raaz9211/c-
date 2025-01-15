// Demonstrate non-type template arguments.

#include <iostream>
#include <cstdlib>
using namespace std;

// Here, int size is a non-type argument.
template <class AType, int size>
class atype
{
    AType *arr = new AType[size];;
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
    atype<int, 10> intob;       // integer array
    atype<double, 15> doubleob; // double array
    int i;
    
    cout << "Integer array: ";
    for (i = 0; i < 10; i++)
        intob[i] = i;
    for (i = 0; i < 10; i++)
        cout << intob[i] << " ";
    cout << '\n';

    cout << "Double array: ";
    for (i = 0; i < 15; i++)
        doubleob[i] = (double)i / 3;
    for (i = 0; i < 15; i++)
        cout << doubleob[i] << " ";
    cout << '\n';
    intob[12] = 100; // generates runtime error
    return 0;
}

// Note - Non-type parameters are restricted to integers, pointers, or references. Other types, such as float, are not allowed
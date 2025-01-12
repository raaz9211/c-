// A Generic bubble sort.
#include <iostream>
using namespace std;

template <class X>
void bubble(X items[], int size)
{
    int a, b;
    X t;
    for (int i = 1; i < size; i++)
    {
        for (int j = size - 1; j >= i; j--)
        {
            if (items[j - 1] > items[j])
            {
                // exchange elements
                t = items[j - 1];
                items[j - 1] = items[j];
                items[j] = t;
            }
        }
    }
}

int main()
{
    int iarray[7] = {7, 5, 4, 3, 9, 8, 6};
    double darray[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
    char carray[6] = {'q', 'a', 't', 'z', 'f', 't'};

    int i;

    cout << "Here is unsorted integer array: ";
    for (i = 0; i < 7; i++)
        cout << iarray[i] << ' ';
    cout << endl;

    cout << "Here is unsorted double array: ";
    for (i = 0; i < 5; i++)
        cout << darray[i] << ' ';
    cout << endl;

    cout << "Here is unsorted char array: ";
    for (i = 0; i < 6; i++)
        cout << carray[i] << ' ';
    cout << endl;

    bubble(iarray, 7);
    bubble(darray, 5);
    bubble(carray, 6);

    cout << "Here is sorted integer array: ";
    for (i = 0; i < 7; i++)
        cout << iarray[i] << ' ';
    cout << endl;
    
    cout << "Here is sorted double array: ";
    for (i = 0; i < 5; i++)
        cout << darray[i] << ' ';
    cout << endl;

    cout << "Here is sorted char array: ";
    for (i = 0; i < 6; i++)
        cout << carray[i] << ' ';
    cout << endl;

    return 0;
}
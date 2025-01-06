#include <iostream>
#include <new>
using namespace std;

class powers
{
    int x;

public:
    // overload constructor two ways.
    powers() { x = 0; }      // no initializer
    powers(int n) { x = n; } // initializer

    int getx() { return x; }
    void setx(int i) { x = i; }
};

int main()
{

    // parameterized constructor is called to create the objects for the ofTwo array
    powers of_two[] = {1, 2, 4, 8, 16}; // initialized

    // default constructor is used to construct the uninitialized "of_three" array and the dynamically allocated array
    powers of_three[5];

    int i;

    // show powers of two
    cout << "Powers of two: ";
    for (i = 0; i < 5; i++)
    {
        cout << of_two[i].getx() << " ";
    }
    cout << "\n\n";

    // set powers of three
    of_three[0].setx(1);
    of_three[1].setx(3);
    of_three[2].setx(9);
    of_three[3].setx(27);
    of_three[4].setx(81);

    // show powers of three
    cout << "Powers of three: ";
    for (i = 0; i < 5; i++)
    {
        cout << of_three[i].getx() << " ";
    }
    cout << "\n\n";

    // dynamically allocate an array
    powers *p;
    try
    {
        // default constructor is used to construct the uninitialized "of_three" array and the dynamically allocated array
        p = new powers[5]; // no initialization
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure\n";
        return 1;
    }

    // initialize dynamic array with powers of two
    for (i = 0; i < 5; i++)
    {
        p[i].setx(of_two[i].getx());
    }
    // show powers of two
    cout << "Powers of two: ";
    for (i = 0; i < 5; i++)
    {
        cout << p[i].getx() << " ";
    }
    cout << "\n\n";

    delete[] p;
    return 0;
}
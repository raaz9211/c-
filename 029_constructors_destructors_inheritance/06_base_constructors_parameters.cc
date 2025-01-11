// derived-constructor(arg-list) : base1(arg-list),
//                                 base2(arg-list),
//                                 // ...
//                                 baseN(arg-list)
// {
// // body of derived constructor
// }

#include <iostream>
using namespace std;
class base1
{
protected:
    int i;

public:
    base1(int x)
    {
        i = x;
        cout << "Constructing base1\n";
    }
    ~base1() { cout << "Destructing base1\n"; }
};

class base2
{
protected:
    int k;

public:
    base2(int x)
    {
        k = x;
        cout << "Constructing base2\n";
    }
    ~base2() { cout << "Destructing base2\n"; }
};

class derived : public base1, public base2
{
    int j;

public:
    // derived uses x; y is passed along to base.
    derived(int y, int z) : base1(y), base2(z)
    {
        cout << "Constructing derived\n";
    }
    ~derived() { cout << "Destructing derived\n"; }
    void show() { cout << i << " " << k << "\n"; }
};

int main()
{
    derived ob(3, 4);
    ob.show(); // displays 3 4

    return 0;
}

// Note : Even if a derived class' constructor does not use any arguments, it will still need to declare one if the base class requires it


// ===========================================================================================================
// A derived class' constructor function is free to make use of any and all parameters that it is declared as taking

// class derived : public base
// {
//     int j;

// public:
//     // derived uses both x and y and then passes them to base.
//     derived(int x, int y) : base(x, y)
//     {
//         j = x * y;
//         cout << "Constructing derived\n";
//     }

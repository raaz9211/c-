// Catching derived classes.
#include <iostream>
using namespace std;

class Base
{
};

class Derived : public Base
{
};

int main()
{
    Derived derived;

    try
    {
        throw derived;
    }
    catch (Base b) // exception of type 'Derived' will be caught by earlier handler(Base)
    {
        cout << "Caught a Base class.\n";
    }
    catch (Derived d)
    {
        cout << "Caught a Derived class.\n";
    }
}
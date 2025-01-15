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
    catch (Derived d) // Here it work as in right way.
    {
        cout << "Caught a Derived class.\n";
    }
    catch (Base b)
    {
        cout << "Caught a Base class.\n";
    }

    try
    {
        throw *(new Base);
    }
    catch (Derived d)
    {
        cout << "Caught a Derived class.\n";
    }
    catch (Base b) // Here it work as in right way.
    {
        cout << "Caught a Base class.\n";
    }

    try
    {
        throw *(new Base);
    }
    catch (Base b) // Here it work as in right way.
    {
        cout << "Caught a Base class.\n";
    }
    catch (Derived d)
    {
        cout << "Caught a Derived class.\n";
    }
}
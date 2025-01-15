// An exception can be thrown from outside the try block as long as it is thrown by a function that is called from within try block

#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
    }
    catch (int i)
    {
        cout << "Caught Exception #: " << i << '\n';
    }
}

int main()
{
    cout << "Start\n";

    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    
    cout << "End";
}
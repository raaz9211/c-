// catch(...) {
//     // process all exceptions
// }

// This example catches all exceptions.
#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test == 0)
        {
            throw 1; // throw int
        }
        if (test == 1)
        {
            throw 'a'; // throw char
        }
        if (test == 2)
        {
            throw 1.2; // throw double
        }
    }
    catch (...) // catch all exceptions
    { 
        cout << "Caught One!\n";
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
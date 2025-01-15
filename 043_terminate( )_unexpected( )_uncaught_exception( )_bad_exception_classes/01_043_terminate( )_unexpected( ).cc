// The terminate() function is called whenever the exception handling subsystem fails to find a matching catch statement for an exception. 
// It is also called if your program attempts to rethrow an exception when no exception was originally thrown

// Set a new terminate handler.
#include <iostream>
#include <cstdlib>
#include <exception>
using namespace std;

void my_Thandler()
{
    cout << "Inside new terminate handler\n";
    abort();
}

int main()
{
    // set a new terminate handler
    set_terminate(my_Thandler);
    try
    {
        cout << "Inside try block\n";
        throw 100; // throw an error
    }
    catch (double i)
    { // won't catch an int exception
        // ...
    }
    return 0;
}
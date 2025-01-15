// A simple exception handling example.
#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";

    try
    { // start a try block
        cout << "Inside try block\n";
        throw 100; // throw an error
        cout << "This will not execute";
    }
    catch (double d)  // won't work for an int excepti
    { 
        cout << "Caught an exception -- value is: ";
        cout << d << "\n";
    }

    cout << "End";

}
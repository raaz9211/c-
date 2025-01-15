// code associated with a catch statement will be executed only if it catches an exception. Otherwise, execution simply bypasses the catch altogether

#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";
    try
    { // start a try block
        cout << "Inside try block\n";
        cout << "Still inside try block\n";
    }
    catch (int i)
    { // catch an error
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";
    return 0;
}
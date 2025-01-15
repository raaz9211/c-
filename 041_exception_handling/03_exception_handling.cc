// An exception can be thrown from outside the try block as long as it is thrown by a function that is called from within try block

#include <iostream>
using namespace std;

void Xtest(int test)
{
    cout << "Inside Xtest, test is: " << test << "\n";
    if (test)
        throw test;
}

int main()
{
    cout << "Start\n";

    try
    { // start a try block
        cout << "Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch (int i)
    { // catch an error
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }

    cout << "End";

}
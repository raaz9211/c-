#include <iostream>
using namespace std;

void Xhandler()
{
    try
    {
        throw (string)"hello"; // throw a string *
    }
    catch (string) // catch a string
    { 
        cout << "Caught string inside Xhandler\n";
        throw; // rethrow string out of function
    }
}

int main()
{
    cout << "Start\n";
    try
    {
        Xhandler();
    }
    catch (string s)
    {
        cout << "Caught string inside main\n";
    }
    cout << "End";
    return 0;
}


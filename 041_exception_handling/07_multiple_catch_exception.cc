#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        if (test)
        {
            throw test; // int Exception
        }
        else
        {
            throw (string)"Value is zero"; // string Exception
        }
    }
    catch (int i)
    {
        cout << "Caught Exception #: " << i << '\n';
    }
    catch (const string str)
    {
        cout << "Caught a string: ";
        cout << str << '\n';
    }
}

int main()
{
    cout << "Start\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);

    cout << "End";
}
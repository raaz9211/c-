// An exception can be of any type, including class types that you create

// Catching class type exceptions.
#include <iostream>
using namespace std;

class MyException
{
public:
    string str_what;
    int what;

    MyException()
    {
        str_what = "";
        what = 0;
    }
    MyException(string str_what, int what)
    {
        this->str_what = str_what;
        this->what = what;
    }
};

int main()
{
    int i;
    try
    {
        cout << "Enter a positive number: ";
        cin >> i;
        if (i < 0)
        {
            throw MyException("Not Positive", i);
        }

        cout << i << " is the +ve no.";
    }
    catch (MyException e) // catch an error
    {
        cout << e.str_what << ": ";
        cout << e.what << "\n";
    }
}
#include <iostream>
using namespace std;

class MyException
{
public:
    MyException() {};
    MyException(string message)
    {
        cout << message << endl;
    };
};

void Xhandler()
{
    try
    {
        throw(string) "hello"; // throw a string *
    }
    catch (string) // catch a string
    {
        cout << "Caught string inside Xhandler\n";
        throw *(new MyException("My error")); // rethrow MyException out of function
    }
}

int main()
{
    cout << "Start\n";
    try
    {
        Xhandler();
    }
    catch (MyException my_exception)
    {
        cout << "Caught MyException inside main\n";
    }
    cout << "End";
    return 0;
}

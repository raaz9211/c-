// restrict the type of exceptions that a function can throw outside of itself. In
// fact, you can also prevent a function from throwing any exceptions whatsoever

// ret-type func-name(arg-list) throw(type-list)
// {
//     // ...
// }
//    - those data types contained in the comma-separated type-list may be thrown by the function
//    - If you don't want a function to be able to throw any exceptions, then use an empty list.

#include <iostream>
using namespace std;



// C++17 removed dynamic exception specifications, as a result of P0003
//  no longer part of the language, so there isn't really a way to fix it.
// that's why I am defining it here.
#define throw(...)

// This function can only throw ints, chars, and doubles.
void Xhandler(int test) throw(int, char, double)
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

int main()
{
    cout << "Start\n";
    try
    {
        Xhandler(2);
    }

    catch (int i)
    {
        cout << "Caught an integer\n";
    }
    catch (char c)
    {
        cout << "Caught char\n";
    }
    catch (double d)
    {
        cout << "Caught double\n";
    }
    cout << "End";
}
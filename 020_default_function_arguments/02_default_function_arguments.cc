#include <iostream>
using namespace std;
/* Default indent to -1. This value tells the function
to reuse the previous value. */
void iputs(string str, int indent = -1)
{
    static int i = 0; // holad previous indent value

    if (indent >= 0)
    {
        i = indent;
    }
    else
    { // resue old indent value
        indent = i;
    }

    for (; indent; indent--)
    {
        cout << " ";
    }
    cout << str << "\n";
}

int main()
{
    iputs("Hello there", 10);
    iputs("This will be indented 10 spaces by default");
    iputs("This will be indented 5 spaces", 5);
    iputs("This is not indented", 0);
    return 0;
}

// All parameters that take default values must appear to the right of those that do
// not. For example, it is incorrect to define iputs() like this
// - void iputs(int indent = -1, char *str); // wrong!
// - int myfunc(float f, char *str, int i=10, int j); // wrong!
// Using standard parameters in a template function.
#include <iostream>
using namespace std;

// Display data at specified tab position.
template <class X>
void tab_out(X data, int tab)
{
    for (; tab; tab--)
    {
        for (int i = 0; i < 8; i++)
        {
            cout << ' ';
        }
    }
    cout << data << endl;
}

int main()
{
    tab_out("This is a test", 0);
    tab_out(100, 1);
    tab_out('X', 2);
    tab_out(10 / 3.0, 3);

    return 0;
}
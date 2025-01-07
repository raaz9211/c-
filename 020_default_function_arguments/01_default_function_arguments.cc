#include <iostream>
using namespace std;

void clrscr(int size=25)
{
    for (; size; size--)
    {
        cout << endl;
    }
}

int main()
{
    int i;
    for (i = 0; i < 30; i++)
        cout << i << endl;
    cin.get();
    clrscr(); // clears 25 lines
    for (i = 0; i < 30; i++)
        cout << i << endl;
    cin.get();
    clrscr(10); // clears 10 lines
}
// void unsetf(fmtflags flags);
// The flags specified by flags are cleared. (All other flags are unaffected.) The previous flag settings are returned

#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::uppercase | ios::scientific);
    cout << 100.12 << endl; // displays 1.0012E+02

    cout.unsetf(ios::uppercase);
    cout << 100.12; // displays 1.0012e+02

    return 0;

}
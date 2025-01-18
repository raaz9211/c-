// There is an overloaded form of setf() that takes this general form:
// fmtflags setf(fmtflags flags1, fmtflags flags2);

#include <iostream>
using namespace std;
int main()
{
    // - In the first parameter, you can add any flags you want to be affected in the stream.
    // - In the second parameter, you specify a mask that determines which flags can be modified, not necessarily which specific flags within the first parameter will be changed.
    cout.setf(ios::showbase, ios::hex); // error, showpos not set
    cout << 100 << endl;                // displays 100, not +100

    cout.setf(ios::showpos, ios::showpos); // // this is correct
    cout << 100;                           // now displays +100

    return 0;
}
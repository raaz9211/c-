// There is an overloaded form of setf() that takes this general form:
// fmtflags setf(fmtflags flags1, fmtflags flags2);

#include <iostream>
using namespace std;
int main()
{
    // - In the first parameter, you can add any flags you want to be affected in the stream.
    // - In the second parameter, you specify a mask that determines which flags can be modified, not necessarily which specific flags within the first parameter will be changed.
    cout.setf(ios::showpoint | ios::showpos, ios::showpos);
    cout << 100.0; // displays 100.0, not +100.0
    return 0;
}
// To set a flag, use the setf() function. This function is a member of ios
//  - fmtflags setf(fmtflags flags);

// This function returns the previous settings of the format flags and turns on those flags specified by flags
// - stream.setf(ios::showpos); `stream` is the stream you wish to affect.

#include <iostream>
using namespace std;

int main()
{

    // You can OR together two or more flags,
    // cout.setf(ios::showpoint | ios::showpos)
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    
    cout << 100.0; // displays +100.0
    return 0;
}

// Note : 
// - `setf()` is a member function of the ios class and affects streams created by that class there is no concept in C++ of global format status. Each stream maintains its own format status information individually.
// - Because the format flags are defined within the ios class, you must access their
// values by using ios and the scope resolution operator. For example, showbase by
// itself will not be recognized. You must specify ios::showbase.
// Use the setiosflags() manipulator to directly set the various format flags related to a stream

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{



    cout << setiosflags(ios::showpos);
    cout << setiosflags(ios::showbase);
    // some thing in ios
    // cout.setf(ios::hex, ios::basefield);

    cout << 123 << endl << hex << 124;


    return 0;
}

// Note : The manipulator setiosflags() performs the same function as the member function setf().
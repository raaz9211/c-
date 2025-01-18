// The flags() function has a second form that allows you to set all format flags associated with a stream.
// fmtflags flags(fmtflags f);

#include <iostream>
using namespace std;

// This function displays the status of the format flags.
void show_flags()
{
    ios::fmtflags f;

    f = cout.flags(); // get flag settings

    // check each flag
    for (long i = 0x4000; i; i = i >> 1)
    {
        if (i & f)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    cout << " \n";
}

int main(){
    // show default condition of format flags
    show_flags();

    // showpos, showbase, oct, right are on, others off
    ios::fmtflags flag_mask = ios::showpos | ios::showbase | ios::oct | ios::right;
    // ios::fmtflags flag_mask = (ios::fmtflags)0; // uncommnet it to validate that `flags()` will off/wipe old flag and on wrt new mask.

    cout.flags(flag_mask); // set all flags

    show_flags();

    return 0;
}
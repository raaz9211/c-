// The following program uses flags() to display the setting of the format flags relative to cout
// fmtflags flags( );

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

// We can do same in another way
// void show_flags()
// {
//     ios::fmtflags f;

//     f = cout.flags(); // get flag settings

//     // check each flag
//     for (long i = f; i; i = i >> 1)
//     {
//         if (i & 1)
//         {
//             cout << "1 ";
//         }
//         else
//         {
//             cout << "0 ";
//         }
//     }
//     cout << " \n";
// }

int main()
{
    // show default condition of format flags
    show_flags();
    cout.setf(ios::right | ios::showpoint | ios::fixed);
    show_flags();
    return 0;
}
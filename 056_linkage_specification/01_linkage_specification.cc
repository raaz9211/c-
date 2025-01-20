// - By default, functions are linked as C++ functions. However, by using a 'linkage specification',
//  you can cause a function to be linked for a different type of language
// extern "language" function-prototype
// - 'language' denotes the desired language
// - Some allow linkage specifiers for 'Fortran', 'Pascal', or 'BASIC'

#include <iostream>
using namespace std;

extern "C" void myCfunc()
{
    cout << "This links as a C function.\n";
}

int main()
{
    myCfunc();
    return 0;
}
// This will link as a C function.

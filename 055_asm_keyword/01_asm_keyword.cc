// - there is no C++ statement that disables interrupts
// - C++ provides a "trap door" that allows you to drop into assembly code at any time, bypassing the C++ compiler entirely. This "trap door" is the asm statement
// -  assembly code is compiled without any modification
// asm ("op-code");
// - where 'op-code' is the assembly language instruction that will be embedded in your program

// asm instruction ;
// asm instruction newline
// asm {
//     instruction sequence
// }
// - Here, 'instruction' is any valid assembly language instruction

#include <iostream>
using namespace std;

int main()
{
    asm int 5; // generate intertupt 5
    return 0;
}
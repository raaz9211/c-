// streamsize width(streamsize w); - you can specify a minimum field width by using the width() function
// streamsize precision(streamsize p); - , you can determine the number of digits to be displayed after the decimal point by using the precision()
// char fill(char ch); - You can specify the fill character by using the fill() function

#include <iostream>
using namespace std;

int main()
{
    // width must be set before each output
    cout.width(10);
    cout << 10.12345 << "\n"; // displays 10.12

    cout.fill('*');
    cout.width(10);           // setted width before each output
    cout << 10.12345 << "\n"; // displays *****10.12

    // field width applies to strings, too
    cout.width(10);
    cout << "Hi!" << "\n"; // displays *******Hi!

    cout.width(10);
    cout.setf(ios::left); // left jusify
    cout << 10.12345;     //  displays 10.12*****
    return 0;
}
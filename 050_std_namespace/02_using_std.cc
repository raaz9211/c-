// Bring only a few names into the global namespace.
#include <iostream>

// gain access to cout, cin, and hex
using std::cout;
using std::cin;
using std::hex;
int main()
{
    int val;

    cout << "Enter a number: ";
    cin >> val;
    
    cout << "This is your number: ";
    cout << hex << val;
    return 0;
}
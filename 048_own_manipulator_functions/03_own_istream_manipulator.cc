#include <iostream>
using namespace std;

// A simple input manipulator.
istream &get_pass(istream &stream)
{
    cout << '\a'; // sound bell
    cout << "Enter password: ";
    return stream;
}

int main()
{
    string password;
    cin >> get_pass >> password;

    cout << "Logged In";
    return 0;
}
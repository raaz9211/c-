#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << hex << 100 << endl;

    cout << setfill('?') << setw(10) << 2343.0 << endl;

    int hex_in;
    cin >> hex >> hex_in;
    cout.unsetf(ios::basefield);
    cout << hex_in;

    return 0;
}
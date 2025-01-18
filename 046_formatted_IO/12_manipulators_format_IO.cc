// `boolapha` allows true and false values to be input and output using the words "true" and "false" rather than numbers.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    bool b;

    b = true;
    cout << "normal : " << b << " ";
    cout << "boolalpha : " << boolalpha << b << endl;

    cout << "Enter a Boolean value: ";
    cin >> boolalpha >> b;
    cout << "Here is what you entered: " << b;


    return 0;
}

// Note : The manipulator setiosflags() performs the same function as the member function setf().
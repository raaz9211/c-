// Function template example.
#include <iostream>
using namespace std;

// This is a function template.
template <class X> void swap_args(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 10, j = 20;
    double x = 10.1, y = 23.3;
    char a = 'x', b = 'z';

    cout << "Original i, j: " << i << ' ' << j << '\n';
    cout << "Original x, y: " << x << ' ' << y << '\n';
    cout << "Original a, b: " << a << ' ' << b << '\n';

    swap_args(i, j); // swap integers
    swap_args(x, y); // swap floats
    swap_args(a, b); // swap chars

    cout << "Swapped i, j: " << i << ' ' << j << '\n';
    cout << "Swapped x, y: " << x << ' ' << y << '\n';
    cout << "Swapped a, b: " << a << ' ' << b << '\n';
}

// Note:
//     - Generic function is also called a template function.
//     - When the compiler creates a specific version of this function, it is said to have created a 'specialization' or 'a generated function'
//     - Generic function definition does not have to be on the same line.
//     // template <class X>
//     // void swapargs(X &a, X &b)
//     - No other statements can occur between the template
//     // // This will not compile.
//     // template <class X>
//     // int i; // this is an error
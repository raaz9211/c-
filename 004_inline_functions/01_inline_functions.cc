// In C++, you can create short functions that are not actually called; rather, their code is expanded in line at the point of each invocation
//  allow you to create very efficient code

// inline is actually just a request, not a command, to the compiler. The compiler can choose to ignore it

#include <iostream>
using namespace std;

inline int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    cout << max(10, 20);
    cout << endl;
    cout << max(99, 88);
}
// each time a function is called, a significant amount of overhead is generated.
// arguments are pushed onto the stack and various registers are saved when a function is called, and then restored when the function returns

// ======= how complier looks =======

// #include <iostream>
// using namespace std;

// int main()
// {
// cout << (10>20 ? 10 : 20);
// cout << " " << (99>88 ? 99 : 88);
// return 0;
// }
#include <iostream>
using namespace std;

int myfunc(int a) {return a;}
int myfunc(int a, int b) {return a*b;}


int main(){
    int (*fp1)(int a);  // pointer to int f(int)

    fp1 = myfunc;

    cout << fp1(5) << endl;

    int (*fp2)(int a, int b);  // pointer to int f(int, int)

    fp2 = myfunc;

    cout << fp2(5, 10) << endl;
}

// Old way to overload : `overload func-name;`
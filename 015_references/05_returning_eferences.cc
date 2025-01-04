#include <iostream>
using namespace std;

char s[80] = "Hello There";

char &replace(int i){
    return s[i];
}

int main(){
    replace(5) = '-' ; // assign '-' to space after Hello.

    cout << s;

    return 0;
}


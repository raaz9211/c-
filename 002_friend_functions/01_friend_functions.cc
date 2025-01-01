// A friend function has access to all private and protected members of the class for which it is a friend
// Usefull whe two or more classes may contain members that are interrelated

#include <iostream>
using namespace std;

class myClass {
    int a, b;
public:
    friend int sum(myClass x);
    void set_ab(int i, int j);
};


void myClass::set_ab(int i, int j){
    a = i;
    b = j;
}

// Note: sum() is not a member function of any class.

int sum(myClass x){
    // Because sum() is a friend of myclass, it can directly access a and b.
    return x.a + x.b;
}

int main(){
    myClass n;

    n.set_ab(4, 5);

// sum() is called without the use of the dot operator. Because it is not a member function
    cout << sum(n);
    
    return 0;
}
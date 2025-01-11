// - A pure virtual function is a virtual function that has no definition within the base class
    // virtual type func-name(parameter-list) = 0;

// - When a virtual function is made pure, any derived class must provide its own definition. If the e derived class fails to override the pure virtual function, a compile-time error.

#include <iostream>
using namespace std;

class number{
protected:
    int val;
public:
    void setval(int i) { val = i;}

    // show() is a pure virtual function.
    virtual void show() = 0;

};

class hextype : public number{
public:
    void show(){
        cout << hex << val << endl;
    }
};

class dectype : public number{
public:
    void show(){
        cout << val << endl;
    }
};

class octtype : public number{
public:
    void show(){
        cout << oct << val << endl;
    }
};


int main(){
    dectype d;
    hextype h;
    octtype o;

    d.setval(20);
    d.show();  // displays 20 - decimal

    h.setval(20);
    h.show(); //  displays 14 - hexadecimal

    o.setval(20);
    o.show(); // displays 24 - octal

    return 0;
}

// ========================================================================================
// Abstract Classes:
//     - A class that contains at least one pure virtual function is said to be abstract.
//     - No objects of an abstract class may be created as pure virtual function don't have definition.
//     - You can create pointers and references to an abstract class, This allows abstract classes to support run-time polymorphism.
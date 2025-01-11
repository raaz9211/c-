// Virtual function practical example.

#include <iostream>
using namespace std;

class convert{
protected:
    double val1; // initial value
    double val2; // converted value
public:
    convert(double i){
        val1 = i;
    }
    double getconv() {return val2;}
    double getinit() {return val1;}

    virtual void compute() = 0;
};

// Liters to gallons.
class l_to_g : public convert{
public:
    l_to_g(double i) : convert(i) {}
    void compute(){
        val2 = val1 / 3.7854;
    }
};

//Fahrenheit to Celsius
class f_to_c : public convert{
public:
    f_to_c(double i) : convert(i) {}
    void compute(){
        val2 =  (val1-32) / 1.8;
    }
};

// Feet to meters
class f_to_m : public convert {
public:
    f_to_m(double i) : convert(i) { }
    void compute() {
        val2 = val1 / 3.28;
    }
};

int main(){
    convert *p; // pointer to base class

    l_to_g lg_obj(4);
    f_to_c fc_obj(70);

    p  = &lg_obj;
    p->compute();
    cout << p->getinit() << " liters is " << p->getconv() << " gallons\n"; // l_to_g

    p  = &fc_obj;
    p->compute();
    cout << p->getinit() << " in Fahrenheit is " << p->getconv() << " Celsius\n"; // l_to_g



// Handling a new case is a very easy matter / addition of new feature.

    f_to_m fm_obj(10);
    p  = &fm_obj;
    p->compute();
    cout << p->getinit() << " in Feet is " << p->getconv() << " Meters\n"; // l_to_g

}
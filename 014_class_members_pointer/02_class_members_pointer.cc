// pointer is called a pointer to a class member or a pointer-to-member
// a pointer to a member provides only an offset into an object of the member's class at which that member can be found
// , you must use the special pointer-to-member operators .* and –>*
#include <iostream>
using namespace std;

class cl
{
public:
    cl(int i) { val = i; }
    int val;
    int double_val() { return val + val; }
};

int main()
{

    int cl::*data;     // data member pointer
    int (cl::*func)(); // functino member pointer
    cl ob1(1), ob2(2); // create object

    cl *p1 = &ob1;
    cl *p2 = &ob2;
    
    data = &cl::val;        // get the offset of val
    func = &cl::double_val; // get the offset of dounle_val

    cout << "Here are values: ";
    cout << p1->*data << " " << p2->*data << "\n";
    cout << "Here they are doubled: ";
    cout << (p1->*func)() << " ";
    cout << (p2->*func)() << "\n";
}
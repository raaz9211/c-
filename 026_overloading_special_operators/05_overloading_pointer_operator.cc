//  The operator–>() function must return a pointer to an object of the class that operator–>() operates
// object->element

#include <iostream>
using namespace std;

class myClass
{
public:
    int i;
    myClass *operator->() { return this; }
};

int main()
{
    myClass ob;

    // myClass::ob is not a pointer still I am able to access with `->`
    ob->i = 10;

    cout << ob.i << " " << ob->i;
    return 0;
}
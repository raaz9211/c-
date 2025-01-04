// friend functions are not members of a class and, therefore, are not passed a this pointer
// . Second, static member functions do not have a this pointer.
#include <iostream>
using namespace std;
class cl
{
public:
    int i;
    // this->i refer to the class member i
    cl(int i) { this->i = i; }

};

int main()
{
    cl ob(1);
    cout << ob.i; // access ob.i
    return 0;
}
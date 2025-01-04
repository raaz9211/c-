// Avoiding to run destructor twice.

// ||Note||: Passing all but the smallest objects by reference is faster than
// passing them by value. Arguments are usually passed on the stack. Thus, large objects
// take a considerable number of CPU cycles to push onto and pop from the stack.

#include <iostream>
using namespace std;
class cl
{
    int id;

public:
    int i;
    cl(int i);
    ~cl();
    void neg(cl &o) { o.i = -o.i; } // no temporary created
};

cl::cl(int num)
{
    cout << "Constructing " << num << "\n";
    id = num;
}
cl::~cl()
{
    cout << "Destructing " << id << "\n";
}

int main()
{
    cl o(1);
    o.i = 10;
    o.neg(o);
    cout << o.i << "\n";
    return 0;
}
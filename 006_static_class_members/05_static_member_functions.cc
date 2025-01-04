// They may only directly refer to other static members of the class.
// A static member function does not have a this pointer
// There cannot be a static and a non-static version of the same function
// A static member function may not be virtual
// cannot be declared as const or volatile

#include <iostream>
using namespace std;

class cl
{
    static int resource;

public:
    static int get_resource()
    {
        if (resource)
            return 0; // resource already in use
        else
        {
            resource = 1;
            return 1; // resource allocated to this object
        }
    }
    void free_resource() { resource = 0; }
};

int cl::resource;

int main()
{
    cl ob1, ob2;
    // get_resource() is static so may be called independent of any object.
    if (cl::get_resource())
        cout << "ob1 has resource\n";
    if (!cl::get_resource())
        cout << "ob2 denied resource\n";

    ob1.free_resource();

    if (ob2.get_resource())
        cout << "ob1 has resource\n";
    return 0;
}
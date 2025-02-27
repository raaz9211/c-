#include <iostream>
using namespace std;

class cl
{
    static int resource;

public:
    int get_resource()
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

int cl::resource; // define resource

int main()
{
    cl ob1, ob2;

    if (ob1.get_resource())
        cout << "ob1 has resource\n";
    if (!ob2.get_resource())
        cout << "ob2 denied resource\n";

    ob1.free_resource(); // let someone else use it
    if (ob2.get_resource())
        cout << "ob2 can now use resource\n";
}
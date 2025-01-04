#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;
    Counter() { count++; }
    ~Counter() { count--; }
};

int Counter::count;

void makeObject()
{
    Counter counter;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
    // temp is destroyed when f() returns

    return;
}
int main()
{
    Counter counter1;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";

    Counter counter2;
    cout << "Objects in existence: ";
    cout << Counter::count << "\n";

    makeObject();

    cout << "Objects in existence: ";
    cout << Counter::count << "\n";
}
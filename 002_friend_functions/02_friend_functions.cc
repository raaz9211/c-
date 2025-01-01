// Here a friend function allows you to generate more efficient code
#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2; // forward declaration

class C1
{
    int status; // IDLE if off, INUSE if on screen.
public:
    void set_status(int state)
    {
        status = state;
    }
    friend int idle(C1 a, C2 b);
};

class C2
{
    int status; // IDLE if off, INUSE if on screen.
public:
    void set_status(int state)
    {
        status = state;
    }
    friend int idle(C1 a, C2 b);
};

int idle(C1 a, C2 b)
{
    return !(a.status || b.status);
}

int main()
{

    C1 x;
    C2 y;

    x.set_status(IDLE);
    y.set_status(IDLE);

    if (idle(x, y))
    {
        cout << "Screen can be used.\n";
    }
    else
    {
        cout << "In use.\n";
    }

    x.set_status(INUSE);

    if (idle(x, y))
    {
        cout << "Screen can be used.\n";
    }
    else
    {
        cout << "In use.\n";
    }
    return 0;
}
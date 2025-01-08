// You can overload new and delete globally by overloading these operators outside of any class declaration.
// When new and delete are overloaded globally, C++'s default new and delete are ignored and the new operators are used for all allocation

#include <iostream>
#include <new>

using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}

    loc(int longitude, int latitude)
    {
        this->longitude = longitude;
        this->latitude = latitude;
    }

    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
};

// Global new
void *operator new(size_t size)
{
    void *p;

    cout << "in overloaded new. \n";

    p = malloc(size);

    if (!p)
    {
        throw new bad_alloc;
    }
    return p;
}

// Global delete
void operator delete(void *p)
{
    cout << "In overloaded delete.\n";
    free(p);
}

int main()
{
    loc *p1, *p2;
    float *f;

    try
    {
        p1 = new loc(10, 20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p1.\n";
        return 1;
        ;
    }
    try
    {
        p2 = new loc(-10, -20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p2.\n";
        return 1;
        ;
    }

    try
    {
        f = new float; // uses overloaded new, too
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p2.\n";
        return 1;
    }

    *f = 10.10F;
    cout << *f << endl;

    p1->show();
    p2->show();
    delete p1;
    delete p2;
    delete f;
    return 0;
}


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

    // new overloaded relative to loc.
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

    // delete overloaded relative to loc.
    void operator delete(void *p)
    {
        cout << "In overloaded delete.\n";
        free(p);
    }

    // new[] overloaded relative to loc.
    void *operator new[](size_t size)
    {
        void *p;

        cout << "in overloaded new[]. \n";

        p = malloc(size);

        if (!p)
        {
            throw new bad_alloc;
        }
        return p;
    }

    // delete[] overloaded relative to loc.
    void operator delete[](void *p)
    {
        cout << "In overloaded delete[].\n";
        free(p);
    }
};

int main()
{
    loc *p1, *p2;

    try
    {
        p1 = new loc(10, 20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p1.\n";
        return 1;
    }

    try
    {
        p2 = new loc[10];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p2.\n";
        return 1;
    }

    p1->show();
    for (int i = 0; i < 10; i++)
    {
        p2[i].show();
    }

    delete p1;
    delete [] p2;

    return 0;
}

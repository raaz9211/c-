// Ceating an operator function that can be passed an arbitrary number of parameters.
// double operator()(int a, float f, char *s);
// O(10, 23.34, "hi");
// O.operator()(10, 23.34, "hi");

#include <iostream>
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

    loc operator+(loc loc_obj)
    {
        cout << "Overload + \n";

        loc *temp_log = new loc();

        temp_log->longitude = loc_obj.longitude + longitude;
        temp_log->latitude = loc_obj.latitude + latitude;

        return *temp_log;
    }
    // Overload ( ) for loc.
    loc operator()(int i, int j)
    {
        cout << "Overload ( ) \n";
        longitude = i;
        latitude = j;
        return *this;
    }
};

int main()
{
    loc ob1(10, 20), ob2(1, 1);

    ob1.show();

    ob1(7, 8); // can be executed by itself
    ob1.show();

    ob1 = ob2 + ob1(10, 10); // can be used in expressions
    ob1.show();
    return 0;
}
// The comma is a binary operator.

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
        loc *temp_log = new loc();

        temp_log->longitude = loc_obj.longitude + longitude;
        temp_log->latitude = loc_obj.latitude + latitude;

        return *temp_log;
    }

    // overload comma for loc
    loc operator,(loc loc_obj)
    {
        loc *temp_log = new loc();

        temp_log->longitude = loc_obj.longitude;
        temp_log->latitude = loc_obj.latitude;

        cout << loc_obj.longitude << " " << loc_obj.latitude << endl;

        return *temp_log;
    }
};

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(1, 1);

    ob1.show();
    ob2.show();
    ob3.show();

    cout << endl;

    ob1 = (ob1, ob2 + ob2, ob3);

    ob1.show();
    ob2.show();
    ob3.show();

    return 0;
}
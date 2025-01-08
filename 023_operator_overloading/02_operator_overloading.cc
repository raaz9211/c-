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

    loc operator+(loc loc_obj)
    {
        loc *temp_log = new loc();

        temp_log->longitude = loc_obj.longitude + longitude;
        temp_log->latitude = loc_obj.latitude + latitude;

        return *temp_log;
    }

    loc operator-(loc loc_obj)
    {
        loc *temp_log = new loc();

        temp_log->longitude = loc_obj.longitude - longitude;
        temp_log->latitude = loc_obj.latitude - latitude;

        return *temp_log;
    }

    loc operator=(loc loc_obj)
    {
        loc *temp_log = new loc();

        this->longitude = loc_obj.longitude;
        this->latitude = loc_obj.latitude;

        return *this;
    }

    loc operator++()
    {
        this->longitude++;
        this->latitude++;

        return *this;
    }

    // If the ++ precedes its operand, the operator++() function is called. If the ++ follows its
    // operand, the operator++(int x) is called and x has the value zero.
    loc operator++(int x)
    {
        this->longitude++;
        this->latitude++;

        return *this;
    }

    loc operator+=(loc obj)
    {

        this->longitude += obj.longitude;
        this->latitude += obj.latitude;

        return *this;
    }

    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
};

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(90, 90);

    ob1.show();
    ob2.show();

    ++ob1;
    ob1.show(); // displays 11 21

    ob2 = ++ob1;
    ob1.show(); // displays 12 22
    ob2.show(); // displays 12 22

    ob1 = ob2 = ob3; // multiple assignment
    ob1.show();      // displays 90 90
    ob2.show();      // displays 90 90

    ob2++;
    ob2.show();

    loc ob4(12, 12);
    ob2 += ob4;
    ob2.show();
}
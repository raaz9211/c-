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

    friend loc operator++(loc &obj);
    friend loc operator--(loc &obj);

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

// Must pass the operand as a reference parameter because friend functions do not have this pointers
loc operator++(loc &obj)
{
    obj.longitude++;
    obj.latitude++;

    return obj;
}

loc operator--(loc &obj)
{
    obj.longitude--;
    obj.latitude--;

    return obj;
}

int main()
{

    loc ob1(10, 20), ob2;
    ob1.show();

    ++ob1;
    ob1.show(); // displays 11 21

    ob2 = ++ob1;
    ob2.show(); // displays 12 22

    --ob2;
    ob2.show(); // displays 11 21
    return 0;
}

// friend, postfix version of ++
// for  postfix, simply specify a second, dummy integer parameter
    // friend loc operator++(loc &op, int x);
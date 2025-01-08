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

    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
};

int main()
{
    loc ob1(10, 20), ob2(5, 30);

    ob1.show(); // displays 10 20
    ob2.show(); // displays 5 30
    
    (ob1+ob2).show(); // displays outcome of ob1+ob2

    ob2 = ob1 + ob2;

    ob2.show();
}
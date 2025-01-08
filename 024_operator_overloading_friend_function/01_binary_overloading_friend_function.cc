#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {} // needed to construct temporaries
    loc(int longitude, int latitude)
    {
        this->longitude = longitude;
        this->latitude = latitude;
    }

    friend loc operator+(loc loc_obj1, loc loc_obj2); // now a friend

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
    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
};

// friend function is not a member of the class, it does
// not have a this pointer. Therefore, an overloaded friend operator function is passed the
// operands explicitly
loc operator+(loc loc_obj1, loc loc_obj2)
{
    loc *temp_log = new loc();

    temp_log->longitude = loc_obj1.longitude + loc_obj2.longitude;
    temp_log->latitude = loc_obj1.latitude + loc_obj2.latitude;

    return *temp_log;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30);
    ob1 = ob1 + ob2;
    ob1.show();
    return 0;
}

// Note : There are some restrictions that apply to friend operator functions. First, you may
// not overload the =, ( ), [ ], or –> operators by using a friend function
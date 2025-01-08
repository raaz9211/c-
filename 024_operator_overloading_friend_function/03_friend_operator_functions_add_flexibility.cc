// In normal + overload ||loc operator+(loc loc_obj)||: because we can pass left operand as parameter.
//     Ob + 100 // valid
//     100 + Ob // invalid

#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}

    // In normal + overload ||loc operator+(loc loc_obj)||:
    loc(int longitude, int latitude)
    {
        this->longitude = longitude;
        this->latitude = latitude;
    }

    friend loc operator+(loc op1, int op2);
    friend loc operator+(int op2, loc op1);

    void show()
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
};

loc operator+(loc op1, int op2)
{
    loc ob;

    ob.longitude = op1.longitude + op2;
    ob.latitude = op1.latitude + op2;
    return ob;
}

loc operator+(int op1, loc op2)
{
    loc ob;

    ob.longitude = op1 + op2.longitude;
    ob.latitude = op1 + op2.latitude;
    return ob;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(7, 14);
    ob1.show();
    ob2.show();
    ob3.show();

    ob1 = ob2 + 10; // both of these
    ob3 = 10 + ob2; // are valid
    ob1.show();
    ob3.show();
}

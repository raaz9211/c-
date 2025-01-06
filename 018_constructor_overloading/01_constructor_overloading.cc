#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class date
{
    int day, month, year;

public:
    date(string d)
    {
        sscanf(d.c_str(), "%d%*c%d%*c%d", &month, &day, &year);
    }

    date(int m, int d, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void show_date()
    {
        cout << month << "/" << day;
        cout << "/" << year << "\n";
    }
};

int main()
{
    date ob1(12, 4, 2001);
    date ob2("10/22/2001");

    ob1.show_date();
    ob2.show_date();
    return 0;
}
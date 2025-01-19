#include <iostream>
using namespace std;

class box
{
    int x, y;

public:
    box(int i, int j)
    {
        x = i;
        y = j;
    }
    // Output a box
    friend ostream &operator<<(ostream &stream, box box_object);
};

ostream &operator<<(ostream &stream, box box_object)
{
    for (int i = 0; i < box_object.x; i++)
    {
        stream << "*";
    }
    stream << endl;

    for (int j = 1; j < box_object.y - 1; j++)
    {
        for (int i = 0; i < box_object.x; i++)
            if (i == 0 || i == box_object.x - 1)
            {
                stream << "*";
            }
            else
            {
                stream << " ";
            }
        stream << endl;
    }
    for (int i = 0; i < box_object.x; i++)
    {
        stream << "*";
    }
    stream << "\n";
    return stream;
}

int main()
{
    box a(14, 6), b(30, 7), c(40, 5);
    cout << "Here are some boxes:\n";
    cout << a << b << c;
    return 0;
}
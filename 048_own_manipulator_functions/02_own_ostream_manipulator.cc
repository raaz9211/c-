#include <iostream>
using namespace std;

// Right Arrow
ostream &ra(ostream &stream)
{
    stream << "------> ";
    return stream;
}

// Left Arrow
ostream &la(ostream &stream)
{
    stream << " <------";
    return stream;
}

int main()
{
    cout << "High balance " << ra << 1233.23 << "\n";
    cout << "Over draft " << ra << 567.66 << la;
    return 0;
}
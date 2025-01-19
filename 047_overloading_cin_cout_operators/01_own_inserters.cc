#include <iostream>
#include <cstring>
using namespace std;


class phonebook
{
// all members were made public
public:
    string name;
    int areacode;
    int prefix;
    int num;
    phonebook(string name, int areacode, int prefix, int num)
    {
        this->name = name;
        this->areacode = areacode;
        this->prefix = prefix;
        this->num = num;
    }
};

// Display name and phone number.

ostream &operator<<(ostream &stream, phonebook phonebook_obj)
{
    stream << phonebook_obj.name << endl;
    stream << phonebook_obj.areacode << endl;
    stream << phonebook_obj.prefix << "-" << phonebook_obj.num << endl;
    return stream;
}

int main()
{
    phonebook a("Ted", 111, 555, 1234);
    phonebook b("Alice", 312, 555, 5768);
    phonebook c("Tom", 212, 555, 9991);

    cout << a << b << c;
}

// Note :  overloaded inserters cannot be members of the class for which they are overloaded as it need to access member of `ostream` class
//         Since overloaded inserters are not members, how can they access the private elements of a class?
//         Make the inserter a friend of the class


// suggestion:
        // The inserter for the phonebook class works fine unless the value of num is
        // something like 0034, in which case the preceding zeroes will not be displayed. To fix
        // this, you can either make num into a string or you can set the fill character to zero
        // and use the width( ) format function to generate the leading zeroes. The solution is
        // left to the reader as an exercise.
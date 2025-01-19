#include <iostream>
#include <cstring>
using namespace std;


class phonebook
{
// now private
    string name;
    int areacode;
    int prefix;
    int num;
public:
    phonebook(string name, int areacode, int prefix, int num)
    {
        this->name = name;
        this->areacode = areacode;
        this->prefix = prefix;
        this->num = num;
    }
    friend ostream &operator<<(ostream &stream, phonebook phonebook_obj);
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
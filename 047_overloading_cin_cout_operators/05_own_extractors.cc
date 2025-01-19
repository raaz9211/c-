#include <iostream>
using namespace std;


class phonebook
{
// now private
    string name;
    int areacode;
    int prefix;
    int num;
public:
    phonebook() { };
    phonebook(string name, int areacode, int prefix, int num)
    {
        this->name = name;
        this->areacode = areacode;
        this->prefix = prefix;
        this->num = num;
    }
    friend ostream &operator<<(ostream &stream, phonebook phonebook_obj);
    friend istream &operator>>(istream &stream, phonebook &phonebook_obj);

};

// Display name and phone number.
ostream &operator<<(ostream &stream, phonebook phonebook_obj)
{
    stream << phonebook_obj.name << endl;
    stream << phonebook_obj.areacode << endl;
    stream << phonebook_obj.prefix << "-" << phonebook_obj.num << endl;
    return stream;
}

// Input name and telephone number.
istream &operator>>(istream &stream, phonebook &phonebook_obj)
{
    stream >> phonebook_obj.name;
    stream >> phonebook_obj.areacode;
    stream >> phonebook_obj.prefix;
    stream >> phonebook_obj.num;
    return stream;
}


int main()
{
    phonebook a;

    cin >> a;
    cout << a;
}

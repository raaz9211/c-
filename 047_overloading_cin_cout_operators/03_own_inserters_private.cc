// Example with two class

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

class student
{
// now private
    string name;
    int roll_no;
public:
    student(string name, int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }
    friend ostream &operator<<(ostream &stream, student student_obj);
};


// Display student name and roll number.
ostream &operator<<(ostream &stream, student student_obj)
{
    stream << student_obj.name << endl;
    stream << student_obj.roll_no << endl;
    return stream;
}

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
    cout << a;
    cout << endl;

    student stud("Raj", 9211);
    cout << stud;
}


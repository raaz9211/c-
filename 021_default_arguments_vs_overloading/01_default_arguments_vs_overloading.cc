// A customized version of strcat().
#include <iostream>
#include <cstring>
using namespace std;

// A custom version of strcat().
void mystrcat(string s1, string s2, int len = -1)
{

    if (len == -1)
    {
        cout << s1 + s2 << endl;
    }
    else
    {
        cout << s1 + s2.substr(0, len) << endl;
    }
}

int main()
{
    string str1 = "This is a test";
    string str2 = "0123456789";
    mystrcat(str1, str2, 5); // concatenate 5 chars
    cout << str1 << '\n';
    str1 = "This is a test"; // reset str1
    mystrcat(str1, str2);           // concatenate entire string
    cout << str1 << '\n';
    return 0;
}
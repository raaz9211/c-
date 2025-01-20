#include <iostream>
using namespace std;

class myclass
{
    int a;

public:
    myclass() { }
    explicit myclass(int x) { a = x; }
    int geta() { return a; }

    operator int&(){
        return a;
    }

};

int main()
{
    myclass ob;
    ob = 6; //experiment: but did not work.
    cout << ob.geta();
    return 0;
}
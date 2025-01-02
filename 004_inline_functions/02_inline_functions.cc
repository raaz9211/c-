#include <iostream>
using namespace std;

class myClass{
    int a, b;
public:
    inline void init(int i, int j){
        a = i;
        b = j;
    }

    inline void show(){
        cout << a << " " << b << endl;
    }
};

int main(){
    myClass x;

    x.init(10, 20);
    x.show();
    return 0;
}
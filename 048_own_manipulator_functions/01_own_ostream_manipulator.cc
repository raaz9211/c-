#include <iostream>
using namespace std;

// A simple output manipulator.
ostream &sethex(ostream &stream){
    stream.setf(ios::showbase);
    stream.setf(ios::hex, ios::basefield);
    return stream;
}

int main(){
    cout << 9211 << " " << sethex << 9211;
    cout<< endl;

    cout.unsetf(ios::hex | ios::showbase); // used this to unset above flag so that can test it again.
    cout << 256 << " " << sethex << 256;

}
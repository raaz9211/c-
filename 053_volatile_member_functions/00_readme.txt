Volatile Member Functions:
Class member functions may be declared as volatile, which causes this to be treated as
a volatile pointer.

class X {
public:
    void f2(int a) volatile; // volatile member function
};
// Note : If we create multiple threads at the same time it dossn't guarantee which one will start first.

#include <iostream>
#include <thread>
using namespace std;

// 1. Function Pointer

void fun(int x){
    while (x--){
        cout << x << endl;
    }
}


// 2. Lambda Function

int main(){
    auto fun = [](int x){
        while(x--){
            cout << x << endl;
        }
    };

    std::thread t(fun, 10);
    t.join();
    return 0;
}

// 3. Functor

class Base{
public:
    Base(){
        
    }
    void operator()(int x){
        while(x--){
            cout << x << endl;
        }
    }
};

int main(){
    Base b1, b2;

    b2(10); 
}

// 4. Non-static member function

class Base{
public:
    void run(int x){
        while (x--){
            cout << x << endl;
        }
    }
};

int main(){
    Base b;
    std::thread t(&Base::run, &b, 10);
    t.join();
}


// 4. Static member function

class Base{
public:
    static void run(int x){
        while (x--){
            cout << x << endl;
        }
    }
};

int main(){
    Base b;
    std::thread t(&Base::run, 10);
    t.join();
}
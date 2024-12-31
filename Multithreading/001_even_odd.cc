// Way to creater threads in c++11
// 1. Ducntion Pointers
// 2. Lambda functions
// 3. Functors
// 4. Member Functions
// 5. Static Member functions



#include<iostream>
#include<algorithm>
#include<chrono>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull findEven(ull start, ull end){
    ull ans = 0;
    for(ull i = start; i <= end; i++){
        if(!(i&1)){
            ans += i;
        }
    }
    return ans;
}

ull findOdd(ull start, ull end){
    ull ans = 0;
    for(ull i = start; i <= end; i++){
        if(i&1){
            ans += i;
        }
    }
    return ans;
}


int main(){
    ull start = 0;
    ull end = 1900000000;

    auto start_time = high_resolution_clock::now();

    findEven(start, end);
    findEven(start, end);

    cout << "Processing done..." << endl;

    auto end_time = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end_time - start_time);

    cout << "Sec : " << duration.count()/1000000 << endl;

    return 0;

}
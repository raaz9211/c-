// Global objects have their constructor functions execute before main() begins execution
// Global destructors execute in reverse order after main()
#include <iostream>
using namespace std;

class myclass
{
public:
    int who;
    myclass(int id)
    {
        cout << "Initializing " << id << "\n";
        who = id;
    }

    ~myclass()
    {
        cout << "Destructing " << who << "\n";
    }
} glob_ob1(1), glob_ob2(2);

int main()
{
    myclass locale_obj1(3);
    cout << "This will not be first line displayed.\n";
    myclass local_ob2(4);
}
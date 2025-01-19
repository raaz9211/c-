
#include <iostream>
using namespace std;

namespace NS
{
    int i;
}

// ...

namespace NS
{
    int j;
}

int main()
{
    NS::i = NS::j = 10;

    // refer to NS specifically
    cout << NS::i * NS::j << "\n";

    // use NS namespace
    using namespace NS;
    cout << i * j;
    return 0;
}

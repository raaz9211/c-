#include <iostream>

int main()
{
    int val;

    std::cout << "Enter a number: ";
    std::cin >> val;
    
    std::cout << "This is your number: ";
    std::cout << std::hex << val;
    return 0;
}
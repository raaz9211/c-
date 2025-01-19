#include <iostream>
using namespace std;


class stack
{
    int stack_size;
    int *stack_array;
    int tos; // index of top-of-stack

public:
    stack(int stack_size)
    {
        stack_array = new int[stack_size];
        tos = 0;
        this->stack_size = stack_size;
    }

    void push(int ob)
    {
        if (tos == stack_size)
        {
            cout << "Stack is full.\n";
            return;
        }
        stack_array[tos++] = ob;
    }

    int pop()
    {
        if (tos == 0)
        {
            cout << "Stack is empty.\n";
            return 0; // return null on empty stack
        }
        return stack_array[--tos];
    }

    operator int() { return tos; } // conversion of stack to int
};

int main()
{
    stack stack_obj(100);

    int i;

    for(int i = 0; i < 20; i++){
        stack_obj.push(i);
    }

    int tos = stack_obj;
    // int tos = stack_obj(); // error : this will not work.


    cout << tos << " items on stack.\n";

    cout << 100 - stack_obj << " spaces open.\n";
}
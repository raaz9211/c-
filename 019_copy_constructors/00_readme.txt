a. when one object is used to initialize another, C++ performs a bitwise copy

there are situations in which a bitwise copy should not be used
 
'MyClass' that allocates memory for each object when it is created, and an object 'A' of that class.
assume that A is used to initialize B. |MyClass B= A;|

If a bitwise copy is performed, then B will be an exact copy of A. This means that B will
be using the same piece of allocated memory that A is using, instead of allocating its
own. 
if MyClass includes a
destructor that frees the memory, then the same piece of memory will be freed twice
when A and B are destroyed!


classname (const classname &o) {
// body of constructor
}

The first is assignment. The second is initialization, which can occur any of three ways:
■ When one object explicitly initializes another, such as in a declaration
■ When a copy of an object is made to be passed to a function
■ When a temporary object is generated (most commonly, as a return value)
    myclass x = y; // y explicitly initializing x
    func(y); // y passed as a parameter
    y = func(); // y receiving a temporary, return object
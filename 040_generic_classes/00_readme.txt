Generic classes are useful when a class uses logic that can be generalized
- Stack for all data type.
- Linked list for all data type.

template <class Ttype> class class-name {
    .
    .
    .
}

Ttype is the placeholder type name, which will be specified when a class is instantiated

class-name <type> ob;



Templates add a layer of abstraction, they still ultimately compile down to the same,
high-performance object code that you have come to expect from C++.
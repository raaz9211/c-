Early:
- Early binding refers to events that occur at compile time.
- Early binding include normal function calls (including standard library functions), overloaded function calls, and overloaded operators
- Main advantage to early binding is efficiency

Late:
- Late binding refers to function calls that are not resolved until run time.
- Virtual functions are used to achieve late binding. As you know, when access is via a base pointer or reference.
- The main advantage to late binding is flexibility.
- Late binding allows you to create programs that can respond to events occurring while the program executes without having to create a large amount of "contingency code."
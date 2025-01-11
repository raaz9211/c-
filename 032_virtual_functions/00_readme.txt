Polymorphism is supported by C++ both at compile time and at run time.
- Compile-time polymorphism is achieved by overloading functions and operators. 
- Run-time polymorphism is accomplished by using inheritance and virtual functions.

Virtual Functions
- A virtual function is a member function that is declared within a base class and redefined by a derived class
- When a class containing a virtual function is inherited, the derived class redefines the virtual function to fit its own needs. 
- virtual functions implement the "one interface, multiple methods" philosophy that underlies polymorphism
- When accessed "normally," virtual functions behave just like any other type of class member function
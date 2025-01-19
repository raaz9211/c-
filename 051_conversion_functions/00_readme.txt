Conversion Functions:
    - conversion from the class type to the target type. To handle these cases, C++ allows you to create custom `conversion` functions
    - conversion function converts your class into a type compatible with that of the rest of the expression
    operator type( ) { return value; }
    - Here, `type` is the target type that you are converting your class to, and value is the value of the class after conversion.
    - conversion function must be a member of the class for which it is defined. 
    - Conversion functions are inherited and they may be virtual.
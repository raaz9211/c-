The template is one of C++'s most sophisticated and high-powered features

Generic Functions:
    - A generic function defines a general set of operations that will be applied to various types of data
    - A generic function is created using the keyword template.
   
    template <class Ttype> ret-type func-name(parameter list)
    {
        // body of function
    }
    - Ttype is a placeholder name for a data type used by the function
    - It is only a placeholder that the compiler will automatically replace with an actual data type



When you create a template function, you are, in essence, allowing the compiler to
generate as many different versions of that function as are necessary for handling
the various ways that your program calls the function.
type class-name::operator[](int i)
{
    // . . .
}

the parameter does not have to be of type int, but an operator[ ]() function
is typically used to provide array subscripting, and as such, an integer value
   `O[3]` translates into this call to the operator[ ]() function: `O.operator[](3)`



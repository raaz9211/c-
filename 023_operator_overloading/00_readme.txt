ret-type class-name::operator#(arg-list)
{
// operations
}

The # is a placeholder. When you create an operator function, substitute the operator for the #

- When you are overloading a unary operator, 'arg-list' will be empty.
- When you are overloading binary operators, 'arg-list' will contain one parameter.



// Prefix increment
type operator++( ) {
// body of prefix operator
}

// Postfix increment
type operator++(int x) {
// body of postfix operator
}

// Prefix decrement
type operator– –( ) {
// body of prefix operator
}

// Postfix decrement
type operator– –(int x) {
// body of postfix operator
}

|||Operator Overloading Restrictions|||
- You cannot alter the precedence of an operator. 
- You cannot change the number of operands that an operator takes.
- operator functions cannot have default argument
- these operators cannot be overloaded - ". : : .*"

Note : Except for the = operator, operator functions are inherited by any derived class
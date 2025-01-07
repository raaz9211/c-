You can create a situation in which the compiler is unable to choose between two (or
more) overloaded functions. When this happens, the situation is said to be ambiguous.

cause of ambiguity involves C++'s automatic type conversions

int myfunc(double d);
// ...
cout << myfunc('c'); // not an error, conversion applied
--- this is not an error because C++ automatically converts the character c into its double equivalent
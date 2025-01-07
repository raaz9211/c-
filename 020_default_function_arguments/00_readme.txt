C++ allows a function to assign a parameter a default value when no argument
corresponding to that parameter is specified in a call to that function

void myfunc(double d = 0.0)
{
// ...
}

Now, myfunc() can be called one of two ways, as the following examples show:
- myfunc(198.234); // pass an explicit value
- myfunc(); // let function use default
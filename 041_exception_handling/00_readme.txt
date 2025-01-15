C++ exception handling is built upon three keywords: try, catch, and throw.
- If an exception (i.e., an error) occurs within the try block.
- It is thrown (using throw)
- The exception is caught, using catch, and processed. There can be more than one catch.


try {
    // try block
}
catch (type1 arg) {
    // catch block
}
catch (type2 arg) {
    // catch block
}
catch (type3 arg) {
    // catch block
}
    .
    .
    .
catch (typeN arg) {
    // catch block
}

The general form of the throw statement is shown here:
    throw exception;
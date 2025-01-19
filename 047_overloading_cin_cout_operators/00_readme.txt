Overloading << and >>:
    As you know, the << and the >> operators are overloaded in C++ to perform I/O
    operations on C++'s built-in types. You can also overload these operators so that they
    perform I/O operations on types that you create.
    - << output operator is referred to as the `insertion` operator
    - >> input operator is called the `extraction` operator

Inserter:
    ostream &operator<<(ostream &stream, class_type obj)
    {
        // body of inserter
        return stream;
    }
    - first parameter to the function is a reference to the output stream.
    - second parameter is the object being inserted


    An inserter for some class that is part of a CAD system may output
    plotter instructions. Another inserter might generate graphics images. 
    An inserter for a Windows-based program could display a dialog box


Extractors:
    Extractors are the complement of inserters. The general form of an extractor function is
    istream &operator>>(istream &stream, class_type &obj)
    {
        // body of extractor
        return stream;
    }
    - first parameter to the function is a reference to the input stream.
    - second parameter is the object being extractor
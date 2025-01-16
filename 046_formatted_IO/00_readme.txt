The C++ I/O system allows you to format I/O operations. 
- For example, you can set a field width, specify a number base, or determine how many digits after the decimal point will be displayed.

There are two related but conceptually different ways that
you can format data:
- You can directly access members of the ios class. Specifically, you can set various format status flags defined inside the ios class or call various ios member functions
- You can use special functions called `manipulators` that can be included as part of an I/O expression

Formatting Using the ios Members:
- The ios class declares a bitmask enumeration called `fmtflags` in which the following values are defined
    adjustfield    = left, right, and internal fields can be referred to as adjustfield
    basefield      = oct, dec, and hex fields, they can be collectively referred to as basefield
    boolalpha      = Booleans can be input or output using the keywords true and false.
    dec            = return output to decimal, set the dec flag
    fixed          = fixed is set, floating-point values are displayed using normal notation
    floatfield     = the scientific and fixed fields can be referenced as floatfield.
    hex            = hex flag causes output to be displayed in hexadecimal
    internal       = flag is set, a numeric value is padded to fill a field by inserting spaces between any sign or base character
    left           = left flag is set, output is left justified
    oct            = oct flag causes output to be displayed in octal
    right          = right flag is set, output is right justified
    scientific     = scientific flag, floating-point numeric values are displayed using scientific notation.
    showbase       = showbase causes the base of numeric values to be shown
    showpoint      = showpoint causes a decimal point and trailing zeros to be displayed for all floating-point
    showpos        = showpos causes a leading plus sign to be displayed before positive values
    skipws         = white-space characters (spaces, tabs, and newlines) are discarded when performing input on a stream
    unitbuf        = unitbuf is set, the buffer is flushed after each insertion operation
    uppercase      = uppercase is set, these characters are displayed in uppercase
    - These values are used to set or clear the format flags
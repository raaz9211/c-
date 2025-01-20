- Header Files in C++: Header files (.h) declare functions, classes, or constants, while .cpp files define their implementations.
- Difference between .cpp and .h: .cpp files contain the actual code implementations, while .h files provide declarations to be included in other files.
- Difference between #include "myheader.h" and #include <myheader.h>: Double quotes are for local files, angle brackets for system or library files.
- #include <myheader.h> explicitly looks for myheader.h in system directories.
- #include <myheader> looks for myheader (without extension) and may consider files like myheader.hpp or myheader.hxx in system directories, depending on the compiler's configuration.
- If myheader is located in the local directory, it will be found regardless of extension

+-----------------------------+----------------------------------------------------+-------------------------------------------------------------+
|Type                         | How It's Structured                                | What It Represents                                          |
|-----------------------------|----------------------------------------------------|-------------------------------------------------------------|
|Source Code (.cpp)           | Text encoded in binary (ASCII/UTF-8)               | Human-readable code that needs to be compiled.              |
|Object File (.obj/.o)        | Binary machine code instructions                   | Partially compiled code, needs linking to become executable.|
|Static Library (.lib)        | Precompiled binary code                            | Code that can be linked into an executable at compile time. |
|Dynamic Library (.dll/.so)   | Precompiled binary code                            | Code that is linked at runtime when the program runs.       |
|Executable (.exe/.out)       | Binary machine code for the entire program         | Fully compiled and linked program, ready to run.            |
|-----------------------------+----------------------------------------------------+-------------------------------------------------------------+

Summary:
    - Source code is text that gets converted to binary via compilation.
    - Object files contain machine code but need to be linked.
    - Libraries (static or dynamic) contain precompiled machine code to be reused by other programs.
    - Executable files are the final binary machine code that the computer can directly execute.
 - Even though everything ultimately boils down to binary (0s and 1s), the structure, organization, and purpose of this binary data differ depending on whether it's in source code, object code, a library, or an executable

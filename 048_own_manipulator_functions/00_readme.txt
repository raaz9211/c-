
Own Manipulator Functions:
    - Custom manipulators are important for two main reasons. First, you can consolidate a sequence
    of several separate I/O operations into one manipulator. For example, it is not
    uncommon to have situations in which the same sequence of I/O operations occurs
    frequently within a program.

    - Custom manipulator can also be important when you need to perform I/O
    operations on a nonstandard device. For example, you might use a manipulator to send
    control codes to a special type of printer or to an optical recognition system
    
    All parameterless manipulator output functions have this skeleton:
    ostream &manip-name(ostream &stream)
    {
        // your code here
        return stream;
    }
     - `manip-name` is the name of the manipulator.

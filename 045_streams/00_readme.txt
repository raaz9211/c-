C Streams:
- The C file system is designed to work with a wide variety of devices, including
terminals, disk drives, and tape drives. Even though each device is very different, the
buffered file system transforms each into a logical device called a stream. All streams
behave similarly. Because streams are largely device independent, the same function
that can write to a disk file can also be used to write to another type of device, such as
the console.

Text Streams:
- A text stream is a sequence of characters. Standard C allows (but does not require) a
text stream to be organized into lines terminated by a newline character. However,
the newline character is optional on the last line. (Actually, most C/C++ compilers do
not terminate text streams with newline characters.) 

Binary Streams:
- A binary stream is a sequence of bytes that have a one-to-one correspondence to those
in the external devicethat is, no character translations occur. Also, the number of
bytes written (or read) is the same as the number on the external device

C++ Streams:
- A stream is linked to a physical device by the I/O system. All streams
behave in the same way even though the actual physical devices they are connected to
may differ substantially. Because all streams behave the same, the same I/O functions
can operate on virtually any type of physical device. For example, you can use the
same function that writes to a file to write to the printer or to the screen
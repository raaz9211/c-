Similar to the situation as described for pointers earlier, a base class reference can be
used to refer to an object of a derived class. The most common application of this is
found in function parameters. A base class reference parameter can receive objects of
the base class as well as any other type derived from that base.

There are a number of restrictions that apply to references
1.  You cannot reference another reference./ you cannot obtain the address of a referenc
2. You cannot create arrays of references. 
3. You cannot create a pointer to a reference. 
4. You cannot reference a bit-field.
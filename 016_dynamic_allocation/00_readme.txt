C++ provides two dynamic allocation operators: new and delete.
C++ also supports dynamic memory allocation functions, called malloc() and free()
The new operator allocates memory and returns a pointer to the start of it
delete operator frees memory previously allocated using new

-------------
p_var = new type;
delete p_var;
-------------

If there is insufficient available memory to fill an allocation request, then new will fail and a bad_alloc exception will be generated

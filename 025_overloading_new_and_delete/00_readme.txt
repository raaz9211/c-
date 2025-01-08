It is possible to overload new and delete. You might choose to do this if you want
to use some special allocation method

// Allocate an object.
void *operator new(size_t size)
{
    /* Perform allocation. Throw bad_alloc on failure.
    Constructor called automatically. */
    return pointer_to_memory;
}

// Delete an object.
void operator delete(void *p)
{
    /* Free memory pointed to by p.
    Destructor called automatically. */
}

The new and delete operators may be overloaded globally so that all uses of these
operators call your custom versions.

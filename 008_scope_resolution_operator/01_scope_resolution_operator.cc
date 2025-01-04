int i; // global i
void f()
{
    int i;  // local i
    i = 10; // uses local i
    .
        .
        .
}

int i; // global i
void f()
{
    int i;    // local i
    ::i = 10; // now refers to global i
    .
        .
        .
}
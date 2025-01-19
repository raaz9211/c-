Namespace:
    - The namespace keyword allows you to partition the global namespace by creating a
    declarative region. In essence, a namespace defines a scope. The general form of
    namespace is shown here:
    namespace name {
        // declarations
    }
    - namespace defines a scope, you need to use the scope resolution operator to refer to objects declared within a namespace from outside that namespace.


Using:
    - if your program includes frequent references to the members of a
    namespace, having to specify the namespace and the scope resolution operator each time.
    you can use `using` statement to make it easy

    using namespace name;
    using name::member;

    using CounterNameSpace::lowerbound; // only lowerbound is visible
    lowerbound = 10; // OK because lowerbound is visible
    using namespace CounterNameSpace; // all members are visible
    upperbound = 100; // OK because all members are now visible

Unnamed Namespaces-
    - unnamed namespace allows you to create identifiers that are unique within a file.
    - Unnamed namespaces are also called anonymous namespaces

    namespace {
        // declarations
    }
    - within the scope of a single file
    - Unnamed namespaces eliminate the need for certain uses of the static storage class modifier

    +-------------------+-------------------+
    |      File One     |      File Two     |
    +-------------------+-------------------+
    | namespace {       | extern int k;     |
    |     int k;        |                   |
    | }                 | void f2() {       |
    | void f1() {       |     k = 10;       |
    |     k = 99;       |     // error      |
    |     // OK         | }                 |
    | }                 |                   |
    +-------------------+-------------------+
    - Because `k` is defined in File One, it may be used in File One. In File Two, `k` is specified
    as extern, which means that its name and type are known but that k itself is not actually defined

    +-------------------+-------------------+
    |      File One     |      File Two     |
    +-------------------+-------------------+
    | namespace {       | extern int k;     |
    |     int k;        |                   |
    | }                 | void f2() {       |
    |                   |     k = 10;       |
    | void f1() {       |     // error      |
    |     k = 99;       | }                 |
    |     // OK         |                   |
    | }                 |                   |
    +-------------------+-------------------+
    - Here, k is also restricted to File One. The use of the unnamed namespace rather than
    static is recommended for new code.
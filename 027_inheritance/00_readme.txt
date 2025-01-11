class derived-class-name : access base-class-name {
    // body of class
};

- The base-class access specifier must be either public, private, or protected
- If no access specifier is present, the access specifier is private by default if the derived class is a class
- If the derived class is a struct, then public is the default
#include <stdio.h>

/*

===== STRUCTS =====
A data structure allows you to group together multiple values of different types within.

This is useful for:
- Serialisation of Data
- Passing data in/out of functions
- Data structures (Think trees, linked lists, etc)


--- TypeDef ---
typedef allows you to create an alias for a type, which can be used in place of the original type.

*/


typedef struct{
    char* name;
    int age;
}person;

int main() {
    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}
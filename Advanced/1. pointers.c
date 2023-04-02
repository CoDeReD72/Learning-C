#include <stdio.h>

/* ===== POINTERS =====

An integer value which holds a memory  address

Used for:
- Strings
- Dynamic memory allocation
- Passing arguments to functions (by reference)
- Returning values from functions (by reference)
- Building data structures


--- DEREFERENCING POINTERS ---

To access the value stored at the address of a pointer, you must dereference it.

Dereferencing is done using the * operator.


--- Strings as Pointers ---

char * name = "John"  // Does 3 things:

1. Allocates memory for the string "John"
2. Copies the string "John" into the allocated memory
3. Assigns the address of the allocated memory to the pointer name

If you try reference this as an array it will return "J" because it is a pointer to the first character in the string.

Because memory is sequential, you can access the next character by adding 1 to the pointer. Until you reach the end of the string.

Shown by \0 (null terminator)

*/

int main()
{
    int n = 10;

    int *pointer_to_n = &n;

    *pointer_to_n += 1;

    /* testing code */
    if (pointer_to_n != &n)
        return 1;
    if (*pointer_to_n != 11)
        return 1;

    printf("Done!\n");
    return 0;
}
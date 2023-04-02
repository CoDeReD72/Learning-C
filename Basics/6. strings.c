#include <stdio.h>

// Strings do not exist in C. Instead, we have a char array - Referenced by a pointer or local array notation (Explained in more detail later).

/* Useful Functions
- strlen(a) - Returns the length of a string
- strcpy(x,y) - Copies a string to another string
- strcat(a,b) - Concatenates two strings
- strncomp(variable, "string", numberOfCharacterToCompare) - Compares two strings
*/

int main(){
    
    char* firstName = "John"; // Pointer notation
    
    char lastName[] = "Doe"; // Local Array Notation
    
    printf("First Name: %s \t Last Name: %s \n", firstName, lastName);
}
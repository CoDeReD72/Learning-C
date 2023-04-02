#include <stdio.h>

/* ===== PASSING BY REFERENCE =====

Passing by reference allows you to pass a pointer to a variable to a function, which can then modify the value of the variable.

The majority of programming languages pass arguments to functions by value, which means that the function receives a copy of the value. - Difficult for beginners to grasp.

*/

typedef struct {
  char * name;
  int age;
} person;

/* function declaration */
void birthday(person * p){
    p -> age += 1; // p -> age is the same as (*p).age - dereferencing the pointer to access the value of the struct.
}


int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}
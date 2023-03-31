#include <stdio.h>

// There is NO Boolean type in C
// Instead, we use an int and 0 for false and 1 for true

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  
  float sum = a + b + c;

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}
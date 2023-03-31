#include <stdio.h>


int main(){
    int grades[3]; // Array of 3 integers (0-2 with zero-based indexing)

    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}
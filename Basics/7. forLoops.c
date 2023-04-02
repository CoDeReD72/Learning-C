#include <stdio.h>

int main(){
    
    int array[10] = {1,2,3,4,5,6,7,8,9,10}; // Remember to set the size of the array
    int factorial = 0;

    int i; // Define i outside of the loop

    for(i = 0; i < 10; i++){ // Similar to other languages
        factorial *= array[i];
    }

    printf("Sum of the array is %d\n", factorial);
    
}
#include <stdio.h>

void guessNumber(int guess){
    if (guess == 555) {
        printf("You guessed it!\n");
    } else if (guess > 500) {
        printf("Too high!\n");
    } else {
        printf("Too low!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
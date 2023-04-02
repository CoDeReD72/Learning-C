#include <stdio.h>

/*
                    STATIC vs GLOBAL VARIABLES
- Static variables are only accessible within the file they are defined in
- Global variables are accessible from anywhere in the program

*/

int sum(int num)
{
    int static total = 0;
    total += num;
    return total;
}

int main()
{
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));
    return 0;
}
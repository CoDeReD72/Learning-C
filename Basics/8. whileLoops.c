#include <stdio.h>

/* LOOP DIRECTIVES
- BREAK - Breaks out of the loop
- CONTINUE - Skips the current iteration of the loop
*/

int main()
{
    // Print all numbers above 5, but below 10
    // If above 10, break

    int arr[10] = {1,2,3,4,5,6,7,8,19,10};
    int i = 0;

    while (i < 10) //Notice how the loop is defined and the increment is done inside the loop
    {
        if (arr[i] < 5)
        {
            i++;
            continue;
        }

        if (arr[i] > 10)
        {
            break;
        }

        else
        {
            printf("%d\n", arr[i]);
        }

        i++;
    }

    return 0;
}
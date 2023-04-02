#include <stdio.h>

int main() {
        int grades[2][5]; // Arrays are defined as type name[size][size]...
		float average;
		int i;
		int j;

		grades[0][0] = 80; // Defining a specific array index
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) { // Note how i is defined at the start of the function, not the loop
			average = 0;
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

		return 0;
	}
/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Loops
*/

#include <stdio.h>


int main() {

	// WAP to print natural numbers till 10. 		[1, 2, 3,....10]
	// Exploring do while loop.

	int counter = 1;

	do {
		printf("%d\n", counter);
		counter++;
	} while (counter <= 10);

	// WAP to add numbers until user enters 0.
	float num, sum = 0;

	do {
		puts("Enter a number: ");
		scanf("%f", &num);
		sum += num;		// sum = sum + num;
	} while (num != 0);

	printf("The sum is: %.3f", sum);

	return 0;
}

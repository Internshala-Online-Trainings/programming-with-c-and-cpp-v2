/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Loops
*/

#include <stdio.h>


int main() {

	// WAP to print natural numbers till 'n'. 		[1, 2, 3,....n]
	// Exploring while loop.

	int counter = 1;

	while (counter <= 10) {
		printf("%d\n", counter);
		counter++;
	}

	// WAP to find the factorial of a number.
	// Example: Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120.

	int num = 5;
	long factorial = 1;

	while (num > 0) {
		factorial = factorial * num;		
		num--;	
	}

	printf("Factorial is: %ld", factorial);

	return 0;
}

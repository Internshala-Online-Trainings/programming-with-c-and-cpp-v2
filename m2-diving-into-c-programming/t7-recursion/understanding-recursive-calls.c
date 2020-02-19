/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Recursion
*/

#include <stdio.h>

long findFactorial(int);


int main() {

	/* WAP to find the factorial of a number.
	   Example: Factorial of 5 = 5 * 4 * 3 * 2 * 1 = 120. */

	// Note: Identify the terminating condition to terminate the recursion.

	int num = 5;
	long factorial = 1;

	while (num > 0) {
		factorial = factorial * num;
		num--;
	}

	printf("Factorial is: %ld\n", factorial);

	// Using recursion to find the factorial of 5.
	long result = findFactorial(5);
	printf("Factorial is: %ld\n", result);

	return 0;
}

long findFactorial(int num) {

	if (num > 0) {
		return num * findFactorial(--num);
	} else {
		return 1;
	}
}

// findFactorial(5) = 5 * 4 * 3 * 2 * 1 * 1 = 120

// findFactorial(5) = 5 * findFactorial(4)
// findFactorial(4) = 4 * findFactorial(3)
// findFactorial(3) = 3 * findFactorial(2)
// findFactorial(2) = 2 * findFactorial(1)
// findFactorial(1) = 1 * findFactorial(0)
// findFactorial(0) = 1

/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Loop Control Statements
*/

#include <stdio.h>


int main() {

	// WAP to calculate the sum of 10 numbers entered by user.
	// If user enters a negative number then terminate the loop.
	// If user enters a number greater than 1000, skip that number (don't add it to the total sum).

	int i;
	double number, sum = 0;

	for (i = 1; i <= 10; i++) {
		printf("Enter number %d: ", i);
		scanf("%lf", &number);

		if (number < 0)
			goto my_label;

		if (number > 1000) {
			puts("Number greater than 1000 is not allowed.");
			continue;
		}

		sum += number;
	}

	my_label:
	printf("Sum = %.2lf", sum);

	return 0;
}

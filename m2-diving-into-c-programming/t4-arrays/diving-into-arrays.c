/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Arrays
*/

#include <stdio.h>


int main() {

	// Diving into arrays.
	// Indices --> 		   0    1    2    3    4
	long scoresOne[5] = { 980, 903, 785, 761, 701 };

	// Modify elements.
	scoresOne[1] = 900;
	scoresOne[4] = 750;

	// Print all elements using a loop.
	for (int i = 0; i < 5; i++) {
		printf("%ld\n", scoresOne[i]);
	}

	// User input.
	long scoresTwo[5];

	for (int i = 0; i < 5; i++) {
		printf("Enter the value for index %d:", i);
		scanf("%ld", &scoresTwo[i]);
	}

	puts("Printing elements of scoresTwo: ");
	for (int i = 0; i < 5; i++) {
		printf("%ld\n", scoresTwo[i]);
	}

	return 0;
}

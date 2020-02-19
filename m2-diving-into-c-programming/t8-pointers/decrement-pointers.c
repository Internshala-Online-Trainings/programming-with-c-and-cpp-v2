/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Pointers
*/

#include <stdio.h>


int main() {

	/* Incrementing and decrementing a pointer. */
	float values[] = {10.5, 100.9, 200, 4.1, 989.38, 2.3};
	float *ptr;
	ptr = &values[5];

	for (int i = 5; i >= 0; i--) {

		printf("Value at index %d = %.2f\n", i, *ptr);

		ptr--;	// Move to immediate previous memory location in the array.
	}

	return 0;
}

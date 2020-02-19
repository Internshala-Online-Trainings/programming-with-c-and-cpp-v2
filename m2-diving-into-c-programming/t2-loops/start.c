/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Loops
*/

#include <stdio.h>


int main() {

	// WAP to find out odd numbers from 1 to 4.

	int number = 1;

	if (number % 2 != 0)
		printf("%d\n", number);

	number++;		// 2
	if (number % 2 != 0)
		printf("%d\n", number);

	number++;		// 3
	if (number % 2 != 0)
		printf("%d\n", number);

	number++;		// 4
	if (number % 2 != 0)
		printf("%d\n", number);

	return 0;
}

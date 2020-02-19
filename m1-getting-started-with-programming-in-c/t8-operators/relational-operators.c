/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	/* Relational Operators
	   - A condition in C returns either 0 or 1
	   	   - 0 represents a False condition
	   	   - 1 represents a True condition  */

	int x = 2;
	int y = 3;
	int z = 3;

	int r1 = x > y; 		// False: 	r1 = 0
	int r2 = y >= x; 		// True: 	r2 = 1

	int r3 = x < y;			// True:	r3 = 1
	int r4 = y <= x;		// False:	r4 = 0

	int r5 = y == z;		// True:	r5 = 1
	int r6 = z != x;		// True:	r6 = 1

	printf("The value of r1: %d\n", r1);
	printf("The value of r2: %d\n", r2);
	printf("The value of r3: %d\n", r3);
	printf("The value of r4: %d\n", r4);
	printf("The value of r5: %d\n", r5);
	printf("The value of r6: %d\n", r6);

	return 0;
}

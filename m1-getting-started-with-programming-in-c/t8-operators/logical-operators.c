/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	// Logical Operators
	// Associativity: Left to Right

	int x = 2;
	int y = 3;
	int z = 3;

	// Logical AND: &&
	int r1 = y > x && z >= y;	// r1 = 1 && 1 = 1
	printf("The value of r1: %d\n", r1);

	// Logical OR: ||
	int r2 = x > y || y > z || y == z || y != x;	// r2 = 1
	printf("The value of r2: %d\n", r2);

	// Logical NOT: !
	int r3 = !(x > y);		// r3 = !(0) = 1
	printf("The value of r3: %d\n", r3);

	return 0;
}

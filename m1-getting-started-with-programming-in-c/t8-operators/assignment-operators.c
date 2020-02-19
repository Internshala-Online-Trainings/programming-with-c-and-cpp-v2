/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	// Assignment Operators
	// Associativity: Right to Left

	// Example 1
	float bill = 2000.0;
	float tax = 100.0;

	// bill = bill + tax;		// 2000 + 100 = 2100
	bill += tax;
	printf("Total bill is: %.1f\n", bill);

	// Example 2
	int number = 10;
	int x = 3;

	// number = number * x;
	number *= x;
	printf("Multiplication result: %d", number);

	return 0;
}

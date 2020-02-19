/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	// Arithmetic Operators: +, -, *, /, and %.
	// Precedence: {*, /, %} > {+, -}
	// Associativity: Left to Right

	int result = 3 + 1 - 7 * 5 % 3 / 2;
	printf("%d", result);

	// => 3 + 1 - 35 % 3 / 2
	// => 3 + 1 - 2 / 2
	// => 3 + 1 - 1
	// => 4 - 1
	// => 3

	return 0;
}

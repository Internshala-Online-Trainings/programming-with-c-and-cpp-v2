/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	// Increment and Decrement Operator
	// Associativity: Left to Right

	// Postfix: First use the value and then increment/decrement
	// Prefix: First increment/decrement and then use the value

	int age = 10;
	printf("%d\n", age++);	// 10
	// 11
	printf("%d\n", age);	// 11
	// 11
	printf("%d\n", ++age);	// 12
	// 12
	printf("%d\n", age);	// 12
	// 12
	printf("%d\n", age-- + --age);	// 12 + 10 = 22

	return 0;
}

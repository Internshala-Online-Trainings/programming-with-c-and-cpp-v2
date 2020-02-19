/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Operators
*/

#include <stdio.h>


int main() {

	// Arithmetic Operators: +, -, *, /, and %.

	int x = 12, y = 4, sum, sub, mul, div, mod;

	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;
	mod = x % y;

	printf("Sum of x and y: %d\n", sum);
	printf("Difference between x and y: %d\n", sub);
	printf("Multiplication of x and y: %d\n", mul);
	printf("Division of x by y: %d\n", div);
	printf("Remainder when x is divided y: %d\n", mod);	// try 5 % 2 instead of mod 

	return 0;
}

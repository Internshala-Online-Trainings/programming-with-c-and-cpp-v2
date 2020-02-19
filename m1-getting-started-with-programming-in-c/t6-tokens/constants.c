/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Tokens
*/

#include <stdio.h>

int main() {

	// Write a C program to find out area of a circle
	// Formula to calculate area: PI * radius * radius

	const float PI = 3.14;
	// PI = 7.88;	// Error
	int radius = 27;

	float area = PI * radius * radius;
	printf("The area of the circle is %.2f", area);

	return 0;
}

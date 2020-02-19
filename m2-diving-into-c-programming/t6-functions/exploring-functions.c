/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Functions
*/

#include <stdio.h>

void sum(int, int);


int main() {

	/* Objective: WAP to...... */
	puts("My program starts... ");

	sum(2, 3);

	puts("...some dummy code...");
	puts("More code...");

	sum(10, 90);

	puts("My program continues with a few more functionalities.... ");

	sum(11, 21);

	sum(3, 9);

	return 0;
}

void sum(int num1, int num2) {

	int s = num1 + num2;
	printf("Sum is: %d\n", s);
}

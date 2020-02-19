/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Functions
*/

#include <stdio.h>

int sum(int, int);
float sumOfThreeNumbers(float, float, float);


int main() {

	/* Objective: WAP to...... */
	puts("My program starts... ");

	int sum1 = sum(2, 3);
	printf("Sum is: %d\n", sum1);

	puts("...some dummy code...");
	puts("More code...");

	int sum2 = sum(10, 90);
	printf("Sum is: %d\n", sum2);

	puts("My program continues with a few more functionalities.... ");

	int sum3 = sum(11, 21);
	printf("Sum is: %d\n", sum3);

	int sum4 = sum(3, 9);
	sum4++;

	float sum5 = sumOfThreeNumbers(10.1, 20.2, 30.3);
	printf("Sum is: %.2f", sum5);

	return 0;
}

int sum(int num1, int num2) {

	return num1 + num2;
}

float sumOfThreeNumbers(float num1, float num2, float num3) {

	return num1 + num2 + num3;
}


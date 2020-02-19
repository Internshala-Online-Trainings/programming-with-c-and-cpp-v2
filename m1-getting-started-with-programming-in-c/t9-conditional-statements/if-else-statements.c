/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Conditional Statements
*/

#include <stdio.h>


int main() {

	// If-else Statements
	float retailPrice;
	puts("Enter retail price: ");
	scanf("%f", &retailPrice);

	float payableAmount;

	if (retailPrice >= 500) {
		puts("Eligible for discount");
		payableAmount = retailPrice * 0.9;
	} else {
		puts("Not eligible for discount");
		payableAmount = retailPrice;
	}

	printf("Discount availed: Rs %.1f\n", retailPrice - payableAmount);
	printf("Net payable amount: Rs %.1f\n", payableAmount);

	return 0;
}

/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	Conditional Statements
*/

#include <stdio.h>


int main() {


	// Else-if Ladder Statements
		// Greater than equal to 100 and less than 500: 5% discount
		// Greater than equal to 500 and less than 750: 10% discount
		// Greater than equal to 750 and less than 1000: 15% discount
		// Greater than equal to 1000: 20% discount
		// Less than 100: No discount

	float retailPrice = 600;
	float payableAmount;

	if (retailPrice >= 100 && retailPrice < 500) {
		payableAmount = retailPrice * 0.95;
	} else if (retailPrice >= 500 && retailPrice < 750) {
		payableAmount = retailPrice * 0.9;
	} else if (retailPrice >= 750 && retailPrice < 1000) {
		payableAmount = retailPrice * 0.85;
	} else if (retailPrice >= 1000) {
		payableAmount = retailPrice * 0.8;
	} else {
		payableAmount = retailPrice;
	}

	printf("Discount availed: %.1f\n", retailPrice - payableAmount);
	printf("Net Payable amount: %.1f", payableAmount);

	return 0;
}

/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Arrays
*/

#include <stdio.h>


int main() {

	// Different ways to initialize an array.
	// Declare an array to store top 5 scores. --> 980, 903, 785, 761, 701

	// Method 1: Specifying size and initializing elements.
	long scoresOne[5] = { 980, 903, 785, 761, 701 };

	printf("%ld", scoresOne[1]);

	// Method 2: Just initializing elements.
	long scoresTwo[] = { 980, 903, 785, 761, 701 };

	// Method 3: Just declaring size.
	long scoresThree[5];
	scoresThree[0] = 980;
	scoresThree[1] = 903;
	scoresThree[2] = 785;
	scoresThree[3] = 761;
	scoresThree[4] = 701;

	return 0;
}

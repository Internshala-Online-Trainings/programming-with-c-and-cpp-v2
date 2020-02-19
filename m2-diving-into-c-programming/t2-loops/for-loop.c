/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Loops
*/

#include <stdio.h>


int main() {

	// WAP to find out odd numbers from 1 to 'n'.
	// Exploring for loop.

	int n;
	puts("Enter the value of n: ");
	scanf("%d", &n);

	int num;
	for (num = 1; num <= n; num++) {
		if (num % 2 != 0)
			printf("%d\n", num);
	}

	return 0;
}

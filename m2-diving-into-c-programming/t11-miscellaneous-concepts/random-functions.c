/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Miscellaneous Concepts
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main() {

	/* WAP to roll a dice.
	   Random Function: rand(), srand(time(NULL)). */

	int randomValue;

	srand(time(NULL));

	randomValue = (rand() % 6) + 1;		// 1, 2, 3, 4, 5, 6

	puts("Rolling the dice...");
	usleep(2000000);		// Makes your program sleep for 2 seconds.

	printf("You got: %d", randomValue);

	return 0;
}

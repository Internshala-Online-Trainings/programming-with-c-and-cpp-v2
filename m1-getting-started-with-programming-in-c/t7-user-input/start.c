/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	User Input
*/

#include <stdio.h>

int main() {

	char name[15] = "Farm House";
	char size = 'M';
	int personItServes = 2;
	float retailPrice = 365.8;

	printf("%s", name);

	printf("\n");

	printf("%c", size);

	printf("\n");

	printf("%d", personItServes);

	printf("\n");

	printf("%.1f", retailPrice);

	printf("\n");

	// Yay! You have ordered a Farm House pizza of size M that serves 2.
	// Please pay Rs. 368.8 to the delivery person.

	printf("Yay! You have ordered a %s pizza of size %c that serves %d.\nPlease "
			"pay Rs. %.1f to the delivery person.", name, size, personItServes, retailPrice);

	return 0;
}

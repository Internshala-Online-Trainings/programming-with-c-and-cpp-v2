/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	User Input
*/

#include <stdio.h>


int main() {

	char name[15] = "Farm House";	// TODO Get name as user input
	char size;
	int personItServes;
	float retailPrice;

	scanf("%c", &size);

	scanf("%d", &personItServes);

	scanf("%f", &retailPrice);

	printf("Yay! You have ordered a %s pizza of size %c that "
			"serves %d. \nPlease pay Rs. %.1f to the delivery person.\n\n", name, size, personItServes, retailPrice);
			
	return 0;
}

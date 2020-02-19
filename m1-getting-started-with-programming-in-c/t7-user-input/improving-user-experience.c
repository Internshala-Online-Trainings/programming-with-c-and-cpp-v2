/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	User Input
*/

#include <stdio.h>
#include <unistd.h>


int main() {

	char name[15] = "Farm House";		// TODO Get name as user input
	char size;
	int personItServes;
	float retailPrice;

	printf("Enter the size of the pizza as either 'S', 'M' or 'L': ");
	scanf("%c", &size);

	printf("Enter the number of persons it serves: ");
	scanf("%d", &personItServes);

	printf("Enter retail price: ");
	scanf("%f", &retailPrice);

	printf("\nGenerating message...\n");
	usleep(3000000);

	printf("\nYay! You have ordered a %s pizza of size %c that serves %d.\nPlease "
			"pay Rs. %.1f to the delivery person.", name, size, personItServes, retailPrice);

	printf("\n\nSending SMS...\n");
	usleep(1000000);

	printf("\n\n***********SMS SENT**********\n\n");

	return 0;
}

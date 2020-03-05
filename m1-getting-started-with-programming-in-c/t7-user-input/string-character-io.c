/*
 Author: 	Internshala
 Module: 	Getting Started with Programming in C
 Topic: 	User Input
*/

#include <stdio.h>
#include <unistd.h>


int main() {

	char name[30];
	char size;
	int personItServes;
	float retailPrice;

	printf("Enter pizza name: ");
	scanf("%[^\n]%*c", name);

	printf("Enter the size of the pizza as either 'S', 'M' or 'L': ");
	scanf("%c", &size);
	// size = getchar();	// User input
	// putchar(size);		// Prints the character

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

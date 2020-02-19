/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Memory Management
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

	/* WAP to store 'n' natural numbers. */
	int *ptr, n;

	puts("Enter n: ");
	scanf("%d", &n);

	/* Dynamically allocate memory using calloc(). */
	ptr = (int*) calloc(n, sizeof(int));

	if (ptr == NULL) {
		puts("Memory allocation failed.");
		exit(0);
	} else {
		/* Store 'n' natural numbers in the allocated memory block. */
		for (int i = 0; i < n; i++) {
			ptr[i] = i + 1;
		}

		/* Print all natural numbers stored in the memory block. */
		printf("The values present in the allocated memory block: ");
		for (int i = 0; i < n; i++) {
			printf("%d ", ptr[i]);
		}

		int c, newSize;

		puts("\nEnter the number of more values you want to enter: ");
		scanf("%d", &c);

		newSize = c + n;

		/* Dynamically re-allocate memory using realloc(). */
		ptr = (int*) realloc(ptr, newSize * sizeof(int));

		/* Store more values. */
		for (int i = n; i < newSize; i++) {
			ptr[i] = i + 1;
		}

		printf("The final values stored in the allocated memory block: ");
		for (int i = 0; i < newSize; i++) {
			printf("%d ", ptr[i]);
		}
	}

	free(ptr);

	return 0;
}

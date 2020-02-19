/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Pointers
*/

#include <stdio.h>


int main() {

	int num = 20;
	int *p = &num;			// Pointer variable declaration.
//	p = &num; 		// 'p' is pointer to 'num' variable. 'p' contains the address of 'num' variable.

	printf("Address of 'num': %ld\n", &num);

	printf("Address stored in 'p': %ld\n", p);

	printf("Value of '*p': %d\n", *p);	// *(&num) = 20

	return 0;
}

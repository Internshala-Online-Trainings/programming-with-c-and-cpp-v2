/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Recursion
*/

#include <stdio.h>

void greetUser();

int main() {

	greetUser();

	return 0;
}

void greetUser() {

	puts("Welcome");
	greetUser();
}

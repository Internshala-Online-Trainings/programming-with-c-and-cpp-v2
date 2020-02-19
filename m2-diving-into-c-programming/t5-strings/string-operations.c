/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Strings
*/

#include <stdio.h>
#include <string.h>


int main() {

	// Commonly used string functions in C.

	// strcat(): Appends a copy of the source string to the end of the destination string.
	char destination[50] = "Hello ";
	char source[50] = "World!";
	strcat(destination, source);
	printf("strcat: %s\n", destination);

	// strcmp(): Compares two strings lexicographically.
	char str1[10] = "hello";
	char str2[10] = "heLlo";
	int result = strcmp(str1, str2);
	printf("strcmp: result: %d\n", result);

	if (result == 0)
		puts("Strings are equal.");
	else
		puts("Strings are unequal.");

	// strcpy(): Copy one string to another.
	char dest[50] = "Old Value";
	char src[50] = "New Value!";
	strcpy(dest, src);

	printf("strcpy: %s\n", dest);

	// strlen(): Gives you the length of the string. It doesn't count null character.
	char name[] = "Rakesh Sharma";
	int length = strlen(name);
	printf("strlen: length of string: %d\n", length);

	return 0;
}

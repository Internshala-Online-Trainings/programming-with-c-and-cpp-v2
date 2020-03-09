/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Strings
*/

#include <stdio.h>


int main() {

    // Various ways to declare a string.
    char str1[3] = "hi";

    char str2[10] = "hi";

    char str3[] = "hi";

    char str4[] = { 'h', 'i', '\0'};

    char str5[3] = { 'h', 'i', '\0' };

    char str6[3] = { 'h', 'i' };		// Not a string. It is a normal character array.

    // User input.
    char name[40];
    puts("Enter your name: ");
    scanf("%[^\n]%*c", name);
    printf("%s", name);

	return 0;
}

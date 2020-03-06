 /*
 Author:    Internshala
 Module:    Getting Started with Programming in C
 Topic:        Code Challenge
*/

#include <stdio.h>


int main() {

    // Swap two numbers 
    int x, y, t;

    puts("Enter first number: ");
    scanf("%d", &x);

    puts("Enter second number: ");
    scanf("%d", &y);

    printf("\nBefore Swapping\nFirst number = %d\nSecond number = %d\n\n", x, y);

    t = x;
    x = y;
    y = t;

    printf("After Swapping\nFirst number = %d\nSecond number = %d\n", x, y);

    return 0;
}


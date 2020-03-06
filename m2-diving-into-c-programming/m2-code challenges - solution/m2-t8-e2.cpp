#include <stdio.h>


int main() {

    /* Write a program to input two integers and find the sum of those two numbers by using pointers. */
    int a, b;
    int *x, *y;        // Pointer variable declaration.

    /* Initializing pointers. */
    x = &a;
    y = &b;

    /* User input. */
    puts("Enter first number: ");
    scanf("%d", &a);

    puts("Enter second number: ");
    scanf("%d", &b);

    int sum = *x + *y;    // '*x' is equivalent to value of 'a'. '*y' is equivalent to value of 'b'.
    printf("The sum is %d.\n", sum);

    return 0;
}


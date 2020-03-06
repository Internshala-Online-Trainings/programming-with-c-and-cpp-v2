#include <stdio.h>

/* Function Declarations. */
double getPerimeter(double, double);
void greetUser();


int main() {

    /* WAP to find out the perimeter of a rectangle. */

    /* Calling greetUser function to print a welcome message. */
    greetUser();

    /* Declaring required variables. */
    double length, breadth, perimeter;

    /* Taking user input. */
    puts("Enter length of the rectangle: ");
    scanf("%lf", &length);

    puts("Enter breath of the rectangle: ");
    scanf("%lf", &breadth);

    /* getPerimeter function returns the computed perimeter of the rectangle.  */
    perimeter = getPerimeter(length, breadth);

    /* Printing the result. */
    printf("The perimeter of the rectangle: %.3lf", perimeter);

    return 0;
}

void greetUser() {

    puts("------------------------------------------");
    puts("---------------- WELCOME -----------------");
    puts("------------------------------------------\n");
}

double getPerimeter(double length, double breadth) {

    return 2 * (length + breadth);
}


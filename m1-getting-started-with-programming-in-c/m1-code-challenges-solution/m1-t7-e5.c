#include <stdio.h>
#include <unistd.h>

int main() {

    // Formula to calculate the area of the circle: PI * radius * radius

    puts("**************************");
    puts("---------WELCOME----------");
    puts("**************************\n");

    const float PI = 3.14;
    float radius, area;

    puts("Enter the radius of the circle in centimetre: ");
    scanf("%f", &radius);

    puts("\nCalculating radius...");
    usleep(500000);

    area = PI * radius * radius;

    printf("The area of the circle is: %.2f sq. cm.\n\n", area);
    usleep(500000);

    puts("**************************");
    puts("--------THANK YOU---------");
    puts("**************************");

    return 0;
}


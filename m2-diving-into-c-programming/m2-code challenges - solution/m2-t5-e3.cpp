#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50];

    puts("Enter first string: ");
    scanf("%[^\n]%*c", str1);

    puts("Enter second string: ");
    scanf("%[^\n]%*c", str2);

    /* Append a blank space at the end of str1. */
    strcat(str1, " ");

    /* Append str2 at the end of str1. */
    strcat(str1, str2);

    printf("Final result: %s", str1);

    return 0;
}

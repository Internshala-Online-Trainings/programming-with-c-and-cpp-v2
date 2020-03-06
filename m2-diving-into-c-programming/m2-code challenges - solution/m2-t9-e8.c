#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) calloc(n, sizeof(float));

    if (p == NULL) {
        puts("Memory allocation failed.");
        exit(0);
    } else {
        puts("Enter data: ");

        /* User input. */
        for (int i = 0; i < n; i++) {
            scanf("%f", p + i);    // Elements are being stored at their address.
        }

        int c, newSize;

        puts("Enter the number of more values you want to enter: ");
        scanf("%d", &c);

        newSize = c + n;

        /* Dynamically re-allocate memory using realloc(). */
        p = (float*) realloc(p, newSize * sizeof(float));

        puts("Enter data: ");

        /* User input. */
        for (int i = n; i < newSize; i++) {
            scanf("%f", p + i);
        }

        /* Find the sum. */
        for (int i = 0; i < newSize; i++) {
            sum = sum + p[i];    // Accessing elements stored in the memory block by using 'p[i]'.
        }

        printf("The sum is %.2f", sum);
    }

    free(p);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) malloc(n * sizeof(float));

    if (p == NULL) {
        puts("Memory allocation failed.");
        exit(0);
    } else {
        puts("Enter data: ");

        /* User input. */
        for (int i = 0; i < n; i++) {
            scanf("%f", p + i);    // Feeling confused? Check detailed explanation at the bottom.
        }

        /* Find the sum. */
        for (int i = 0; i < n; i++) {
            sum = sum + p[i];    // Accessing elements stored in the memory block by using 'p[i]'.
        }

        printf("The sum is %.2f", sum);
    }

    return 0;
}
/*
 In the statement "scanf(%d, p + i)", "p + i" is the address of the memory location which is being incremented with each iteration.

 In the first iteration where i = 0:
      -> p + i = p + 0 = p => This means the pointer is pointing to the address of the first element present in the allocated memory block.

 In the second iteration where i = 1:
      -> p + i = p + 1 => The pointer value will be incremented by 1 and now it will point to the address of the second element present in the allocated memory block.

 In the subsequent iterations, the pointer will be incremented by 1 and using scanf() function we will store value at each element's address in the allocated memory block.

 Note: This is the concept of Increment/Decrement of the pointer variable covered in the topic of 'Pointers'.
*/


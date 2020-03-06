#include <stdio.h>

float findLargestNumber(float *, int);


int main() {

    /* WAP to find out the largest number in the given array using a pointer. */
    float numbers[5] = {983, 2.9, 34, 433, 1000.567};
    float *p = numbers;        // Defining pointer to the array.

    /* Function call. */
    float num = findLargestNumber(p, 5);

    printf("The largest number is: %.4lf ", num);

    return 0;
}

float findLargestNumber(float *ptr, int size) {

    /* Initially assuming the largest number is the value in the array to which the pointer is currently pointing at. */
    float largest = *ptr;

    for (int i = 0; i < size; i++) {

        // If the current element in the array is greater than the assumed largest number.
        if (*ptr > largest) { 
            largest = *ptr;     // Then the current element will be assumed to be the new largest number.
        }

       ptr++;
    }

    /* After the termination of the loop, the last assumed largest number becomes the largest among all. */
    return largest;
}


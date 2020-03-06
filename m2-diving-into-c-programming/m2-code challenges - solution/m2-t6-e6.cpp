#include <stdio.h>

/* Function Declaration. */
void countOddNumbers(int[], int);


int main() {

    /* WAP to find out number of odd numbers in the given array. */
    int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};

    countOddNumbers(numbers, 10);

    return 0;
}

void countOddNumbers(int nums[], int size) {

    /* A counter variable to count the number of odd numbers in the array. */
    int count = 0;

    for (int i = 0; i < size; i++) {

        /* If the number is not divisible by 2 then it is an odd number. Hence, increment the counter by 1. */
        if (nums[i] % 2 != 0)
            count++;
    }

    printf("The number of odd numbers are: %d\n", count);
}


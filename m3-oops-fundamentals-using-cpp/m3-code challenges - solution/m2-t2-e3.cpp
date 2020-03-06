#include <stdio.h>


int main() {

    int n;
    long sum = 0;        // The sum could be a very long integer value. 

    puts("Enter n: ");    // User input. 
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + (i * i);    // The value ‘i’ will increase by 1 with each iteration. 
    }

    printf("Sum: %ld", sum);    // Print the sum. 

    return 0;
}


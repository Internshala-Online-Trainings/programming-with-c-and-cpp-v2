#include <stdio.h>

int fib(int);


int main() {

    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int result = fib(n);        // Statement 'A'

    printf("The fibonacci number is: %d", result);

    return 0;
}



int fib(int n) {

    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));    // Statement 'B'
}

/*
Explanation: 
- About the fib() function: In this function, we are first checking if the number 'n' is zero or one.
    - If yes, we return the value of n (i.e. return either 0 or 1).
    - If not, we recursively call fib() function with the values n-1 and n-2.
        - Because except for the first two numbers (i.e. 0 and 1), all other subsequent numbers in the series are the sum of the previous two numbers (i.e. (n-1) + (n-2)).
            - This implies fib(1) = 1 and fib(0) = 0. 

- Let us assume 'n' is 5, so we need to find the value of fib(5) to get the final result. 
- When statement 'A' is executed it passes the value of n = 5 to the fib() function
    - Else clause (statement 'B') is executed and the recursive calls will take place in this sequence:
        - fib(5) = fib(4) + fib(3)
        - fib(4) = fib(3) + fib(2)
        - fib(3) = fib(2) + fib(1)
        - fib(2) = fib(1) + fib(0)
        - fib(1) = 1
        - fib(0) = 0
    - In the above equations, let us start solving the recursive calls to get the final value.
        - fib(1) = 1 (already known from above)
        - fib(0) = 0 (already known from above)
- fib(2) = fib(1) + fib(0) = 1 + 0 = 1 
        - fib(3) = fib(2) + fib(1) = 1 + 1 = 2
        - fib(4) = fib(3) + fib(2) = 2 + 1 = 3
        - fib(5) = fib(4) + fib(3) = 3 + 2 = 5
    - Hence, int result = fib(5) = 5.
        - Therefore, the 5th Fibonacci number becomes 5. 
*/


#include <stdio.h>


int main() {

    int num, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store user input in a variable so that the reversedNumber can
    // be compared to the original user input in the end.
    int originalNum = num;

    do {
        remainder = num % 10;
        reversedNumber = (reversedNumber * 10) + remainder;
        num = num / 10;
    } while (num > 0);

    if (originalNum == reversedNumber)
        printf("Palindrome");
    else
        printf("Not a palindrome");


    return 0;
}

/* Explanation: 
Assume num  = 121
originalNum = num = 121
Do while loop will execute until num is greater than 0 
1st iteration:
remainder = num % 10 = 121 % 10 = 1 
reversedNumber = (reversedNumber * 10) + remainder = 0 * 10 + 1 = 1
num = num / 10 = 121 / 10 = 12
2st iteration:
remainder = num % 10 = 12 % 10 = 2
reversedNumber = (reversedNumber * 10) + remainder = 1 * 10 + 2 = 12
num = num / 10 = 12 / 10 = 1
3rd iteration:
remainder = num % 10 = 1 % 10 = 1
reversedNumber = (reversedNumber * 10) + remainder = 12 * 10 + 1 = 121
num = num / 10 = 1 / 10 = 0 
Loop terminates since num becomes 0 at the end of 3rd iteration. 
Since reversedNum and originalNum are found to be equal, therefore the entered number is a palindrome. 
*/


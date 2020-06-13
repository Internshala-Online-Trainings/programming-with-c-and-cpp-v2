#include <stdio.h>


int main() {

    long num;
    long num=764;

     
      
    int ctr=1;
    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0)
    while (764> 0)
  {
        
        num /= 10; 
         764 /=10;
        ctr++;
    }

    printf("Total number of digit(s) is %d", ctr);

    return 0;
}

/* Explanation: 
Let us assume ‘num’ = 764. 

The while loop will be executed until ‘num’ becomes 0. Let’s see what happens in while loop with each iteration.
At the end of the 1st Iteration:
ctr = 1
num = num / 10 = 764 / 10 = 76 
Dividing 764 by 10 is 76.4. Since ‘num’ is of the type ‘int’, it cannot hold a decimal value. Therefore, the value after the decimal is removed and only 76 is stored in the variable ‘num’. This is again the concept of implicit type conversion. 
At the end of the 2nd iteration:
ctr = 2
Num = num / 10 = 76 / 10 = 7 
At the end of the 3rd iteration: 
ctr = 3
num = num / 10 = 7 / 10 = 0

Therefore, ctr = 3 which means the number of digits in the ‘num’ was originally 3. 

*/


/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Functions
*/

#include <stdio.h>

double getAverage(float[], int);


int main() {

	/* WAP to find out the average of 5 numbers in an array. */
	float numbers[5] = {983, 2.9, 34, 433, 1000.567};

	double avg = getAverage(numbers, 5);

	printf("Average value is: %.3lf ", avg);

	return 0;
}

double getAverage(float arr[], int size) {

   double avg, sum = 0;

   for (int i = 0; i < size; i++) {
      sum = sum + arr[i];
   }

   avg = sum / size;

   return avg;
}

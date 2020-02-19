/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Pointers
*/

#include <stdio.h>

double getAverage(float *, int);


int main() {

	/* WAP to find out the average of 5 numbers in an array. */
	float numbers[5] = {983, 2.9, 34, 433, 1000.567};
	float *p;
	p = numbers;
	double avg = getAverage(p, 5);

	printf("Average value is: %.3lf ", avg);

	return 0;
}

double getAverage(float *ptr, int size) {

   double avg, sum = 0;

   for (int i = 0; i < size; i++) {
      sum = sum + *ptr;
      ptr++;
   }

   avg = sum / size;

   return avg;
}

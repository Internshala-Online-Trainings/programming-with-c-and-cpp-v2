/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		Arrays
*/

#include <stdio.h>


int main() {

	// 2D Array: Array of array(s).
	int arr[3][5] = {
						{ 98, 54, 12, 76, 99 },
						{ 87, 75, 11, 33, 45 },
						{ 17, 15, 23, 21, 67 }
					};

	// Access an element: arr[row][column]

	// Modify an element: arr[row][column] = value
	arr[2][4] = 98;

	// Print 2D array.
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 5; c++) {
			printf("%d ", arr[r][c]);
		}
		printf("\n");
	}

	return 0;
}

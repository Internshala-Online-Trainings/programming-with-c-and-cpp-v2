// Memory allocation.
// Indices --> 		   0    1    2    3    4
long scoresOne[5] = { 980, 903, 785, 761, 701 };

// Print address of each element in the array.
for (int i = 0; i < 5; i++) {
    printf("%ld\n", &scoresOne[i]);
}

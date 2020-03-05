int num = 20;
int *p;			// Pointer variable declaration.
p = &num; 		// 'p' is pointer to 'num' variable. 'p' contains the address of 'num' variable.

printf("Address of 'num': %ld\n", &num);

printf("Address stored in 'p': %ld\n", p);

printf("Value of '*p': %d\n", *p);

#include <stdio.h>

/**
 * main - pointers
 * 
 * Return: Always 0
 */
 int main(void)
 {
	int x;
	int *px = &x; /* px is a pointer to an int and it's set to the address of x */
	int **ppx = &px; /* ppx is a pointer to a pointer to an integer set to the address of px */

	printf("Value of x: %d\n", *px);
	printf("Size of x: %zu\n", sizeof(x));
	printf("Address of x: %p\n", &x);
	printf("Address of x: %p\n", px);
	printf("Size of px: %zu\n", sizeof(px));
	printf("Address of px: %p\n", ppx);
	printf("Size of ppx: %zu\n", sizeof(ppx));
	printf("Address of ppx: %p\n", &ppx);

	return (0);
}

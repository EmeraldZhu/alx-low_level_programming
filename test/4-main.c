#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p; /* pointer */

	n = 98;
	p = &n; /* address of n */

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Value of address of 'n' %d\n", *p);

	return (0);
}

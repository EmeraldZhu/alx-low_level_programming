#include <stdio.h>

/**
 * main - tests the value of array variable
 * 
 * Return: void
 */ 
int main(void)
{
	int a[5];

	*a = 1; /* same as *(a + 0) */

	printf("Address of a: %p\n", a);
	printf("Address of 1st element: %p\n", &a[0]);
	printf("Value of a: %d\n", *a);

	return (0);
}

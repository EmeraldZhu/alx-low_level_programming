#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;

	printf("Value of a[0]: %d\n", a[0]);
	printf("Value of a[1]: %d\n", a[0]);
	printf("Value of a[2]: %d\n", a[0]);
	printf("Value of a[3]: %d\n", a[0]);
	printf("Value of a[4]: %d\n", a[0]);

	printf("\n");

	printf("Address of a[0]: %p\n", &(a[0]));
	printf("Address of a[1]: %p\n", &(a[1]));
	printf("Address of a[2]: %p\n", &(a[2]));
	printf("Address of a[3]: %p\n", &(a[3]));
	printf("Address of a[4]: %p\n", &(a[4]));

	printf("\n");

	printf("Value of a: %d\n", *a);
	printf("Address of a: %p\n", &(a[0]));
	printf("Size of a: %zu\n", sizeof(a));

	return (0);
}

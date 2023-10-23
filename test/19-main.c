#include <stdio.h>

/**
 * main - prints the size of an array and the address of an array
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];

	printf("a: %p\n", a);
	printf("&a: %p\n", &a);

	printf("\n");

	printf("Size of a: %zu\n", sizeof(a));
	printf("Size of &a: %zu\n", sizeof(&a));

	return (0);
}

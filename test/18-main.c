#include <stdio.h>

/**
 * main - prints address of an array
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[10];

	printf("Address of arr: %p\n", arr); /* pointer to first element */
	printf("Address of &arr: %p\n", &arr); /* pointer to array */

	return (0);
}

#include <stdio.h>

/**
 * main - checks size of array
 * Description: array type decay doesn't occur
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[10];

	printf("Size of arr: %zu\n", sizeof(arr));

	return (0);
}

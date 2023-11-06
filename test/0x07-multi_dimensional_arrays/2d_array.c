#include <stdio.h>

/**
 * main - multi-dimensional arrays
 *
 * Return: Always 0.
 */
int main(void)
{
	int arr[2][3] = {
		{0, 1, 2}, /* row 0 */
		{3, 4, 5} /* row 1 */
	};

	printf("Value of arr[0][1]: %d\n", arr[0][1]);
	printf("Value of arr[1][2]: %d\n", arr[1][2]);

	return (0);
}

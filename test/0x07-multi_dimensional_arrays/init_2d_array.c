#include <stdio.h>

/**
 * main - initializing a 2d array using loops
 *
 * Return: Always 0
 */
int main(void)
{
	int rows, columns;
	int i, j;
	int arr[2][3];
	int value;

	rows = 2;
	columns = 3;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			value = i * columns + j;
			arr[i][j] = value;
		}
	}


	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return (0);
}

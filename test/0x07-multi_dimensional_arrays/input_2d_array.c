#include <stdio.h>

/**
 * main - asks for input to initialize a 2d array
 *
 * Return: Always 0.
 */
int main(void)
{
	int rows, columns;
	int arr[2][3];
	int i, j;

	rows = 2;
	columns = 3;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("Enter values for a[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	return (0);
}

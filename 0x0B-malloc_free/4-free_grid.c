#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free up memory occupied by a 2D array
 * @grid: a 2D array
 * @height: the height of the array
 *
 * Return: void or zero
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

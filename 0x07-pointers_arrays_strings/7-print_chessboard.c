#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: is the pointer array
 * Description: prints out the players arrangement when
 * starting a game
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}

		_putchar('\n');
	}
}

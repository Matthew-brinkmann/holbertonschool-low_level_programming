#include "main.h"

/**
 * print_chessboard - will actually print a 2D array that looks chessy
 * @a: the array we need to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, column = 0;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}

}

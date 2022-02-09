#include "main.h"
/**
 * print_square - will print asquare of # the size of n
 * @size: the length of the line that needs printing
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size > 0)
	{
		y = size;
		while (x < size)
		{
			while (y != 0)
			{
				_putchar('#');
				y--;
			}
			y = size;
			_putchar('\n');
			x++;
		}
	} else
		_putchar('\n');
}

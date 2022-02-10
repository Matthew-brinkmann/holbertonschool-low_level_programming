#include "main.h"

/**
 * print_triangle - will print a line as long as n
 * @size: the size of the triangle that needs printing
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	/* initial size to use in counter for total loop */
	int x = size;
	/* Used to determain number of spaces */
	int y = size - 1;
	/* used to determain number of # */
	int z = size - (size - 1);
	/* used to store previous # count */
	int b = z;

	if (size > 0)
	{
		while (x > 0)
		{
			while (y > 0)
			{
				_putchar(' ');
				y--;
			}
			b = z;
			while (z > 0)
			{
				_putchar('#');
				z--;
			}
			_putchar('\n');
			x--;
			b++;
			y = x - 1;
			z = size - (size - b);
		}
	} else
	_putchar('\n');
}

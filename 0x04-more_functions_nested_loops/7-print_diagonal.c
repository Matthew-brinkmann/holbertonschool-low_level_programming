#include "main.h"
/**
 * print_diagonal - will print a line as long as n with a \ on the end
 * @n: the length of the line that needs printing
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y != 0)
			{
				_putchar(' ');
				y--;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
			y = x;
		}
	} else
		_putchar('\n');
}

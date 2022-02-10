#include "main.h"

/**
 * print_line - will print a line as long as n
 * @n: the length of the line that needs printing
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}

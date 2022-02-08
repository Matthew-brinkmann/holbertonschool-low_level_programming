#include "main.h"

/**
 * print_to_98 - print every number between n and 98
 * @n: the number inputted
 * Description: long description
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int neg = 0;
	int direction = 0;
	int i;

	if (n > 98)
		direction = -1;
	else
		direction = 1;
	for (i = n; i != 98; i += direction)
	{
		if (i < 0)
		{
			neg = -1;
			_putchar('-');
		}
		else
		{
			neg = 1;
		}
		if ((i < -99) || (i > 99))
		{
			_putchar(((i * neg) / 100) + '0');
			_putchar((((i * neg) / 10) % 10) + '0');
			_putchar(((i * neg) - ((i * neg) / 10) * 10) + '0');
		}
		else if ((i > -10) && (i < 10))
			_putchar(((i * neg) % 10) + '0');
		else
		{
			_putchar(((i * neg) / 10) + '0');
			_putchar(((i * neg) % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

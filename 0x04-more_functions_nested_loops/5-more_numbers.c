#include "main.h"

/**
 * more_numbers - will print numbers from 0 - 14, 10 times.
 *
 * Description: long description
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int c = 0;
	int x = 0;
	int modifier = 1;

	while (c <= 10)
	{
		while (x <= 14)
		{
			if (x > 9)
				modifier = 10;
			_putchar((x / modifier) + '0');
			if (x > 9)
				_putchar((x % 10) + '0');
			x++;
		}
		x = 0;
		modifier = 1;
		_putchar('\n');
		c++;
	}
}

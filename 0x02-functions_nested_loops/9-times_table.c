#include "main.h"

/**
 * times_table - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void times_table(void)
{
	int a;
	int b;
	/* x = total number*/
	int x;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 9; a++)
		{
			x = a * b;
			if (a == 0)
			{
				_putchar((x) + '0');
			} else if (x < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((x) + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_times_table - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_times_table(int n)
{
	int a;
	int b;
	/* x = total number*/
	int x;

	for (b = 0; b <= n; b++)
	{
		for (a = 0; a <= n; a++)
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
				_putchar(' ');
				_putchar((x) + '0');
			} else if (x > 10 && x < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 100) + '0');
				_putchar(((x / 10) % 10) + '0');
				_putchar(((x) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_most_numbers - will print numbers from 0 - 9
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}

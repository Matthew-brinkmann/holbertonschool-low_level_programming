#include "main.h"

/**
 * print_numbers - will print numbers from 0 - 9
 *
 * Description: long description
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

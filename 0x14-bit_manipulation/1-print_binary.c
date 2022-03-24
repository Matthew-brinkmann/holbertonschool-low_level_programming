#include <stdio.h>
#include "main.h"
/**
 * print_binary - will brint binary rep of decimal number
 * @n: the number to print in binary
 * Description: long description
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 0)
		_putchar('0');
	else if ((n & 1) == 1)
		_putchar('1');
}

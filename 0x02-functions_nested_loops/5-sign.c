#include "main.h"

/**
* print_sign - short description
* @n: the inputting character to test
*
* Description: long description
*
* Return: 1 if letter (lowercase or uppercase), 0 if otherwise
*/
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	} else if (n == 0)
	{
		_putchar('0');
		x = 0;
	} else
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}

#include "main.h"

/**
 * print_last_digit - print last digit of the integer
 * passed through the functio
 * @n: number we want to find the last digit of
 * Description: long description
 *
 * Return: jthe last number of the int entered
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}
	_putchar('0' + x);
	return (x);
}

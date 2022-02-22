#include "main.h"

/**
 * factorial - produce factorial of given number.
 * @n: number to privde factorial of.
 * Description: long description
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

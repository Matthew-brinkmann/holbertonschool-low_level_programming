#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers passed through.
 * @n: the numbers we are adding together
 * Description: long description
 *
 * Return: sum of numbers or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);
	while (i < n)
	{
		sum = sum + va_arg(nums, unsigned int);
		i++;
	}
	va_end(nums);
	return (sum);
}

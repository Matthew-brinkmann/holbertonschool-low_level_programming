#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers
 * @separator: the char to be printed between the numbers
 * @n: the numbers we are adding together
 * Description: long description
 *
 * Return: sum of numbers or 0 if n == 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	int print = 0;

	va_start(nums, n);
	while (i < n)
	{
		print = va_arg(nums, int);
		printf("%d", print);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(nums);
	printf("\n");
}

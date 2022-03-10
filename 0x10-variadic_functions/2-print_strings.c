#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all the numbers
 * @separator: the char to be printed between the numbers
 * @n: the number of strings we need to print
 * Description: long description
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i = 0;
	char *print = 0;

	va_start(strs, n);
	while (i < n)
	{
		print = va_arg(strs, char*);
		if (print == NULL)
			printf("(nil)");
		else
			printf("%s", print);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(strs);
	printf("\n");
}

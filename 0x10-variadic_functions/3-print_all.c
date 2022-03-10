#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_char - prints a char.
 * @args: pointer to the list_item we need to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	printf("%c", c);
}

/**
 * print_int - prints an int.
 * @args: pointer to the list_item we need to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_int(va_list *args)
{
	int c;

	c = va_arg(*args, int);
	printf("%i", c);
}

/**
 * print_float - prints a float.
 * @args: pointer to the list_item we need to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_float(va_list *args)
{
	float c;

	c = va_arg(*args, double);
	printf("%f", c);
}

/**
 * print_string - prints a string.
 * @args: pointer to the list_item we need to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_string(va_list *args)
{
	char *c;

	c = va_arg(*args, char *);
	if (c == NULL || *c == '\0')
		c = "(nil)";
	printf("%s", c);
}

/**
 * print_all - prints any type of data.
 * @format: the type of data we need to print.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_all(const char * const format, ...)
{
	va_list print;
	unsigned int i = 0, count = 0;
	t_forms selector[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	char *seperator = "";

	va_start(print, format);
	while ((*(format + i)) != '\0')
	{
		count = 0;
		while (selector[count].symbol != NULL)
		{
			if (*(selector[count].symbol) == *(format + i))
			{
				printf("%s", seperator);
				selector[count].type(&print);
				seperator = ", ";
			}
			count++;
		}
		i++;
	}
	va_end(print);
	putchar('\n');
}

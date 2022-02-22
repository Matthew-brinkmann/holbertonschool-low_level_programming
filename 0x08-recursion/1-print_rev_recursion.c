#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the character we are going to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

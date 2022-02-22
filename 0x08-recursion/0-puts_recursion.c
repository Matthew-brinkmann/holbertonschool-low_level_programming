#include "main.h"

/**
 * _puts_recursion - short description
 * @s: the character we are going to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

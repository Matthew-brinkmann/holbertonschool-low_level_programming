#include "main.h"

/**
 * _strlen_recursion - count length of string.
 * @s: the string to count length of.
 * Description: long description
 *
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return (0);
	}
	n = n + _strlen_recursion(s + 1);
	return (n);
}

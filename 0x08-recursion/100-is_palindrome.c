#include "main.h"
#include <stdio.h>
/**
 * rev_pointer - print a string in reverse
 * @s: the character we are going to print
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *rev_pointer(char *s)
{
	if (*s == '\0')
	{
		return (s - 1);
	}
	return (rev_pointer(s + 1));
}

/**
 * compare - compare 2 strings
 * @s: the first srting to compate
 * @back: the second string to compare
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int compare(char *s, char *back)
{
	if (*s == '\0')
		return (1);
	if (*s != *back)
		return (0);
	else if (*s == *back)
		return (compare(s + 1, back - 1));
	return (1);
}

/**
 * is_palindrome - checks if string is pallendrom
 * @s: the string to see if pallendrome
 * Description: long description
 *
 * Return: 1 if pallendrom 0 if not.
 */
int is_palindrome(char *s)
{
	char *back = rev_pointer(s);

	return (compare(s, back));
}

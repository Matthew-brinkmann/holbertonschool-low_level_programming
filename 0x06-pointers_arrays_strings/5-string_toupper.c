#include "main.h"

/**
 * string_toupper - change string to upper case.
 * @s: the characters to change to uppercase.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

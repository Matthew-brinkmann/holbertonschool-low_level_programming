#include "main.h"

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we need to count
 * Description: long description
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char string = *s;
	int counter = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}
	return (counter);
}

/**
 * _strncpy - a string to copy to a saved buffer
 * @dest: buffer for string
 * @src: the string we are going to copy
 * @n: the number of characters to copy
 * Description: long description
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = _strlen(src);
	int i = 0;

	if (n > counter)
	{
		while (i <= counter)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i <= n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

#include <stdlib.h>
#include "main.h"
#include <stdio.h>
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
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * string_nconcat - concat s1 and n bytes of s2.
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: the number of bytes of s2 to paste.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenS1, lenS2;
	char *Con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = _strlen(s1);
	lenS2 = _strlen(s2);

	if (lenS2 > n)
		lenS2 = n;

	Con = malloc((lenS1 + lenS2) * sizeof(*Con) + 1);
	if (Con == NULL)
		return (NULL);

	printf("%d\n", lenS1);
	printf("%d\n", lenS2);
	_strncpy(Con, s1, lenS1);
	_strncpy(Con + lenS1, s2, lenS2 + 1);

	return (Con);
}

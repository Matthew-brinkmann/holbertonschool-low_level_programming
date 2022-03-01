#include <stdlib.h>
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
 * _strncat - add src
 * to the end of dest until n.
 * @dest: will be the string that is added too
 * @src: the string to copy
 * @n: the amount of src to copy
 * Description: long description
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int startCopy = _strlen(dest);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[startCopy] = src[i];
		i++;
		startCopy++;
	}
	dest[startCopy + 1] = '\0';
	return (dest);
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
 * str_concat - will concat 2 strings
 * @s1: first sting to concat
 * @s2: second string to concat
 * Description: long description
 *
 * Return: poointer to new array or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int lenS1, lenS2;
	char *Con;

	if (s1 == NULL)
		lenS1 = 0;
	else
		lenS1 = _strlen(s1);

	if (s2 == NULL)
		lenS2 = 0;
	else
		lenS2 = _strlen(s2);

	Con = malloc(lenS1 + lenS2 + 1);
	if (Con == NULL)
		return (0);
	_strncpy(Con, s1, lenS1);
	_strncat(Con, s2, lenS2);
	return (Con);
}

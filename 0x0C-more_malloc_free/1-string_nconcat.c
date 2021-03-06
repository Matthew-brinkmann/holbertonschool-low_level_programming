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
	unsigned int lenS1, lenS2, lenTotal, i = 0, j = 0;
	char *Con;

	if (s1 == NULL)
		lenS1 = 0;
	else
		lenS1 = _strlen(s1);
	if (s2 == NULL)
		lenS2 = 0;
	else
		lenS2 = _strlen(s2);

	if (lenS2 > n)
		lenS2 = n;
	lenTotal = lenS1 + lenS2;
	Con = malloc(lenTotal * sizeof(*Con) + 1);
	if (Con == NULL)
		return (NULL);
	while (i < lenS1)
	{
		Con[i] = s1[i];
		i++;
	}
	while (i < lenTotal)
	{
		Con[i] = s2[j];
		i++;
		j++;
	}
	Con[i] = '\0';

	return (Con);
}

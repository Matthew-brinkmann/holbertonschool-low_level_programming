#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - add src to the end of dest
 * @s: the string we want to count.
 * Description: long description
 *
 * Return: count
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
 * char *_strcat - add src to the end of dest
 * @dest: will be the string that is added too
 * @src: the string to copy
 * Description: long description
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{

	int startCopy = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[startCopy] = src[i];
		i++;
		startCopy++;
	}
	dest[startCopy] = src[i];
	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments passed into program
 * @av: the array containing arguments
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *argstostr(int ac, char **av)
{
	int i = 0, space = 0;
	char *newString;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		space = space + _strlen(av[i]) + 1;
		i++;
	}

	newString = malloc(space * sizeof(char));
	if (newString == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		_strcat(newString, av[i]);
		_strcat(newString, "\n");
		i++;
	}

	return (newString);
}

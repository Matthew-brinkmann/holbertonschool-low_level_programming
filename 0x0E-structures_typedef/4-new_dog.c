#include <stdlib.h>
#include "dog.h"
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
	char string;
	int counter = 0;

	if (s != NULL)
	{
		string = *s;
		while (string != '\0')
		{
			counter++;
			string = *(s + counter);
		}
		return (counter);
	}
	else
		return (0);
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
 * _strdup - duplicate string
 * @str: the string we will duplicate.
 * Description: long description
 *
 * Return: pointer to new string or null
 */
char *_strdup(char *str)
{
	int len;
	char *cpy;

	if (str == NULL)
		return (0);
	len = _strlen(str);
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (0);
	_strncpy(cpy, str, len);
	return (cpy);
}

/**
 * new_dog - will allow the creating of a new dog.
 * @name: the name of new dog
 * @age: Age of the new dog
 * @owner: The owner of the new dog
 * Description: long description
 *
 * Return: pointer to new dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = _strdup(name);
	newdog->age = age;
	newdog->owner = _strdup(owner);

	if (newdog->name == 0 || newdog->owner == 0)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}

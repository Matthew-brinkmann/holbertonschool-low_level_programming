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
 * _memcpy - short description
 * @src: the memory source we want to copy
 * @dest: the location we want to store the memory
 * @n: the number of bytes to copy.
 * Description: long description
 *
 * Return: returns pointer to dest
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int counter = 0;
	char *fillDest = dest;
	char *fillSrc = src;

	while (counter < n)
	{
		fillDest[counter] = fillSrc[counter];
		counter++;
	}

	return (dest);
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
	char *storeName;
	char *storeOwner;

	if (newdog == NULL)
		return (NULL);

	if (_strlen(name) > 0)
	{
		storeName = malloc(_strlen(name) + 1);
		if (storeName != NULL)
		{
			_memcpy(storeName, name, _strlen(name) + 1);
			newdog->name = storeName;
		}
	}
	else
		newdog->name = name;

	if (_strlen(owner) > 0)
	{
		storeOwner = malloc(_strlen(owner) + 1);
		if (storeOwner != NULL)
		{
			_memcpy(storeOwner, owner, _strlen(owner) + 1);
			newdog->owner = storeOwner;
		}
	}
	else
		newdog->owner = owner;

	newdog->age = age;

	return (newdog);
}

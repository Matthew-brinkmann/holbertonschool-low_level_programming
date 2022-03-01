#include <stdlib.h>
#include "main.h"

/**
 * create_array - short description
 * @size: the size of array to make
 * @c: the character to fill the array with.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter = 0;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(size);
	if (array == NULL)
		return (0);

	while (counter < size)
	{
		array[counter] = c;
		counter++;
	}

	return (array);
}

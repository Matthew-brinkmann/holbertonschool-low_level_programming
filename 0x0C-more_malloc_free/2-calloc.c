#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Write a function that allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each array element
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *fill;
	unsigned int counter = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	fill = array;
	while (counter < nmemb * size)
	{
		fill[counter] = 0;
		counter++;
`	}

	return (array);
}

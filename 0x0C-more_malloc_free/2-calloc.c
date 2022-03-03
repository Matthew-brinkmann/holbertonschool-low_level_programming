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
	char *pchar;
	int *pint;
	long *plong;
	unsigned int counter = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	if (size == 1)
	{
		pchar = array;
		while (counter < nmemb)
		{
			pchar[counter] = 0;
			counter++;
		}
	}
	if (size == 4)
	{
		pint = array;
		while (counter < nmemb)
		{
			pint[counter] = 0;
			counter++;
		}
	}
	if (size == 8)
	{
		plong = array;
		while (counter < nmemb)
		{
			plong[counter] = 0;
			counter++;
		}
	}

	return (array);
}

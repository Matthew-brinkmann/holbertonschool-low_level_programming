#include <stdlib.h>
#include "main.h"

/**
 * array_range - Write a function that initialised an array
 *  with min - max
 * @min: the smallest number
 * @max: the largest number
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int *array_range(int min, int max)
{
	int *array;
	int counter = 0;
	int size;

	if (min > max)
		return (NULL);

	size = max - min;
	array = malloc(sizeof *array * size + 1);
	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[counter] = min;
		counter++;
		min++;
	}

	return (array);
}

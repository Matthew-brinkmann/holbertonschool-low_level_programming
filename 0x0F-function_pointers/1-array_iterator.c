#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - will pass each element of an array to a function
 * @array: the array that stores elemets to display
 * @size: the size of the array
 * @action: the function to pass array elements too.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

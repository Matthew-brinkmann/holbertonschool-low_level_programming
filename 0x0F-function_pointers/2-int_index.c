#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer to be compared with function cmp
 * @array: the array of numbers to search
 * @size: size of the array
 * @cmp: the function used to compare.
 * Description: long description
 *
 * Return: number in array that matches of -1 if error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}

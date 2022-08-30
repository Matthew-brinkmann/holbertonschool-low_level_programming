#include "search_algos.h"

/**
 * linear_search - a linear search algorithm
 * @array: array to search
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index value is stored at or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t searchIdx = 0;

	if (array != NULL && size != 0)
	{
		for (; searchIdx < size; searchIdx++)
		{
			printf("Value checked array[%ld] = [%d]\n",
			       searchIdx,
			       array[searchIdx]);
			if (array[searchIdx] == value)
				return (searchIdx);
		}
	}
	return (-1);
}

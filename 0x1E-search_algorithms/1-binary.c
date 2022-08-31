#include "search_algos.h"

/**
 * array_print - prnit an array
 * @array: array to print
 * @size: the size of array
 *
 * Return: the index value is stored at or -1
 */
void array_print(int *array, size_t size)
{
	size_t arrayIdx = 0;
	char *seperator = "";

	printf("Searching in array:");
	for (; arrayIdx < size; arrayIdx++)
	{
		printf("%s %d", seperator, array[arrayIdx]);
		seperator = ",";
	}
	printf("\n");
}

/**
 * binary_search - implementation of binary search
 * @array: array to search
 * @size: the size of array
 * @value: the value to search for
 *
 * Return: the index value is stored at or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		array_print(array + low, high - low + 1);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}

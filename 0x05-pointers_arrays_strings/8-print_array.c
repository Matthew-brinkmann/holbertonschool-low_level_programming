#include "main.h"
#include <stdio.h>

/**
 * print_array - will print the array in order
 * @a: the array where things are stored
 * @n: the number of elements in the array to print.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}

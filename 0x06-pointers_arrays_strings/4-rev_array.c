#include "main.h"

/**
 * reverse_array - will reverse the array passed through
 * @a: the array to reverse
 * @n: the number of elements to reverse
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int holdNumber;

	while (i < n)
	{
		holdNumber = a[i];
		a[i] = a[n - 1];
		a[n - 1] = holdNumber;
		n--;
		i++;
	}
}

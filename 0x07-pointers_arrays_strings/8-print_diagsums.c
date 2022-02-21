#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print numbers added diagonally
 * @a: is the array of numbers
 * @size: the size of array
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_diagsums(int *a, int size)
{
	unsigned int num1 = 0;
	unsigned int num2 = 0;
	int row = 0;
	int rowSearch;
	int column = 0;

	while (column < size)
	{
		rowSearch = row * size;
		num1 = num1 + *(a + rowSearch + column);
		row++;
		column++;
	}
	row = size - 1;
	column = 0;
	while (column < size)
	{
		rowSearch = row * size;
		num2 = num2 + *(a + rowSearch + column);
		row--;
		column++;
	}
	printf("%d, %d\n", num1, num2);
}

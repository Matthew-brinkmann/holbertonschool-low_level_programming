#include "main.h"

/**
 * swap_int - will swap the value of 2 int.
 * @a: 1st value to swap
 * @b: 2nd value to swap
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void swap_int(int *a, int *b)
{
	int storeA = *a;
	*a = *b;
	*b = storeA;
}

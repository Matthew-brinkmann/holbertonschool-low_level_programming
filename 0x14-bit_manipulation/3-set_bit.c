#include <stdio.h>
#include "main.h"
/**
 * get_bit - will chage binary rep of decimal number at certain bit
 * @n: the number to change bit rep
 * @index: the index of bit we want to change
 * Description: long description
 *
 * Return: stored number or -1 if search for bigget than can search for.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int storedBit;

	if (index > 32)
		return (-1);

	storedBit = 1 << index;
	*n = *n | storedBit;

	return (1);
}

#include <stdio.h>
#include "main.h"
/**
 * flip_bits - number of bits to change to get one number to = another
 * @n: 1st number
 * @index: 2nd number
 * Description: long description
 *
 * Return: number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitDifferent = n ^ m, flips = 0;

	while (bitDifferent > 0)
	{
		flips = flips + (bitDifferent & 1);
		bitDifferent = bitDifferent >> 1;
	}

	return (flips);
}

#include <stdio.h>
#include "main.h"
/**
 * get_bit - will brint binary rep of decimal number at certain bit
 * @n: the number to print in binary
 * @index: th eindex of bit we want to print
 * Description: long description
 *
 * Return: stored number or -1 if search for bigget than can search for.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int storedBit;

	if (index > 32)
		return (-1);

	storedBit = n >> index;
	storedBit = storedBit & 1;

	return (storedBit);
}

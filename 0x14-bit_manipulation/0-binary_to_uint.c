#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int.
 * @b: string of 1 and 0 to convert to int.
 * Description: long description
 *
 * Return: unsigned int or 0(zero)
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, powerOf = 1;
	unsigned int result = 0, convertNumber = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;

	while (len > 0)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);
		if (b[len - 1] == '1')
			convertNumber = 1;
		else if (b[len - 1] == '0')
			convertNumber = 0;
		result = result + (convertNumber * powerOf);
		powerOf = powerOf * 2;
		len--;
	}
	return (result);
}

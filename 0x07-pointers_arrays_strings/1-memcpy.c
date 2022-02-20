#include "main.h"

/**
 * _memcpy - short description
 * @src: the memory source we want to copy
 * @dest: the location we want to store the memory
 * @n: the number of bytes to copy.
 * Description: long description
 *
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}

	return (dest);
}

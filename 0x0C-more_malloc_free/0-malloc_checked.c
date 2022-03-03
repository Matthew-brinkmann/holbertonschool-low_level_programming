#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: size of memory allocation
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void *malloc_checked(unsigned int b)
{
	void *src = malloc(b);

	if (src == NULL)
		exit(98);
	return (src);
}

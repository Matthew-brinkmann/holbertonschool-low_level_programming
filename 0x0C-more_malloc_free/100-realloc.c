#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - short description
 * @src: the memory source we want to copy
 * @dest: the location we want to store the memory
 * @n: the number of bytes to copy.
 * Description: long description
 *
 * Return: returns pointer to dest
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int counter = 0;
	char *fillDest = dest;
	char *fillSrc = src;

	while (counter < n)
	{
		fillDest[counter] = fillSrc[counter];
		counter++;
	}

	return (dest);
}

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: a ptr to the mem block
 * @old_size: the old size in bytes
 * @new_size: the new_size in bytes
 * Return: a void* to the new mem block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *write, *copy;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	write = p;
	copy = ptr;

	if (new_size > old_size)
		_memcpy(write, copy, old_size);
	else
		_memcpy(write, copy, new_size);

	free(ptr);
	return (p);
}

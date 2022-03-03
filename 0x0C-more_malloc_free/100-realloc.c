#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - a string to copy to a saved buffer
 * @dest: buffer for string
 * @src: the string we are going to copy
 * @n: the number of characters to copy
 * Description: long description
 *
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
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
		_strncpy(write, copy, old_size);
	else
		_strncpy(write, copy, new_size);

	free(ptr);
	return (p);
}

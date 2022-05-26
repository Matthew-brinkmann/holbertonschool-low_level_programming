#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hast_table_t table
 * @size: the required size of the table
 * Description: long description
 *
 * Return: pointer to table on success or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(new->array) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (; i < size; i++)
		(new->array)[i] = NULL;
	return (new);
}

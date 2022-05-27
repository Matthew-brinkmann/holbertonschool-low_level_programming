#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - returns a value from a key
 * @ht: the hash table to search
 * @key: the key to find the value of
 * Description: long description
 *
 * Return: pointer to value or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *retVal = NULL;
	hash_node_t *search = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);

	search = (ht->array)[index];
	while (retVal == NULL)
	{
		if (strcmp(search->key, key) == 0)
		{
			retVal = search->value;
			break;
		}
		if (search->next == NULL)
			return (NULL);
		search = search->next;
	}
	return (retVal);
}

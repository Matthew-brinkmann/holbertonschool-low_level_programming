#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * is_last_node - checks if node is the last in hash table
 * @ht: the hash table to check
 * @node: th enode to check
 *
 * Return: 1 if more nodes, 0 if last node
 */
int is_last_node(const hash_table_t *ht, hash_node_t *node)
{
	unsigned long int index = 0;

	index = (key_index((unsigned char *)node->key, ht->size)) + 1;
	for (; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
			return (1);
	}
	return (0);
}

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to print
 * Description: long description
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *search;

	if (ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			search = ht->array[i];
			while (search != NULL)
			{
				printf("'%s': '%s'", search->key, search->value);
				if (is_last_node(ht, search) == 1)
					printf(", ");
				search = search->next;
			}
		}
	}
	printf("}\n");
}

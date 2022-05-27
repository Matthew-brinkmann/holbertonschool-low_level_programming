#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * coll - if collision occures, how to handle it.
 * @idx: the index to insert node at
 * @ht: the hash table to manipulate
 * @new: the node to insert
 * @kCpy: the key to compare
 * Description: long description
 *
 * Return: 0 if key already exisits, 1 if new key
 */
int coll(unsigned long int idx, hash_table_t *ht, hash_node_t *new, char *kCpy)
{
	hash_node_t *temp = NULL;

	temp = (ht->array)[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, kCpy) == 0)
		{
			return (1);
		}
		temp = temp->next;
	}
	temp = (ht->array)[idx];
	new->next = temp;
	(ht->array)[idx] = new;
	return (0);
}
/**
 * set_node - creates a node to insert into hash table
 * @key: the key
 * @value: the value to store in the key
 * @node: the node to set
 * Description: long description
 *
 * Return: node
 */
void set_node(char *key, char *value, hash_node_t *node)
{
	node->key = key;
	node->value = value;
	node->next = NULL;
}
/**
 * hash_table_set - add element to hash table
 * @key: the key
 * @ht: the hash table to manipulate
 * @value: the value to store in the key
 * Description: long description
 *
 * Return: 1 if success or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valCpy = NULL, *keyCpy = NULL;
	hash_node_t *newNode = NULL;

	if (key == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	valCpy = strdup(value);
	if (valCpy == NULL)
		return (0);
	keyCpy = strdup(key);
	if (keyCpy == NULL)
	{
		free(valCpy);
		return (0);
	}
	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
	{
		free(valCpy);
		free(keyCpy);
		return (0);
	}
	set_node(keyCpy, valCpy, newNode);
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		if (coll(index, ht, newNode, keyCpy) == 1)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = valCpy;
			free(keyCpy);
			free(newNode);
			return (1);
		}
	}
	else
		(ht->array)[index] = newNode;
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * coll - if collision occures, how to handle it.
 * @idx: the index to insert node at
 * @ht: the hash table to manipulate
 * @new: the node to insert
 * @kC: the key to compare
 * Description: long description
 *
 * Return: 0 if key already exisits, 1 if new key
 */
int coll(unsigned long int idx, shash_table_t *ht, shash_node_t *new, char *kC)
{
	shash_node_t *temp = NULL;

	temp = (ht->array)[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, kC) == 0)
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
void set_node(char *key, char *value, shash_node_t *node)
{
	node->key = key;
	node->value = value;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
}

/**
 * sorted_insert - inserts node into ASCII value soted
 * @ht: the hash table to sort
 * @node: the node to insert
 * Description: long description
 *
 * Return: void
 */
void sorted_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}

	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_create - creates a hast_table_t table
 * @size: the required size of the table
 * Description: long description
 *
 * Return: pointer to table on success or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
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

/**
 * shash_table_set - add element to hash table
 * @key: the key
 * @ht: the hash table to manipulate
 * @value: the value to store in the key
 * Description: long description
 *
 * Return: 1 if success or 0 if fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valCpy = NULL, *keyCpy = NULL;
	shash_node_t *newNode = NULL;

	if (key == NULL || ht == NULL || strlen(key) == 0 ||
		ht->array == NULL)
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
	sorted_insert(ht, newNode);
	return (1);
}

/**
 * shash_table_get - gets element from hash table
 * @key: the key
 * @ht: the hash table to manipulate
 * Description: long description
 *
 * Return: pointer to value or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *retVal = NULL;
	shash_node_t *search = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
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

/**
 * shash_table_print - print a hash table
 * @ht: the hash table to print
 * Description: long description
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *search;
	char *sep = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	search = ht->shead;
	while (search != NULL)
	{
		printf("%s'%s': '%s'", sep, search->key, search->value);
		sep = ", ";
		search = search->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print a hash table reversed
 * @ht: the hash table to print
 * Description: long description
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *search;
	char *sep = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	search = ht->stail;
	while (search != NULL)
	{
		printf("%s'%s': '%s'", sep, search->key, search->value);
		sep = ", ";
		search = search->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}

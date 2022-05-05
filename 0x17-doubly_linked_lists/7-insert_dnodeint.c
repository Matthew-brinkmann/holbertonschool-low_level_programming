#include <stdlib.h>
#include "lists.h"

/**
 * create_node_idx - creates a new DLL node
 * @n: data to add to node
 *
 * Return: pointer to created node
 */
dlistint_t *create_node_idx(const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - adds a DLL element at index
 * @h: pointer to first list item in DLL.
 * @idx: the index to insert the new node.
 * @n: data for the new node
 * Description: long description
 *
 * Return: pointer to the new node/ NULL if fail.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *oldIdx;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new = create_node_idx(n);
	if (new == NULL)
		return (NULL);

	oldIdx = *h;
	for (; idx != count && oldIdx->next != NULL; count++)
		oldIdx = oldIdx->next;
	if (oldIdx->next != NULL)
		new->prev = oldIdx->prev;
	else
		new->prev = oldIdx;
	if (idx == count)
	{
		if (oldIdx->prev != NULL)
			oldIdx->prev->next = new;
		else
			*h = new;
		oldIdx->prev = new;
		new->next = oldIdx;
	}
	else if (idx == count + 1)
	{
		oldIdx->next = new;
		new->prev = oldIdx;
	}
	else
	{
		free(new);
		return (NULL);
	}
	return (new);
}

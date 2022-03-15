#include <stdio.h>
#include "lists.h"

/**
 * list_len - list all elements in a list
 * @h: the list to display
 * Description: long description
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

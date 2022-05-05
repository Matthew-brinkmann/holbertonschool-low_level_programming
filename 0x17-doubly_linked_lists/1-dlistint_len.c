#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts nodes in a double linked list
 * @h: the list to count
 * Description: long description
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

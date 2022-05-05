#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - list all elements in a list
 * @h: the list to display
 * Description: long description
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

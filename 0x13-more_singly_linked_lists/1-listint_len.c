#include <stdio.h>
#include "lists.h"

/**
 * listint_len - finds length of list
 * @h: the list to print
 * Description: long description
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

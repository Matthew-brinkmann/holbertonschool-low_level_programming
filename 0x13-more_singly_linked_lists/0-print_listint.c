#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints list type listint.
 * @h: the list to print
 * Description: long description
 *
 * Return: the number of elements in the list.
 */
size_t print_listint(const listint_t *h)
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

#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds a element at a certain index.
 * @h: the list to print
 * @index: the element to return
 * Description: long description
 *
 * Return: the number of elements in the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t nodeCount = 0;

	while (head != NULL)
	{
		if (nodeCount == index)
			return (head);
		head = head->next;
		nodeCount++;
	}

	return (NULL);
}

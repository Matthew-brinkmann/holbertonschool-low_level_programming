#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes an element at a certain index.
 * @head: the list to search
 * @index: the number we want to delete element at.
 *
 * Return: 1 on sucess or -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodeCount = 0;
	listint_t *current = NULL, *future = NULL;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		future = current->next;
		*head = future;
		free(current);
		return (1);

	}
	while (current != NULL)
	{
		if (nodeCount + 1 == index)
		{
			future = current->next;
			current->next = future->next;
			free(future);
			return (1);
		}
		current = current->next;
		nodeCount++;
	}

	return (-1);
}

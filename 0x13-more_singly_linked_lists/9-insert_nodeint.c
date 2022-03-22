#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds a element at a certain index.
 * @head: the list to search
 * @idx: the number we want to insert a new ele at.
 * @n: the data to insert into the new list element.
 * Description: long description
 *
 * Return: the address of new node or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodeCount = 0;
	listint_t *new = NULL;
	listint_t *hold = NULL;

	if (*head == NULL)
		return (NULL);
	hold = *head;
	if (idx != 0)
	{
		while (hold != NULL)
		{
			if (nodeCount + 1 == idx)
			{
				new = malloc(sizeof(*new));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = hold->next;
				hold->next = new;
				return (new);
			}
			hold = hold->next;
		}
	}
	else
	{
		new = malloc(sizeof(*new));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = hold;
		*head = new;
		return (new);
	}

	return (NULL);
}

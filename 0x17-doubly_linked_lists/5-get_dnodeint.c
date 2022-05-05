#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns an element at an index
 * @head: the list to search
 * @index: the number element to return
 * Description: long description
 *
 * Return: the Nth node or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int search = 0;

	while (head != NULL)
	{
		if (search == index)
			break;
		search++;
		head = head->next;
	}

	return (head);
}

#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delets a DLL element at index
 * @head: pointer to first list item in DLL.
 * @index: the index to insert the new node.
 * Description: long description
 *
 * Return: 1 if success/ -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *oldIdx;
	unsigned int count = 0;

	if (head == NULL || (*head) == NULL)
		return (-1);

	oldIdx = *head;
	while (index != count && oldIdx != NULL)
	{
		count++;
		oldIdx = oldIdx->next;
	}
	if (oldIdx == NULL)
		return (-1);

	if (oldIdx->next != NULL)
		oldIdx->next->prev = oldIdx->prev;

	if (index == 0)
		*head = oldIdx->next;
	else
		oldIdx->prev->next = oldIdx->next;
	free(oldIdx);

	return (1);
}

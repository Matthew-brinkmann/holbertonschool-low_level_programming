#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a list order.
 * @head: the list to reverse.
 *
 * Return: the address of head of new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL, *next = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;

	return (*head);
}

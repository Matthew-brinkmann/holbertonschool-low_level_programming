#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the list to manipulate
 * Description: long description
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *hold = NULL;
	int ret;

	if (*head == NULL)
		return (0);

	ret = (*head)->n;
	hold = (*head)->next;

	free(*head);

	*head = hold;
	return (ret);
}

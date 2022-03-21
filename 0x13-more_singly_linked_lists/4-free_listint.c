#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint type list
 * @head: the list to print
 * Description: long description
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlist DLL
 * @head: the list to free
 * Description: long description
 *
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}

}

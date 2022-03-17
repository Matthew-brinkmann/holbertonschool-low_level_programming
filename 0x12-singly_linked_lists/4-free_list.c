#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - will free all the elemetsin a list.
 * @head: the list to free
 * Description: long description
 *
 * Return: address of new item.
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		if (hold->str != NULL)
			free(hold->str);
		free(hold);

	}
}

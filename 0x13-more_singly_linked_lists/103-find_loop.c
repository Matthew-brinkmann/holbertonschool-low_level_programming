#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find a loop
 * @head: the list to print
 *
 * Return: pointer to loop or NULL if none.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *moveOne = head, *moveTwo = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (moveTwo != NULL && moveOne != NULL)
	{
		if (moveTwo->next == NULL)
			break;
		moveOne = moveOne->next;
		moveTwo = (moveTwo->next)->next;

		if (moveOne == moveTwo)
		{
			moveOne = head;

			while (moveOne != moveTwo)
			{
				moveOne = moveOne->next;
				moveTwo = moveTwo->next;
			}

			return (moveOne);
		}
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * node_count_loop - will calculate the # of nodes between 1st and current.
 * @head: head of the listInt
 * @current: Current list of lintInt
 * Return: the number of nodes in list.
 */
int node_count_loop(listint_t *head, listint_t *current)
{
	int counter = 0;
	const listint_t *move;

	move = head;
	if (move == current)
		return (1);

	while (move != current)
	{
		counter++;
		move = move->next;
	}

	return (counter + 1);
}

/**
 * find_listint_loop - find a loop
 * @head: the list to print
 *
 * Return: pointer to loop or NULL if none.
 */
listint_t *find_listint_loop(listint_t *head)
{
	int TotalCount = -1, newCount = 0;
	listint_t *hold = NULL, *loop = NULL;

	if (head == NULL)
		return (NULL);

	hold = head;
	loop = head;

	while (newCount > TotalCount && loop != NULL)
	{
		TotalCount = newCount;
		newCount = node_count_loop(hold, loop);
		if (newCount < TotalCount)
			return (loop);
		loop = loop->next;

	}

	return (NULL);
}

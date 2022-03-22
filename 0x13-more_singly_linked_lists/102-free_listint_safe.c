#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * node_count_free - will calculate the # of nodes between 1st and current.
 * @head: head of the listInt
 * @current: Current list of lintInt
 * Return: the number of nodes in list or exit on 98 on error.
 */
int node_count_free(listint_t *head, listint_t *current)
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
 * free_listint_n - frees list type listint to element n.
 * @h: the list to free
 * @index: the number of nodes to free.
 * Description: long description
 *
 * Return: the number of elements in the list.
 */
int free_listint_n(listint_t **h, int index)
{
	int nodeCount = 0;
	listint_t *hold;

	if (h == NULL)
		return (0);

	while (nodeCount < index)
	{
		hold = *h;
		*h = (*h)->next;
		free(hold);
		nodeCount++;
	}

	return (nodeCount);
}

/**
 * free_listint_safe - free a list that doesn't print looped elements
 * @h: the list to print
 *
 * Return: the number of nodes in list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t retVal = 0;
	int TotalCount = -1, newCount = 0;
	listint_t *hold = NULL, *loop = NULL;

	if (h == NULL || *h == NULL)
		return (retVal);

	hold = *h;
	loop = *h;

	while (newCount > TotalCount && loop != NULL)
	{
		TotalCount = newCount;
		newCount = node_count_free(hold, loop);
		if (newCount < TotalCount)
			break;
		loop = loop->next;

	}

	if (loop == NULL)
	{
		retVal = newCount;
		free_listint_n(h, newCount);
		h = NULL;
		return (retVal);
	}
	else
	{
		retVal = TotalCount;
		free_listint_n(h, TotalCount);
		*h = NULL;
		h = NULL;
		return (retVal);
	}
}

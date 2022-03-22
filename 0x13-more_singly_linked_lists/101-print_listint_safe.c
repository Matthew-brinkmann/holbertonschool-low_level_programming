#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * node_count - will calculate the distance of nodes between 1st and current.
 * @head: head of the listInt
 * @current: Current list of lintInt
 * Return: the number of nodes in list or exit on 98 on error.
 */
int node_count(const listint_t *head, const listint_t *current)
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
 * print_listint_n - prints list type listint to element n.
 * @h: the list to print
 * @index: the number of nodes to print.
 * Description: long description
 *
 * Return: the number of elements in the list.
 */
int print_listint_n(const listint_t *h, int index)
{
	int nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (nodeCount < index)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}

/**
 * print_listint_safe - print a list that doesn't print looped elements
 * @head: the list to print
 *
 * Return: the number of nodes in list or exit on 98 on error.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t retVal = 0;
	int TotalCount = -1, newCount = 0;
	const listint_t *hold = NULL, *loop = NULL;

	if (head == NULL)
		return (retVal);

	hold = head;
	loop = head;

	while (newCount > TotalCount && loop != NULL)
	{
		TotalCount = newCount;
		newCount = node_count(hold, loop);
		if (newCount < TotalCount)
			break;
		loop = loop->next;

	}

	if (loop == NULL)
	{
		retVal = newCount;
		print_listint_n(head, newCount);
		return (retVal);
	}
	else
	{
		retVal = TotalCount;
		print_listint_n(head, TotalCount);
		printf("-> [%p] %d\n", (void *)loop, loop->n);
		return (retVal);
	}
}

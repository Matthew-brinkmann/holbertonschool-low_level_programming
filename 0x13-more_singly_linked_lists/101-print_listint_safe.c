#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print a list that doesn't print looped elements
 * @head: the list to print
 *
 * Return: the number of nodes in list or exit on 98 on error.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *hold = NULL, *loop = NULL;

	hold = head;
	if (head == NULL)
		exit(98);

	while (hold != NULL)
	{
		loop = hold->next;
		printf("[%p] %d\n", (void *)hold, hold->n);
		if (loop > hold)
		{
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			break;
		}
		hold = hold->next;
		count++;
	}


	return (count);
}

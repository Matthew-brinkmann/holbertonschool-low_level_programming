#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the numbers in list.
 * @head: the list to print
 * Description: long description
 *
 * Return: the sum of al the elements or 0 if empty
 */
int sum_listint(listint_t *head)
{
	size_t Sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		Sum = Sum + head->n;
		head = head->next;
	}

	return (Sum);
}

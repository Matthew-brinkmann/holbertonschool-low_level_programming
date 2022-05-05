#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - adds all values in a dlistint DLL
 * @head: the list to sum
 * Description: long description
 *
 * Return: the sum of all nodes or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int retVal = 0;

	if (head == NULL)
		return (retVal);

	while (head != NULL)
	{
		retVal += head->n;
		head = head->next;
	}

	return (retVal);
}

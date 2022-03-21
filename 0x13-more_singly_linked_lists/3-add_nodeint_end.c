#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end
 * @head: the list to print
 * @n: data to store in the new element.
 * Description: long description
 *
 * Return: address of new element of NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *hold = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/*checking if first element*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/*if not first, search list till end to add in element*/
	hold = *head;
	while (hold->next != NULL)
		hold = hold->next;
	hold->next = new;

	return (new);
}

#include <stdlib.h>
#include "lists.h"

/**
 * create_node_end - creates a new DLL node
 * @n: data to add to node
 *
 * Return: pointer to created node
 */
dlistint_t *create_node_end(const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	return (new_node);
}

/**
 * add_dnodeint_end - adds a node ot the end of a DLL
 * @head: pointer to first list item in DLL.
 * @n: data for the new node
 * Description: long description
 *
 * Return: pointer to the new node/ NULL if fail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *oldLast;

	new = create_node_end(n);
	if (new == NULL)
		return (NULL);

	if (head == NULL || (*head) == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		oldLast = *head;
		while (oldLast->next != NULL)
			oldLast = oldLast->next;
		new->prev = oldLast;
		oldLast->next = new;
		return (new);
	}

	return (NULL);
}

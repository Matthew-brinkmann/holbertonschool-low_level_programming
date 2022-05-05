#include <stdlib.h>
#include "lists.h"

/**
 * create_node_start - creates a new DLL node
 * @n: data to add to node
 *
 * Return: pointer to created node
 */
dlistint_t *create_node_start(const int n)
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
 * add_dnodeint - adds a node to the start of a DLL
 * @head: the pointer ot the head of the list to add too
 * @n: data for the new node
 * Description: long description
 *
 * Return: pointer to the new node/ NULL if fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *oldFirst;

	new = create_node_start(n);
	if (new == NULL)
		return (NULL);

	if (head == NULL || (*head) == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		oldFirst = *head;
		oldFirst->prev = new;
		*head = new;
		new->next = oldFirst;
		return (new);
	}

	return (NULL);
}

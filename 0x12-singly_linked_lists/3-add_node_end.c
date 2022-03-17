#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add an elemt to the start of the list.
 * @head: the list to display
 * @str: the string to add to the list
 * Description: long description
 *
 * Return: address of new item.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *strCpy;
	int strLen = 0;
	list_t *new = NULL;
	list_t *hold = NULL;

	strCpy = strdup(str);
	if (strCpy == NULL)
		return (NULL);

	while (strCpy[strLen] != '\0')
	{
		strLen++;
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strCpy;
	new->len = strLen;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	hold = *head;
	while (hold->next != NULL)
		hold = hold->next;
	hold->next = new;
	return (new);
}

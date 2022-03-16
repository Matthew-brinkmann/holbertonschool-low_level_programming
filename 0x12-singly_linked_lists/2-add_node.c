#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add an elemt to the start of the list.
 * @head: the list to display
 * @str: the string to add to the list
 * Description: long description
 *
 * Return: address of new item.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strCpy;
	int strLen = 0;
	list_t *new;

	strCpy = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (strCpy[strLen] != '\0')
	{
		strLen++;
	}

	new->str = strCpy;
	new->len = strLen;
	new->next = *head;
	*head = new;

	return (*head);
}

#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - list of stuff
 * @str: string that is stored
 * @len: length of string
 * @next: pointer to the next list element
 * Description:
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */

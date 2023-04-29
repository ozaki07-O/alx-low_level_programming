#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: string
 * Return: node end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *f;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}

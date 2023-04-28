#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * @head: first
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}

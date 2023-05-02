#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head: first
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}

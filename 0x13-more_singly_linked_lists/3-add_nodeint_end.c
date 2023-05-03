#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: head
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *f;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	if (n == NULL)
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

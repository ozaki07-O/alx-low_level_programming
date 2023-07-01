#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elements of list
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d]%s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}

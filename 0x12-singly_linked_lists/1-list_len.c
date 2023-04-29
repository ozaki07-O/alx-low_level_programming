#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints number of elements of a list
 * @h: pointer to the list
 * Return: lenght
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}

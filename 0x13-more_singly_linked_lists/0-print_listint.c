#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints elements of a list
 * @h: pointer to the list
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
        size_t s = 0;

        while (h)
        {
                if (!h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);
                h = h->next;
                s++;
        }
        return (s);
}

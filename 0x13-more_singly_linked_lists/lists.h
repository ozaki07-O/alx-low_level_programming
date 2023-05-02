#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - prints elements of a list
 * @h: pointer to the list
 * Return: elements
 */
size_t print_listint(const listint_t *h);
/**
 * listint_len - prints number of elements of a list
 * @h: pointer to the list
 * Return: lenght
 */
size_t listint_len(const listint_t *h);
#endif

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
/**
 * add_nodeint - adds a new node
 * @head: first
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * add_nodeint_end - adds a new node at the end
 * @head: head
 * @n: integer
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(list_t *head);
#endif

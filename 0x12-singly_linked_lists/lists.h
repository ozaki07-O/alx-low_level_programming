#ifndef _LISTS_H_
#define _LISTS_H_
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_list - prints elements of a list
 * @h: pointer to the list
 * Return: elements
 */
size_t print_list(const list_t *h);

/**
 * list_len - prints number of elements of a list
 * @h: pointer to the list
 * Return: lenght
 */
size_t list_len(const list_t *h);
/**
 * add_node - adds a new node
 * @head: first
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: string
 * Return: node end
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - frees a list
 * @head: head
 */
void free_list(list_t *head);

#endif

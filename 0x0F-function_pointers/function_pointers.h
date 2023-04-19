#ifndef _FUNCTION__POINTERS_H_
#define _FUNCTION__POINTERS_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_name - prints a name
 * @f: function type of print
 * @name: the name to print
 *
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: action function to take
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - search for integer
 * @array: where to search
 * @size: size of array
 * @cmp: search function
 * Return: 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif

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
#endif

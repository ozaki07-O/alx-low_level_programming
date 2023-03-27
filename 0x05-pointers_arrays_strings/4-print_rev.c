#include "main.h"
/**
 * print_rev - prints string in reverse
 * _strlen - return lenght of a string
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i) + '\0');
	}
	_putchar('\n');
}

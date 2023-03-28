#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int size = _strlen(str);
	int i;

	if (size % 2 == 0)
	{
		for (i = size / 2; i <= size - 1; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = (size / 2) - 1; i <= size - 1; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

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
	int j;
	int str;

	for (i = 0; i >= 0; i++)
	{
		if (*(s + i) == '\0')
		{
			j = i;
			for (j = i; j >= 0; j--)
			{
				str = *(s+ j);
				_putchar(str + '\0');
			}
			break;
		}
	}
	_putchar('\n');
}

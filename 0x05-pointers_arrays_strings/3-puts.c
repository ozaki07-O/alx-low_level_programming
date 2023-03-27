#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int s;
	int i;

	for (i = 0; i < 100; i++)
	{
		if (*(str + i) == '\0')
		{
			_putchar ('\n');
			break;
		}
		else
		{
			s = *(str + i);
			_putchar (s + '\0');
		}
	}
}

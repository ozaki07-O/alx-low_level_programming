#include "main.h"
/**
 * print_line - prints a line
 * @n: is lines length by _
 *
 * Return: line
 *
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar ('\n');
}

#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: is the diagonal lines length by \
 *
 * Return: diagona line
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	i = n;

	if (n > 1)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i < j;)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n == 1)
	{
		_putchar('\\');
	}
	_putchar ('\n');
}

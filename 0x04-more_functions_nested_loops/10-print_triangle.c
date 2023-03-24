#include "main.h"
/**
 * print_triangle - print a triangle shape with #
 * @size: size of the triangle
 *
 * Return: triangle shape of #
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 1)
	{
		for (j = size; j >= 1; j--)
		{
			for (i = 1; i < j ;)
			{
				_putchar(' ');
				i++;
			}
			for (k = j; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

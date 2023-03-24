#include "main.h"
/**
 * print_square - print even rows and culumns using #
 * @size: number of # in each row and column
 *
 * Return: square shape of #
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
	}
	else
	{
		_putchar('\n');
	}
}

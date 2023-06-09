#include "main.h"

/**
 * print_times_table - prints the table n times, starting with 0
 * @n: number of times
 *
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (j == 0)
				{
					_putchar('0');
				} else if (r <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				} else if (r >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + r / 100);
					_putchar('0' + (r / 10) % 10);
					_putchar('0' + r % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
				}
			}
			_putchar('\n');
		}
	}
}

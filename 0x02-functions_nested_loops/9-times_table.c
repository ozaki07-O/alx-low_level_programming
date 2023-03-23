#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 (Success)
 *
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

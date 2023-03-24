#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: number from 0 to 9
 */

void print_most_numbers(void)
{
	char c;

	c = '0';

	for (c = '0'; c <= '9';)
	{
		if ((c == '2') || (c == '4'))
		{
			c++;
		}
		else
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}

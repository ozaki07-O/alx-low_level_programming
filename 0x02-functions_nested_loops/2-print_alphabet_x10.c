#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times in lowercase
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	int i;
	i = 1;

	while (i <= 10)
	{
		char c;
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

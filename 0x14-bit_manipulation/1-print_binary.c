#include <stdio.h>
#include "main.h"
/**
 * print_binary - convert a number to binary and print it
 * @n: number to transform
 *
 * Return: unsigned int
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

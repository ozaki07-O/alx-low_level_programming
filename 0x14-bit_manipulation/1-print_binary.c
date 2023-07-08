#include "main.h"
#include <stdio.h>
/**
 * print_binary - print number in binary
 * @n: the int number
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}

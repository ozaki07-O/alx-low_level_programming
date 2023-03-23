#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit
 *
 * @n: number to print
 * Return: last digit of integer
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

#include "main.h"
/**
 * _puts_rev_recursion - prints a string by recursion
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}

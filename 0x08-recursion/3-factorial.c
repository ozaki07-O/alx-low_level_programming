#include <stdio.h>
#include "main.h"
/**
 * factorial - prints a factorial
 * @n: number
 * Return: n factorial
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}

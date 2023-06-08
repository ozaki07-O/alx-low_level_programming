#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = _strlen_recursion(s + 1);
		return (count += 1);
	}
	return (0);
}

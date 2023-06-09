#include "main.h"
/**
 * _memset - fill memory with a contant byte
 * @s: array to set
 * @b: the comstant value
 * @n: number of times
 *
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes of s2
 *
 * Return: a char pointer value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int c = 0, C = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c] != '\0')
	{
		c++;
	}
	while (s2[C] != '\0')
	{
		C++;
	}
	t = malloc(sizeof(char) * (c + n + 1));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		t[i] = s1[i];

	for (i = 0; i < n; i++)
		t[i + c] = s2[i];

	t[i + c] = '\0';

	return (t);
}

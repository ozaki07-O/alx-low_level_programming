#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second strings
 * @n: n bytes of s2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i;
	unsigned int c = 0;
	unsigned int d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c] != 0)
		c++;
	while (s2[d] != 0)
		d++;
	if (n >= d)
	{
		t = malloc(sizeof(char) * c + d + 1);
		if (t == NULL)
			return (NULL);
		for (i = 0; i < c; i++)
			t[i] = s1[i];
		for (i = 0; i < d; i++)
			t[i + c] = s2[i];
		return (t);
	}

	t = malloc(sizeof(char) * c + n);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		t[i] = s1[i];
	for (i = 0; i < n; i++)
		t[i + c] = s2[i];

	return (t);
}

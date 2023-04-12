#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly concatenate string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int c = 0, n = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		c++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		n++;
	}

	t = malloc(sizeof(char) * (c + n + 1));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		t[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		t[i + c] = s2[i];

	}
	t[i + c] = '\0';
	return (t);
}

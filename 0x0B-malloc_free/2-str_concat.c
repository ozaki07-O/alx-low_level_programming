#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatinates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int c = 0;
	int d = 0;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c] != 0)
		c++;
	while (s2[d] != 0)
		d++;
	t = malloc(sizeof(char) * c + d + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		t[i] = s1[i];
	for (i = 0; i < d; i++)
		t[i + c] = s2[i];
	return (t);
}

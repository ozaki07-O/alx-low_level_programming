#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies a string to allocated memory
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *t;
	int c = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[c] != 0)
		c++;
	t = malloc(sizeof(char) * c + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		t[i] = str[i];
	return (t);
}

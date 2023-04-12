#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: pointer to newly duplicate string
 */
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);
	while (str[c] != '\0')
		c++;
	t = malloc(sizeof(char) * c + 1);
	for (i = 0; i <= c; i++)
	{
		t[i] = str[i];
	}
	return (t);
}

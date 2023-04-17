#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s)
{

	int i;
	char t;
	int size = _strlen(s);

	for (i = 0; i < (size / 2); i++)
	{
		t = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = t;
	}
}

#include "main.h"
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
	int size = sizeof(s);

	for (i = 0; i < (size / 2); i++)
	{
		t = s[i];
		s[i] = s[size - i];
		s[size - i] = t;
	}
}

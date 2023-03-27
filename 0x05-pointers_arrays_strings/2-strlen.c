#include "main.h"
/**
 * _strlen - returns lenght of a string
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 1; i > 0;)
	{
		if (*(s + i) == 0)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (i);
}

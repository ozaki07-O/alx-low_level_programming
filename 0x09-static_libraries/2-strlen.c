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

	if (*(s + 0) == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i >= 0;)
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
}

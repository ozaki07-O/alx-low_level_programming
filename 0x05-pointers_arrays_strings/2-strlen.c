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

<<<<<<< HEAD
	if(*(s + 0) == 0)
	{
		return (0);
	}
	{
		for (i = 1; i > 0;)
=======
	if (*(s + 0) == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i >= 0;)
>>>>>>> c1bb78bd5d6eb936b87b09efd95e5faa70a16bcd
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

#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i += 2)
	{
		if (*(str + i) == 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(*(str + i) + '\0');
		}
	}
}

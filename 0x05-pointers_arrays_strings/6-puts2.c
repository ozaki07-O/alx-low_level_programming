#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return 0
 */
void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i <= size; i += 2)
	{
		if (*(str + i) == 0)
		{
			break;
		}
		else
		{
			_putchar(*(str + i) + '\0');
		}
	}
	_putchar('\n');
}

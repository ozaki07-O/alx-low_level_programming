#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of memory
 * @c: character to creat
 *
 * Return: ponter to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

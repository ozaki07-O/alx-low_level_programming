#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for array
 * @nmemb: elemnts
 * @size: size of element
 * Return: pointer to void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		array[i] = 0;
	return (array);
}

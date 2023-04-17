#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size;

	if (min > max)
		return (NULL);
	size = 0;
	for (i = min; i <= max; i++)
		size++;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

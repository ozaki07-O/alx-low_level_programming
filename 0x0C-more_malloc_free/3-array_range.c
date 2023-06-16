#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of int
 * @min: first value
 * @max: max value
 * Return: array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

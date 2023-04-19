#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search for integer
 * @array: where to search
 * @size: size of array
 * @cmp: search function
 * Return: 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (siwe <= 0 || array == NULL && cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}

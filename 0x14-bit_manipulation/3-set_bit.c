#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets a bit value to 1 at a given index
 * @n: pointer to number
 * @index: index
 *
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}

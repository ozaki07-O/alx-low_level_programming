#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clears a bit value to 1 at a given index
 * @n: pointer to number
 * @index: index
 *
 * Return: number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1L << index);

	return (1);
}

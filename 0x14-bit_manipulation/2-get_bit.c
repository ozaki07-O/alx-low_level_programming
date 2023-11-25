#include <stdio.h>
#include "main.h"
/**
 * get_bit - prints a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}

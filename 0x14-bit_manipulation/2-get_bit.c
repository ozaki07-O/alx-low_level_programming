#include "main.h"
/**
 * get_bit - gets the value of bit at index
 * @n: int number
 * @index: index given
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1)
}

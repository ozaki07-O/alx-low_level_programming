#include <stdio.h>
#include "main.h"
/*
 * flip_bits - number of bits needed to be fliped
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	/* Count the set bits in xor_result */
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return count;
}

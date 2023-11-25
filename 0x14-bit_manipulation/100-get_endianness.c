#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: number of bits
*/
int get_endianness(void)
{
	int num = 1;

	return (*(char *)&num);
}

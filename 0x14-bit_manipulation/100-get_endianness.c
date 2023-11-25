#include <stdio.h>
#include "main.h"

/**
 * get_indianness - checks the endianness
 *
 * Return: number of bits
*/
int get_endianness()
{
	int num = 1;

	return (*(char *)&num);
}

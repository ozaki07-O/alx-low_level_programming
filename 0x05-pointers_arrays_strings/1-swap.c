#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int A;
	int B;

	A = a;
	B = b;
	*a = B;
	*b = A;
}

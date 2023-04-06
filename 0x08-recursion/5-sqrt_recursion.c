#include "main.h"
/**
 * helper - helps 
 * @i: integer of try
 * @n: number
 * Return: squar root
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n )
		{
			return (- 1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _int _sqrt_recursion - natural square root of n
 * @n: number
 *
 * Return: n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (helper(i, n));
}

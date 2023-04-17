#include "main.h"
/**
 * helper - check the number if it's prime
 * @i: integer to test with
 * @n: number
 * Return: 1 or 0
 */
int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i == 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - checks if n is prime number
 * @n: number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}

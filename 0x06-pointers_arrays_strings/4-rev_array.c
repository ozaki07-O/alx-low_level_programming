#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array to reverse
 * @n: number of elements
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}

}

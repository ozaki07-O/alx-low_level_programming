#include "main.h"
/**
 * _pow_recursion - value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	int X;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		X = x * _pow_recursion(x, y - 1);
	}
	return (X);
}

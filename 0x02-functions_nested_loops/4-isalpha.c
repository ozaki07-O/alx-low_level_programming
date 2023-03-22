#include "main.h"
/**
 * _isalpha - cheks if c is an alphabet
 * @c: character to check
 *
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

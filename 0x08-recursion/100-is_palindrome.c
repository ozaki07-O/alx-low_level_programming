#include "main.h"
#include "2-strlen_recursion.c"
/**
 * helper - helps to check palindrom
 * @i: the checker
 * @s: the string
 *
 * Return: palindrom or not
 */
int helper(int i, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - i])
			return (0);
		return (helper(i + 1, s + 1));
	}
		return (1);
}
/**
 * is_palindrome - cheks for palindrome string
 * @s: the string to check
 *
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper(i, s));
}

#include "main.h"
/**
 * cap_string - capitalizes every word of a string
 * @s: string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (i = 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s{i} = s[i] - 32;
			}
		}
		if (s[i] == ',' || s[i] == ' ' || s[i] == '\n' || s[i] == '.' || s[i] == ';'
			|| s[i] == '?' || s[i] == '!' || s[i] == '"' || s[i] == '(' ||
			s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

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
		if (s[i] == ',' || s[i] == ' ' || s[i] == '\n' || s[i] == '.')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] == ';' || s[i] == '?' || s[i] == '!' || s[i] == '"')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}

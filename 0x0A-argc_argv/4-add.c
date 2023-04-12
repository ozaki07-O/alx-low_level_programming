#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define unused(x) (void)(x)
/**
 * StringCheck - checks string
 * @s: string to check
 * Return: boolean
 */
int StringCheck(char *s)
{
	int i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (StringCheck(argv[i]))
			{
				add += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}

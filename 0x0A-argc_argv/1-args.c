#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: command line arguments
 *
 * Return: number
 */
int main(int argc, char *argv[])
{
	if(*argv)
	{
		printf("%d\n", argc - 1);
	}
		return (0);
}

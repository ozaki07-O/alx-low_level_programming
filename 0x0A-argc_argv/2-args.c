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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}

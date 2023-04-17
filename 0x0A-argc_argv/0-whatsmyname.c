#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: command line arguments
 *
 * Return: name
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

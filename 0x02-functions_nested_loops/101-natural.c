#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	int sum;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

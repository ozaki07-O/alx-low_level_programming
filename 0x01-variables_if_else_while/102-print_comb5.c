#include <stdio.h>
/**
 * main - prints number to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar('0' + i);
				putchar(' ');
				putchar('0' + j);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

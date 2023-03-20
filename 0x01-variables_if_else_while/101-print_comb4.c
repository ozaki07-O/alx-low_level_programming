#include <stdio.h>
/**
 * main - prints number to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int l;
	int j;
	int i;

	for (i = 10; i <= 18 ; i++)
	{
		for (j = 10; j <= 19 ; j++)
		{
			for (l = 10; l <= 19 ; l++)
			{
				if ((l % 10) > (j % 10) && (j % 10) > (i % 10))
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((l % 10) + '0');
					if (l != 19 || j != 18 || i != 17)
					{
						putchar(',');
						putchar(' ');

					}

				}

			}

		}

	}

	putchar('\n');
	return (0);
}


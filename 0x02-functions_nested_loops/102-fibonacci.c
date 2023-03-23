#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int f;
	int s;
	int N;

	f = 0;
	s = 1;

	for (i = 1; i <= 50;)
	{
		if (i != 50)
		{
		N = f + s;
		f = s;
		s = N;
		printf("%d, ", N);
		i++;
		}
	}
	printf("\n");
	return (0);
}

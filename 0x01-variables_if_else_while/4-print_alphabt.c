#include <stdio.h>
/**
 * main - prints the alphabets in lowercase then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if (c == 'e')
				c++;
			else if (c != 'q')
			{
				putchar(c);
				c++;
			}
			else
			c++;
		}
	putchar('\n');
	return (0);
}



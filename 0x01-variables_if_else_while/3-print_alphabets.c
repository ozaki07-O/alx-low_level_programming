#include <stdio.h>
/**
 * main - prints the alphabets in lowercase then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	char U;

	c = 'a';
	U = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(U <= 'Z') {
			putchar(U);
			U++;
		}
	putchar('\n');
	return (0);
}

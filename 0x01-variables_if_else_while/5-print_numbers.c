#include <stdio.h>
/**
 * main - prints numbers from 0 to 10
 *
 * Return: Always 0
 */
int main(void)
{
int a;
a = 0;
do {
    printf("%d", a);
    a++;
} while (a < 10);
printf("\n");
return (0);
}

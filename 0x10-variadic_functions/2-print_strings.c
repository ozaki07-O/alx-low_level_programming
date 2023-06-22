#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = (va_arg(strings, char *));

		if (i > 0 && separator != NULL)
			printf("%s", separator);
		if (string == NULL)
			printf("(nil)");

		printf("%s", string);
	}
	va_end(strings);
	printf("\n");
}

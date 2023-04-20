#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print string with seprarator
 * @separator: string between strings
 * @n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list str;
	char *strArg;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strArg = va_arg(str, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	printf("\n");
	va_end(str);
}

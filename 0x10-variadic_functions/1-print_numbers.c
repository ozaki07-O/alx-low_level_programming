#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers wth separator
 * @separator: string betzeen nums
 * @n: number of nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%d", va_arg(nums, int));
	}
	printf("\n");
	va_end(nums);
}
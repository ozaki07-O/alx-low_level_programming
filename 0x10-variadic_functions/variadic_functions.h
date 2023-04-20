#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * sum_them_all- sum of arrguments
 * @n: number of arguments
 * Return: Sum or 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers with separator
 * @separator: string betzeen nums
 * @n: number of nums
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - print string with seprarator
 * @separator: string between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * print_all - prints all
 * @format: format string that says arg types
 *
 */
void print_all(const char * const format, ...);

int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);
/**
 * struct op - struct for 3
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
#endif

#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

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

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
#endif

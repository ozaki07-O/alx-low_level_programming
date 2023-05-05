#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * binary_to_uint -  converts a binary number
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - print binary
 * @n: integer
 */
void print_binary(unsigned long int n);

/**
 * get_bit - gets the value of bit at index
 * @n: int number
 * @index: index given
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index);

#endif

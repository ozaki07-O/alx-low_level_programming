#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * reset_to_98 - updates the value a pointer points to
 * @int *n: pointer to integer
 *
 * Return: 0
 */
void reset_to_98(int *n);

/**
 * swap_int -  swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns lenght of a string
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s);

/**
 * _puts - prints a string
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str);

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: 0
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return 0
 */
void puts2(char *str);

#endif

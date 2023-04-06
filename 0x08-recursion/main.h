#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _puts_recursion - prints a string by recursion
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string by recursion
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns string length
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s);

/**
 * factorial - print
 * @n: number
 *
 * Return: n!
 */
int factorial(int n);

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: x
 */
int _pow_recursion(int x, int y);

#endif

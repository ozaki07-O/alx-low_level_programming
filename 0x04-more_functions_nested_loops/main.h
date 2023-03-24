#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
* _isupper - main function
*
* @c: character to compare
*
* Return: 1 if true, 0 if false
*
*/
int _isupper(int c);

#include "main.h"
/**
* _isdigit - checks for digit
*
* @c: character to compare
*
* Return: 1 if true, 0 if false
*
*/
int _isdigit(int c);

/**
 * mul - multiplies two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of two integers
 */
int mul(int a, int b);

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void);

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: number from 0 to 9
 */
void print_most_numbers(void);

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: numbers from 0 to 14
 */
void more_numbers(void);

/**
 * print_line - prints a line
 * @n: is lines length by _
 *
 * Return: line
 *
 */
void print_line(int n);

#endif

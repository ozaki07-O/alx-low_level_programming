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
#endif

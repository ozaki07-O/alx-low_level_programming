#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabets ten times in lowercasse
 * 
 * Return: Always 0
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if c is a lowercase character.
 * @c: The character to check
 *
 * Return: is lowercase 1.
 * 0 otherwise
 *
 */
int _islower(int c);

/**
 * _isalpha - check if c is an alphabet.
 * @c: The character to check
 * 
 * Returns 1 or 0
 *
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number n
 * @n: number 
 *
 * Return: 1 or 0 or -1
 *
 */
int print_sign(int n);

/**
 * _abs - prints the absolute value of a number.
 * @int: is the number
 *
 * Return: 0 (success)
 *
 */
int _abs(int);

#endif

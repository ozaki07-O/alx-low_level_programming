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

/**
 * print_last_digit - prints the last digit of a number
 * @int: integer to input
 * 
 * Return: last digit of integer
 *
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minutes of the day
 *
 *
 * Return: Always 0 (Success)
 *
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 (Success)
 *
 */
void times_table(void);

/**
 * add - adds two integers
 * @int: integers to be added
 *
 * Return: sum of two integers
 */
int add(int, int);

/**
 * print_to_98 - prints all numbers from the number in to 98
 * @n: integer to start
 *
 * Return: integers from n to 98
 *
 */
void print_to_98(int n);

/**
 * print_times_table - prints the table n times, starting with 0
 * @n: number of times
 *
 */
void print_times_table(int n);

#endif

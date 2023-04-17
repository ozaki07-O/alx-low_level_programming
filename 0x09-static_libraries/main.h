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
* _islower - main function
*
* @c: character to compare
*
* Return: 1 if true, 0 if false
*
*/
int _islower(int c);

/**
 * _isalpha - cheks if c is an alphabet
 * @c: character to check
 *
 * Return: 1 or 0
 *
 */
int _isalpha(int c);

/**
 * _abs - prints the absolute value of a number
 *
 * @n: is the number
 * Return: 0
 */
int _abs(int n);

/**
* _isupper - main function
*
* @c: character to compare
*
* Return: 1 if true, 0 if false
*
*/
int _isupper(int c);

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
 * _strcpy - copies string
 * @src: pointer to string to be copied
 * @dest: pointer to string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

int _atoi(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: amount of times
 *
 * Return: a pointer to string dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string to a strings
 * @dest: first string
 * @src: second string
 * @n: amount of charachters
 *
 * Return: a pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2);

/**
 * _memset - fill memory with a contant byte
 * @s: array to set
 * @b: the comstant value
 * @n: number of times
 *
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: destanation memory
 * @src: the memory to be copied
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: string to locate from
 * @c: character to locate
 *
 * Return: the first occurrence of the character c
 */
char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);


char *_strpbrk(char *s, char *accept);


char *_strstr(char *haystack, char *needle);

#endif

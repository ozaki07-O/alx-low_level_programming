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




/**
 * print_chessboard - prints the chessboard
 * @a: order
 *
 * Return: chessboard
 */
void print_chessboard(char (*a)[8]);

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to set
 * @to: value to set to
 */
void set_string(char **s, char *to);
#endif

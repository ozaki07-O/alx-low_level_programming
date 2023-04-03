#ifndef _MAIN_H_
#define _MAIN_H_

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
#endif

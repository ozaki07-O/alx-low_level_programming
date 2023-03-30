#include "main.h"
/**
 * _strncpy - copies a string to a strings
 * @dest: first string
 * @src: second string
 * @n: amount of charachters
 *
 * Return: a pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

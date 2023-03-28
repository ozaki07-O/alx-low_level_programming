#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies string
 * @src: pointer to string to be copied
 * @dest: pointer to string 
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int size = _strlen(src);
	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}

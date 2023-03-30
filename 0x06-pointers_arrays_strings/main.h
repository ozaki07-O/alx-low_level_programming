#ifndef _MAIN_H_
#define _MAIN_H_
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
 * Return: diffrence
 */
int _strcmp(char *s1, char *s2);
#endif

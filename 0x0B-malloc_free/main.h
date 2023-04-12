#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * create_array - creates an array of chars
 * @size: size of memory
 * @c: character to creat
 *
 * Return: ponter to array, NULL if fail
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: pointer to newly duplicate string
 */
char *_strdup(char *str);

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly concatenate string
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - creat matrix
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: array 2D
 */
int **alloc_grid(int width, int height);

/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height);

#endif

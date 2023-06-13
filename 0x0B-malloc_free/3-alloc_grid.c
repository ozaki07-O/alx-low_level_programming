#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(g[j]);
			}
			free(g);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;

	return (g);
}

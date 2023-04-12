#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - 
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: array 2D
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if (width < 1 || height < 1)
		return (NULL);

	t = (int **)malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (int*)malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j]= 0;
	return (t);
}

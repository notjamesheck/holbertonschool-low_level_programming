#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Entry point
* @width: int parameter
* @height: int parameter
* Return: double pointer to int array
*/
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **columns = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	columns = malloc(sizeof(int *) * height);

	if (columns == NULL)
	{
		free(columns);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		columns[i] = malloc(sizeof(int) * width);
		if (columns[i] == NULL)
		{
			while (i > 0)
			{
				free(columns[i]);
				i--;
			}
			free(columns);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			columns[i][j] = 0;
		}
	}
	return (columns);
}

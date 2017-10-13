#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* array_range - Entry point
* @min: int parameter
* @max: int parameter
* Return: int pointer
*/
int *array_range(int min, int max)
{
	int *ret = NULL;
	int a = 0, i = min;

	if (min > max)
	{
		return (NULL);
	}
	ret = malloc(((max - min) + 1) * sizeof(int));
	if (ret == NULL)
	{
		return (NULL);
	}
	else
	for (a = 0; i <= max; i++, a++)
	{
		ret[a] = i;
	}
	return (ret);
}

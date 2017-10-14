#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _realloc - Entry point
* @ptr: pointer to void
* @old_size: int parameter
* @new_size: int parameter
* Return: void pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	char *oldy = NULL;
	unsigned int i = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	oldy = (char *)ptr;

	if (ptr != NULL)
	{
		while (i < old_size && p != NULL)
		{
			p[i] = oldy[i];
			i++;
		}
	}
	free(ptr);
	return (p);
}

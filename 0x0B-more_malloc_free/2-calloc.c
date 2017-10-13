#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _calloc - Entry point
* @nmemb: int parameter
* @size: int parameter
* Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ret = malloc(nmemb * size);
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb ; i++)
	{
		ret[i] = 0;
	}
	return (ret);
}

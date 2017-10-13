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
	unsigned int i = 0, val = nmemb * size;

	if (nmemb == 0 || size == 0)
    		return (NULL);

	ret = malloc(nmemb * size); 
	if ((int)ret == NULL)
	{
	    return (NULL);
	}
	for (i = 0; i < val; i++)
	{
	(int)ret[i] = 0; 
		}
	return (ret);
}

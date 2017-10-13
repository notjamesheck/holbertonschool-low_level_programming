#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* malloc_checked - Entry point
* @b: int parameter
* Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}

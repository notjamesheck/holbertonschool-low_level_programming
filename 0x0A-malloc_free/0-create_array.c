#include "holberton.h"
#include <stdlib.h>

/**
* create_array - Entry point
* @size: unsigned int parameter
* @c: char parameter
* Return: pointer to allocated char array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *buff;

	if (size == 0)
	{
		return (NULL);
	}

	buff = malloc(sizeof(unsigned int) * size);

	while (i < size)
	{
		buff[i] = c;
		i++;
	}
	return (buff);
}

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
	char *buff = NULL;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	buff = malloc((size) * sizeof(char));

	if (buff == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buff[i] = c;
	}
	buff[i] = '\0';

	return (buff);
}

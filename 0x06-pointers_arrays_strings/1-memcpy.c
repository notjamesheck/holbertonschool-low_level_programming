#include "holberton.h"

/**
* _memcpy - Entry point
* @dest: pointer to char array
* @src: pointer to char array
* @n: int parameter
* Return: pointer to char array
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "holberton.h"

/**
* _strncat - Entry point
* @dest: pointer to char array
* @src: pointer to char array
* @n: strlen int
* Return: pointer to char array dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (dest[m])
	{
		m++;
	}

	while (n > i)
	{
		dest[m + i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}

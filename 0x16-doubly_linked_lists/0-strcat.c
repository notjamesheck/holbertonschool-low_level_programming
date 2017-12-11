#include "holberton.h"

/**
* _strcat - Entry point
* @dest: pointer to char array
* @src: pointer to char array
* Return: pointer to char array dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, m = 0;

	while (dest[m])
	{
		m++;
	}

	while (src[i])
	{
		dest[i + m] = src[i];
		i++;
	}
	dest[i + m] = '\0';
	return (dest);
}

#include "holberton.h"

/**
* _strncpy - Entry point
* @dest: pointer to char array
* @src: pointer to char array
* @n: int counter
* Return: pointer to char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

#include "holberton.h"

/**
* _strcpy - pointer to Entry point
* @dest: array pointer
* @src: array pointer
* Return: char, copy src to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

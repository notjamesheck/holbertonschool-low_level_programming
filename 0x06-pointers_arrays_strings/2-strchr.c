#include "holberton.h"

/**
* _strchr - Entry point
* @s: pointer to a char array
* @c: int parameter
* Return: pointer to char array, starting w/ int param
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	return (s);
}

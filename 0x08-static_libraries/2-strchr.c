#include "holberton.h"

/**
* _strchr - Entry point
* @s: pointer to a char array
* @c: int parameter
* Return: pointer to char array, starting w/ int param
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

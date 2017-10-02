#include "holberton.h"
#include <stdio.h>
/**
* _strchr - Entry point
* @s: pointer to a char array
* @c: int parameter
* Return: pointer to char array, starting w/ int param
*/
char *_strchr(char *s, char c)
{
	int i = 0; 

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}

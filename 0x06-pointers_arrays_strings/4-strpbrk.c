#include "holberton.h"

/**
* _strpbrk - Entry point
* @s: pointer to a string
* @accept: pointer to a string
* Return: pointer to s at first occurence of accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, o;

	while (s[i])
	{
		o = 0;
		while (accept[o] != s[i] && accept[o])
		{
			o++;
		}
		if (accept[o] == s[i])
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

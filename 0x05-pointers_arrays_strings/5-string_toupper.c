#include "holberton.h"

/**
* string_toupper - Entry point
* @p: pointer to char string
* Return: pointer to char
*/
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p);
}

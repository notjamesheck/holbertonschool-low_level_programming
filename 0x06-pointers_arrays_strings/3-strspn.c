#include "holberton.h"

/**
* _strspn - Entry point
* @s: pointer to string
* @accept: pointer to string
* Return: unsigned int, value is # of matching bytes in span
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	int i = 0, o;

	while (s[i])
	{
		o = 0;
		while (accept[o] != s[i] && accept[o] != '\0')
		{
			o++;
		}

		if (accept[o] == s[i])
		{
			sum++;
			i++;
		}
		else
		return (sum);
	}
	return (sum);
}

#include "holberton.h"

/**
* _memset - Entry point
* @s: pointer to an char array
* @b: char value to overwrite value at s
* @n: # of times to write b to s
* Return: pointer to char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

#include "holberton.h"

/**
* _strcmp - Entry point
* @s1: pointer to char array
* @s2: pointer to char array
* Return: pointer to int
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}

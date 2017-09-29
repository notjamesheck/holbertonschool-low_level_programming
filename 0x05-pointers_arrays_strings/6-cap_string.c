#include "holberton.h"

/**
* cap_string - Entry point
* @p: pointer to a char
* Return: pointer to char
*/
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i]; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			if (p[i - 1] == ' ' || p[i - 1] == '	' || p[i - 1] == '\n')
			{
				p[i] -= 32;
			}

			if (p[i - 1] == ';' || p[i - 1] == '.' || p[i - 1] == '!')
			{
				p[i] -= 32;
			}

			if (p[i - 1] == '"' ||  p[i - 1] == '(' || p[i - 1] == ')')
			{
				p[i] -= 32;
			}

			if (p[i - 1] == '{' || p[i - 1] == '}')
			{
				p[i] -= 32;
			}
			
			if (p[i - 1] == ',' || p[i - 1] == '?')
			{
				p[i] -= 32;
			}
		}
	}
	return (p);
}

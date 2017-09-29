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
			if (p[i - 1] == 32 || p[i - 1] == 9 || p[i - 1] == 10 ||  p[i - 1] == 44)
			{
				p[i] -= 32;
			}

			if (p[i - 1] == 59 || p[i - 1] == 46 || p[i - 1] == 33 || p[i - 1] == 63)
			{
				p[i] -= 32;
			}

			if (p[i - 1] == 34 ||  p[i - 1] == 40 || p[i - 1] == 41)
			{
				p[i] -= 32;
			}

			if (p[i - 1] == '{' || p[i - 1] == '}')
			{
				p[i] -= 32;
			}

		}
	}
	return (p);
}

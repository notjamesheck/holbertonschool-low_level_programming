#include "holberton.h"

/**
* rot13 - Entry point
* @i: pointer to char
* Return: pointer to char
*/
char *rot13(char *i)
{
	int x;

	for (x = 0; i[x]; x++)
	{
		while ((i[x] <= 'z' && i[x] >= 'a') || (i[x] <= 'Z' && i[x] >= 'A'))
		{
			if ((i[x] >= 'n' && i[x] <= 'z') || (i[x] >= 'N' && i[x] <= 'Z'))
			{
				i[x] -= 26;
			}
			i[x] += 13;
			break;
		}
	}
	return (i);
}

#include "holberton.h"

/**
* leet - Entry point
* @i: pointer to char
* Return: pointer to char
*/
char *leet(char *i)
{
	int x;

	while (i[x])
	{
		if (i[x] == 'a' || i[x] == 'A')
		{
			i[x] = '4';
		}
		else if (i[x] == 'e' || i[x] == 'E')
		{
			i[x] = '3';
		}
		else if (i[x] == 'o' || i[x] == 'O')
		{
			i[x] = '0';
		}
		else if (i[x] == 't' || i[x] == 'T')
		{
			i[x] = '7';
		}
		else if (i[x] == 'l' || i[x] == 'L')
		{
			i[x] = '1';
		}
		x++;
	}
	return (i);
}


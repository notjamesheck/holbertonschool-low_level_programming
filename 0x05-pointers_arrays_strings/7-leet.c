#include "holberton.h"

/**
* leet - Entry point
* @i: pointer to char
* Return: pointer to char
*/
char *leet(char *i)
{
	int x = 0, y = 0;
	char tim2[] = "4433007711";
	char tim1[] = "AaEeOoTtLl";

	while (i[x])
	{
		for (y = 0; tim1[y] != '\0'; y++)
		{
			if (i[x] == tim1[y])
			{
				i[x] = tim2[y];
			}
		}
		x++;
	}
	return (i);
}

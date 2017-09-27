#include "holberton.h"
#include <stdio.h>
/**
* puts_half - Entry point
* @str: pointer to char array
* Return: void, print half of string
*/
void puts_half(char *str)
{
	int i;

	while (str[i])
	{
		i++;
	}

	if (i % 2 != 0)
	{
		i = i + 1;
	}
	
	i = i / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
			
}

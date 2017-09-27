#include "holberton.h"

/**
* puts_half - Entry point
* @str: pointer to char array
* Return: void, print half of string
*/
void puts_half(char *str)
{
	int i, c;

	i = _strlen(str);

	if (i % 2 != 0)
	i -= 1;

	for (i = i / 2; c < i; c++)
	{
		_putchar(*(str + (c + i)));
	}

	_putchar('\n');
}
